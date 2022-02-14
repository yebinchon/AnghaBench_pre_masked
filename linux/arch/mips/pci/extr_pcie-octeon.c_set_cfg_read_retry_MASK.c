
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cfg_rtry; } ;
union cvmx_pemx_ctl_status {int u64; TYPE_1__ s; } ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(u32 VAR_0)
{
 union cvmx_pemx_ctl_status VAR_1;
 VAR_1.u64 = FUNC_1(FUNC_0(1));
 VAR_1.s.cfg_rtry = VAR_0;
 FUNC_2(FUNC_0(1), VAR_1.u64);
}
