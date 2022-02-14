
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct in_addr {int s_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct in_addr VAR_0)
{
 u_long VAR_1 = FUNC_5(VAR_0.s_addr);

 if (FUNC_0(VAR_1) || FUNC_3(VAR_1) || FUNC_1(VAR_1) ||
     FUNC_4(VAR_1) || FUNC_2(VAR_1))
  return (0);
 return (1);
}
