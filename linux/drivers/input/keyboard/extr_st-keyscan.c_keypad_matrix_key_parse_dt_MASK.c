
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_keyscan {int debounce_us; int n_cols; int n_rows; TYPE_2__* input_dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (struct device*,char*,int ,int ,int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int *,int *) ;
 int FUNC_3 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_4(struct st_keyscan *VAR_0)
{
 struct device *VAR_1 = VAR_0->input_dev->dev.parent;
 struct device_node *VAR_2 = VAR_1->of_node;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1, &VAR_0->n_rows,
            &VAR_0->n_cols);
 if (VAR_3) {
  FUNC_1(VAR_1, "failed to parse keypad params\n");
  return VAR_3;
 }

 FUNC_3(VAR_2, "st,debounce-us", &VAR_0->debounce_us);

 FUNC_0(VAR_1, "n_rows=%d n_col=%d debounce=%d\n",
  VAR_0->n_rows, VAR_0->n_cols,
  VAR_0->debounce_us);

 return 0;
}
