
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int en; } ;
union cvmx_gmxx_inf_mode {int u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(int VAR_0)
{
 union cvmx_gmxx_inf_mode VAR_1;






 VAR_1.u64 = FUNC_2(FUNC_0(VAR_0));
 VAR_1.s.en = 1;
 FUNC_3(FUNC_0(VAR_0), VAR_1.u64);
 return FUNC_1(VAR_0);
}
