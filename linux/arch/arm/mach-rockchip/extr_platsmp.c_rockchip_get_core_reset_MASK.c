
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 struct device* FUNC_0 (int) ;
 struct device_node* FUNC_1 (int,int *) ;
 struct reset_control* FUNC_2 (struct device_node*,int *) ;

__attribute__((used)) static struct reset_control *FUNC_3(int VAR_0)
{
 struct device *VAR_1 = FUNC_0(VAR_0);
 struct device_node *VAR_2;


 if (VAR_1)
  VAR_2 = VAR_1->of_node;
 else
  VAR_2 = FUNC_1(VAR_0, ((void*)0));

 return FUNC_2(VAR_2, ((void*)0));
}
