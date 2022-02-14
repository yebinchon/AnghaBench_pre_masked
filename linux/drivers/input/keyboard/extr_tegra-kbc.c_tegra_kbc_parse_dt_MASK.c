
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tegra_kbc {int debounce_cnt; int repeat_cnt; int use_ghost_filter; int wakeup; int num_rows_and_columns; TYPE_2__* pin_cfg; TYPE_3__* dev; TYPE_1__* hw_support; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_5__ {int num; int type; } ;
struct TYPE_4__ {int max_rows; int max_columns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,int*) ;
 int FUNC_5 (struct device_node*,char*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct tegra_kbc *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev->of_node;
 u32 VAR_8;
 int VAR_9;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12[VAR_2];
 u32 VAR_13[VAR_2];
 int VAR_14;
 int VAR_15;

 if (!FUNC_4(VAR_7, "nvidia,debounce-delay-ms", &VAR_8))
  VAR_6->debounce_cnt = VAR_8;

 if (!FUNC_4(VAR_7, "nvidia,repeat-delay-ms", &VAR_8))
  VAR_6->repeat_cnt = VAR_8;

 if (FUNC_1(VAR_7, "nvidia,needs-ghost-filter", ((void*)0)))
  VAR_6->use_ghost_filter = 1;

 if (FUNC_3(VAR_7, "wakeup-source") ||
     FUNC_3(VAR_7, "nvidia,wakeup-source"))
  VAR_6->wakeup = 1;

 if (!FUNC_2(VAR_7, "nvidia,kbc-row-pins", &VAR_14)) {
  FUNC_0(VAR_6->dev, "property nvidia,kbc-row-pins not found\n");
  return -VAR_1;
 }
 VAR_10 = VAR_14 / sizeof(u32);

 if (!FUNC_2(VAR_7, "nvidia,kbc-col-pins", &VAR_14)) {
  FUNC_0(VAR_6->dev, "property nvidia,kbc-col-pins not found\n");
  return -VAR_1;
 }
 VAR_11 = VAR_14 / sizeof(u32);

 if (VAR_10 > VAR_6->hw_support->max_rows) {
  FUNC_0(VAR_6->dev,
   "Number of rows is more than supported by hardware\n");
  return -VAR_0;
 }

 if (VAR_11 > VAR_6->hw_support->max_columns) {
  FUNC_0(VAR_6->dev,
   "Number of cols is more than supported by hardware\n");
  return -VAR_0;
 }

 if (!FUNC_2(VAR_7, "linux,keymap", &VAR_14)) {
  FUNC_0(VAR_6->dev, "property linux,keymap not found\n");
  return -VAR_1;
 }

 if (!VAR_10 || !VAR_11 || ((VAR_10 + VAR_11) > VAR_2)) {
  FUNC_0(VAR_6->dev,
   "keypad rows/columns not properly specified\n");
  return -VAR_0;
 }


 for (VAR_9 = 0; VAR_9 < VAR_6->num_rows_and_columns; VAR_9++)
  VAR_6->pin_cfg[VAR_9].type = VAR_4;

 VAR_15 = FUNC_5(VAR_7, "nvidia,kbc-row-pins",
    VAR_13, VAR_10);
 if (VAR_15 < 0) {
  FUNC_0(VAR_6->dev, "Rows configurations are not proper\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_5(VAR_7, "nvidia,kbc-col-pins",
    VAR_12, VAR_11);
 if (VAR_15 < 0) {
  FUNC_0(VAR_6->dev, "Cols configurations are not proper\n");
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_6->pin_cfg[VAR_13[VAR_9]].type = VAR_5;
  VAR_6->pin_cfg[VAR_13[VAR_9]].num = VAR_9;
 }

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  VAR_6->pin_cfg[VAR_12[VAR_9]].type = VAR_3;
  VAR_6->pin_cfg[VAR_12[VAR_9]].num = VAR_9;
 }

 return 0;
}
