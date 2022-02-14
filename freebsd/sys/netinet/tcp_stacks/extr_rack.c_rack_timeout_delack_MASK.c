
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int t_flags; TYPE_1__* t_timers; } ;
struct TYPE_4__ {int rc_hpts_flags; } ;
struct tcp_rack {TYPE_2__ r_ctl; } ;
struct TYPE_3__ {int tt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct tcp_rack*,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct tcpcb *VAR_6, struct tcp_rack *VAR_7, uint32_t VAR_8)
{
 if (VAR_6->t_timers->tt_flags & VAR_4) {
  return (1);
 }
 FUNC_1(VAR_7, VAR_1, 0);
 VAR_6->t_flags &= ~VAR_3;
 VAR_6->t_flags |= VAR_2;
 FUNC_0(VAR_5);
 VAR_7->r_ctl.rc_hpts_flags &= ~VAR_0;
 return (0);
}
