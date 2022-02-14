
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int FUNC_0 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_0, struct device_node *VAR_1)
{
 if (VAR_0 == 0xffffffff)
  return 0;
 if (!FUNC_0(VAR_1, "button", ((void*)0)))
  return 0;

 return 1;
}
