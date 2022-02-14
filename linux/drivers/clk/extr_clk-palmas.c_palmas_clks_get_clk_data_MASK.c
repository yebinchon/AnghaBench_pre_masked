
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct palmas_clock_info {unsigned int ext_control_pin; } ;
struct device_node {int dummy; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,struct device_node*,unsigned int) ;
 int FUNC_1 (struct device_node*,char*,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_3,
         struct palmas_clock_info *VAR_4)
{
 struct device_node *VAR_5 = VAR_3->dev.of_node;
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, "ti,external-sleep-control",
       &VAR_6);
 if (VAR_7)
  return;

 switch (VAR_6) {
 case 130:
  VAR_6 = VAR_0;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 case 128:
  VAR_6 = VAR_2;
  break;
 default:
  FUNC_0(&VAR_3->dev, "%pOFn: Invalid ext control option: %u\n",
    VAR_5, VAR_6);
  VAR_6 = 0;
  break;
 }
 VAR_4->ext_control_pin = VAR_6;
}
