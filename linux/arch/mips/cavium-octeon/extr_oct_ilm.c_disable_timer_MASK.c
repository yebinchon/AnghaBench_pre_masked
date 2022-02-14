
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; scalar_t__ one_shot; } ;
union cvmx_ciu_timx {int u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(int VAR_0)
{
 union cvmx_ciu_timx VAR_1;

 VAR_1.s.one_shot = 0;
 VAR_1.s.len = 0;
 FUNC_2(FUNC_0(VAR_0), VAR_1.u64);

 VAR_1.u64 = FUNC_1(FUNC_0(VAR_0));
}
