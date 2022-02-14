
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hg2tx_en; } ;
union cvmx_gmxx_hg2_control {TYPE_1__ s; int u64; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(int VAR_0)
{
 union cvmx_gmxx_hg2_control VAR_1;


 VAR_1.u64 = FUNC_1(FUNC_0(VAR_0));
 if (VAR_1.s.hg2tx_en)
  return 16;
 else
  return 1;
}
