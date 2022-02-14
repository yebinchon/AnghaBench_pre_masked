
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_0)
{
 if (FUNC_0(VAR_0, "apm,xgene-socpll-clock"))
  return 1;
 if (FUNC_0(VAR_0, "apm,xgene-pcppll-clock"))
  return 1;
 return 2;
}
