
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shift; int shft_cnt; int shft_reg; int select; } ;
union cvmx_ciu_qlm_jtgd {TYPE_1__ s; scalar_t__ u64; } ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

uint32_t FUNC_3(int VAR_2, int VAR_3, uint32_t VAR_4)
{
 union cvmx_ciu_qlm_jtgd VAR_5;
 VAR_5.u64 = 0;
 VAR_5.s.shift = 1;
 VAR_5.s.shft_cnt = VAR_3 - 1;
 VAR_5.s.shft_reg = VAR_4;
 if (!FUNC_0(VAR_1))
  VAR_5.s.select = 1 << VAR_2;
 FUNC_2(VAR_0, VAR_5.u64);
 do {
  VAR_5.u64 = FUNC_1(VAR_0);
 } while (VAR_5.s.shift);
 return VAR_5.s.shft_reg >> (32 - VAR_3);
}
