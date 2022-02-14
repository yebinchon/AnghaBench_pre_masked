
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ crs_dr; } ;
union cvmx_pemx_int_sum {TYPE_1__ s; int u64; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(void)
{
 union cvmx_pemx_int_sum VAR_0;
 VAR_0.u64 = FUNC_1(FUNC_0(1));
 if (VAR_0.s.crs_dr)
  return 1;
 return 0;
}
