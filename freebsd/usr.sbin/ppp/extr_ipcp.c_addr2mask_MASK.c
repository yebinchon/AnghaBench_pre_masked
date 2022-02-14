
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct in_addr {int s_addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

struct in_addr
FUNC_4(struct in_addr VAR_3)
{
  u_int32_t VAR_4 = FUNC_3(VAR_3.s_addr);

  VAR_4 = FUNC_0(VAR_4) ? VAR_0 :
          FUNC_1(VAR_4) ? VAR_1 :
          VAR_2;
  VAR_3.s_addr = FUNC_2(VAR_4);

  return VAR_3;
}
