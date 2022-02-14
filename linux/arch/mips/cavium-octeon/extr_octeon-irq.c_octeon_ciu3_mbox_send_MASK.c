
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int raw; } ;
union cvmx_ciu3_iscx_w1s {scalar_t__ u64; TYPE_1__ s; } ;
typedef scalar_t__ u64 ;
struct octeon_ciu3_info {scalar_t__ ciu3_addr; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 unsigned int FUNC_4 (int,unsigned int) ;
 struct octeon_ciu3_info* FUNC_5 (int ,int) ;

void FUNC_6(int VAR_2, unsigned int VAR_3)
{
 struct octeon_ciu3_info *VAR_4;
 unsigned int VAR_5;
 union cvmx_ciu3_iscx_w1s VAR_6;
 u64 VAR_7;

 if (FUNC_1(VAR_3 >= VAR_0))
  return;

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 VAR_4 = FUNC_5(VAR_1, VAR_2);
 VAR_7 = VAR_4->ciu3_addr + FUNC_0(VAR_5);

 VAR_6.u64 = 0;
 VAR_6.s.raw = 1;

 FUNC_3(VAR_7, VAR_6.u64);
 FUNC_2(VAR_7);
}
