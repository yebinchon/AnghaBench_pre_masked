
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_0)
{
 if (FUNC_0(VAR_0, "broken-idle")) {
  FUNC_1("CPU idle is currently broken: disabling\n");
  return 1;
 }

 return 0;
}
