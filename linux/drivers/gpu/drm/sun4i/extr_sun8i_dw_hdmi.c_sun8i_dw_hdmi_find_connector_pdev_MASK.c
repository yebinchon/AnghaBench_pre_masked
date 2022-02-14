
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,char*) ;
 struct platform_device* FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ,int,int) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1,
          struct platform_device **VAR_2)
{
 struct platform_device *VAR_3;
 struct device_node *VAR_4;

 VAR_4 = FUNC_2(VAR_1->of_node, 1, -1);
 if (!VAR_4)
  return -VAR_0;

 if (!FUNC_0(VAR_4, "hdmi-connector")) {
  FUNC_3(VAR_4);
  return -VAR_0;
 }

 VAR_3 = FUNC_1(VAR_4);
 FUNC_3(VAR_4);
 if (!VAR_3)
  return -VAR_0;

 *VAR_2 = VAR_3;
 return 0;
}
