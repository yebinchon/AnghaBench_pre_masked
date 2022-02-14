
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int t_flags; } ;
struct TYPE_2__ {int rc_hpts_flags; } ;
struct tcp_bbr {TYPE_1__ r_ctl; scalar_t__ rc_all_timers_stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tcp_bbr*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(struct tcpcb *VAR_5, struct tcp_bbr *VAR_6, uint32_t VAR_7)
{
 if (VAR_6->rc_all_timers_stopped) {
  return (1);
 }
 FUNC_1(VAR_6, VAR_7, VAR_0);
 VAR_5->t_flags &= ~VAR_3;
 VAR_5->t_flags |= VAR_2;
 FUNC_0(VAR_4);
 VAR_6->r_ctl.rc_hpts_flags &= ~VAR_1;
 return (0);
}
