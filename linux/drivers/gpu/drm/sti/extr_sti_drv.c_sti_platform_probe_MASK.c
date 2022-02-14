
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct component_match {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,int *,struct component_match*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,struct component_match**,int ,struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*,struct device_node*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 struct device_node *VAR_4 = VAR_3->of_node;
 struct device_node *VAR_5;
 struct component_match *VAR_6 = ((void*)0);

 FUNC_3(VAR_3, FUNC_0(32));

 FUNC_2(VAR_3);

 VAR_5 = FUNC_5(VAR_4, ((void*)0));

 while (VAR_5) {
  FUNC_4(VAR_3, &VAR_6, VAR_0,
        VAR_5);
  VAR_5 = FUNC_5(VAR_4, VAR_5);
 }

 return FUNC_1(VAR_3, &VAR_1, VAR_6);
}
