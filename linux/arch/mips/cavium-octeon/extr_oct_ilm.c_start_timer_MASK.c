
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int one_shot; int len; } ;
union cvmx_ciu_timx {scalar_t__ u64; TYPE_1__ s; } ;
typedef int u64 ;
struct TYPE_4__ {void* timer_start2; void* timer_start1; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_2__ VAR_0 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 void* FUNC_5 () ;

__attribute__((used)) static void FUNC_6(int VAR_1, u64 VAR_2)
{
 union cvmx_ciu_timx VAR_3;
 unsigned long VAR_4;

 VAR_3.u64 = 0;
 VAR_3.s.one_shot = 1;
 VAR_3.s.len = VAR_2;
 FUNC_4(VAR_4);
 VAR_0.timer_start1 = FUNC_5();
 FUNC_2(FUNC_0(VAR_1), VAR_3.u64);

 VAR_3.u64 = FUNC_1(FUNC_0(VAR_1));
 VAR_0.timer_start2 = FUNC_5();
 FUNC_3(VAR_4);
}
