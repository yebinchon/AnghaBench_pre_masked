
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device_node*,char*,scalar_t__*) ;
 scalar_t__ VAR_2 ;

int FUNC_2(struct device_node *VAR_3, u32 *VAR_4,
  u32 *VAR_5, u32 *VAR_6)
{
 FUNC_1(VAR_3, "arm,vexpress,site", VAR_4);
 if (*VAR_4 == VAR_1)
  *VAR_4 = VAR_2;
 if (FUNC_0(VAR_2 == VAR_1))
  return -VAR_0;
 FUNC_1(VAR_3, "arm,vexpress,position", VAR_5);
 FUNC_1(VAR_3, "arm,vexpress,dcc", VAR_6);

 return 0;
}
