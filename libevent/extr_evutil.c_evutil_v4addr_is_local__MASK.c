
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef scalar_t__ ev_uint32_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;
 scalar_t__ FUNC_2 (scalar_t__ const) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(const struct in_addr *VAR_1)
{
 const ev_uint32_t VAR_2 = FUNC_3(VAR_1->s_addr);
 return VAR_2 == VAR_0 ||
  FUNC_2(VAR_2) ||
  FUNC_1(VAR_2) ||
  FUNC_0(VAR_2);
}
