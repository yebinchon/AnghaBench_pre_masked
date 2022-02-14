
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ld9040 {int height_mm; int width_mm; int reset_delay; int power_on_delay; int vm; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device_node*,int *,int ) ;
 int FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct ld9040 *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 struct device_node *VAR_2 = VAR_1->of_node;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_0->vm, 0);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_1(VAR_2, "power-on-delay", &VAR_0->power_on_delay);
 FUNC_1(VAR_2, "reset-delay", &VAR_0->reset_delay);
 FUNC_1(VAR_2, "panel-width-mm", &VAR_0->width_mm);
 FUNC_1(VAR_2, "panel-height-mm", &VAR_0->height_mm);

 return 0;
}
