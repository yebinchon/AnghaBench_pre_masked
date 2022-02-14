
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s6e8aa0 {void* flip_vertical; void* flip_horizontal; int height_mm; int width_mm; int init_delay; int reset_delay; int power_on_delay; int vm; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device_node*,int *,int ) ;
 void* FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct s6e8aa0 *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 struct device_node *VAR_2 = VAR_1->of_node;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_0->vm, 0);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_2(VAR_2, "power-on-delay", &VAR_0->power_on_delay);
 FUNC_2(VAR_2, "reset-delay", &VAR_0->reset_delay);
 FUNC_2(VAR_2, "init-delay", &VAR_0->init_delay);
 FUNC_2(VAR_2, "panel-width-mm", &VAR_0->width_mm);
 FUNC_2(VAR_2, "panel-height-mm", &VAR_0->height_mm);

 VAR_0->flip_horizontal = FUNC_1(VAR_2, "flip-horizontal");
 VAR_0->flip_vertical = FUNC_1(VAR_2, "flip-vertical");

 return 0;
}
