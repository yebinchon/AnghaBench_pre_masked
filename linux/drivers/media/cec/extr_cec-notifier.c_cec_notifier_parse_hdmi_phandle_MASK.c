
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 struct platform_device* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct device*) ;

struct device *FUNC_6(struct device *VAR_2)
{
 struct platform_device *VAR_3;
 struct device *VAR_4 = ((void*)0);
 struct device_node *VAR_5;

 VAR_5 = FUNC_4(VAR_2->of_node, "hdmi-phandle", 0);

 if (!VAR_5) {
  FUNC_1(VAR_2, "Failed to find HDMI node in device tree\n");
  return FUNC_0(-VAR_0);
 }
 VAR_3 = FUNC_2(VAR_5);
 FUNC_3(VAR_5);
 if (VAR_3) {
  VAR_4 = &VAR_3->dev;






  FUNC_5(VAR_4);
  return VAR_4;
 }
 return FUNC_0(-VAR_1);
}
