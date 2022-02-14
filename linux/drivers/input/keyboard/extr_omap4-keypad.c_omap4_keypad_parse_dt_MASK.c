
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap4_keypad {int no_autorepeat; int cols; int rows; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device*,int *,int *) ;
 scalar_t__ FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0,
     struct omap4_keypad *VAR_1)
{
 struct device_node *VAR_2 = VAR_0->of_node;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_1->rows,
          &VAR_1->cols);
 if (VAR_3)
  return VAR_3;

 if (FUNC_1(VAR_2, "linux,input-no-autorepeat", ((void*)0)))
  VAR_1->no_autorepeat = 1;

 return 0;
}
