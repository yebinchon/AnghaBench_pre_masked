
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control {int dummy; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int,int ) ;
 struct reset_control* FUNC_1 (struct device_node*,int *) ;

__attribute__((used)) static struct reset_control *FUNC_2(int VAR_0)
{
 struct device_node *VAR_1 = FUNC_0(VAR_0, 0);

 return FUNC_1(VAR_1, ((void*)0));
}
