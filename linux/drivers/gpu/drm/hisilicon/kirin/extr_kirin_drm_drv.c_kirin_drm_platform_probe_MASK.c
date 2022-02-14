
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int *,struct component_match*) ;
 int FUNC_1 (struct device*,struct component_match**,int ,struct device_node*) ;
 int VAR_2 ;
 struct device_node* FUNC_2 (struct device_node*,int ,int ) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct device_node *VAR_5 = VAR_4->of_node;
 struct component_match *VAR_6 = ((void*)0);
 struct device_node *VAR_7;

 VAR_7 = FUNC_2(VAR_5, 0, 0);
 if (!VAR_7)
  return -VAR_0;

 FUNC_1(VAR_4, &VAR_6, VAR_1, VAR_7);
 FUNC_3(VAR_7);

 return FUNC_0(VAR_4, &VAR_2, VAR_6);
}
