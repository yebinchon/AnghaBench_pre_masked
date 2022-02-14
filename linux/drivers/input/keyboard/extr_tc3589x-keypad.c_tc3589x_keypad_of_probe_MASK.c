
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
typedef struct tc3589x_keypad_platform_data {scalar_t__ kcol; scalar_t__ krow; int enable_wakeup; int debounce_period; int irqtype; int settle_time; scalar_t__ no_autorepeat; } const tc3589x_keypad_platform_data ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tc3589x_keypad_platform_data const* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct tc3589x_keypad_platform_data const* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*,char*,int*) ;

__attribute__((used)) static const struct tc3589x_keypad_platform_data *
FUNC_6(struct device *VAR_10)
{
 struct device_node *VAR_11 = VAR_10->of_node;
 struct tc3589x_keypad_platform_data *VAR_12;
 u32 VAR_13, VAR_14;
 u32 VAR_15;
 int VAR_16;

 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_12 = FUNC_2(VAR_10, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return FUNC_0(-VAR_3);

 FUNC_5(VAR_11, "keypad,num-columns", &VAR_13);
 FUNC_5(VAR_11, "keypad,num-rows", &VAR_14);
 VAR_12->kcol = (u8) VAR_13;
 VAR_12->krow = (u8) VAR_14;
 if (!VAR_12->krow || !VAR_12->kcol ||
      VAR_12->krow > VAR_8 || VAR_12->kcol > VAR_6) {
  FUNC_1(VAR_10,
   "keypad columns/rows not properly specified (%ux%u)\n",
   VAR_12->kcol, VAR_12->krow);
  return FUNC_0(-VAR_0);
 }

 if (!FUNC_3(VAR_11, "linux,keymap", &VAR_16)) {
  FUNC_1(VAR_10, "property linux,keymap not found\n");
  return FUNC_0(-VAR_2);
 }

 VAR_12->no_autorepeat = FUNC_4(VAR_11, "linux,no-autorepeat");

 VAR_12->enable_wakeup = FUNC_4(VAR_11, "wakeup-source") ||

         FUNC_4(VAR_11, "linux,wakeup");


 FUNC_5(VAR_11, "debounce-delay-ms", &VAR_15);
 if (VAR_15)
  VAR_12->debounce_period = VAR_15 * 16;
 else
  VAR_12->debounce_period = VAR_7;

 VAR_12->settle_time = VAR_9;

 VAR_12->irqtype = VAR_5;

 return VAR_12;
}
