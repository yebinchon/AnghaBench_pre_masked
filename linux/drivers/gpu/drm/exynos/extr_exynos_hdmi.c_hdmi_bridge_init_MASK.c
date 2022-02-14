
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_context {int bridge; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ,int,int) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;

__attribute__((used)) static int FUNC_5(struct hdmi_context *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev;
 struct device_node *VAR_4, *VAR_5;

 VAR_4 = FUNC_2(VAR_3->of_node, 1, -1);
 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_3(VAR_4);
 FUNC_4(VAR_4);
 if (!VAR_5) {
  FUNC_0(VAR_3, "failed to get remote port parent");
  return -VAR_0;
 }

 VAR_2->bridge = FUNC_1(VAR_5);
 FUNC_4(VAR_5);

 if (!VAR_2->bridge)
  return -VAR_1;

 return 0;
}
