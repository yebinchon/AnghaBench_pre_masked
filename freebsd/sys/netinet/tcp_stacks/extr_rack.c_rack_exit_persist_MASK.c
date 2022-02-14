
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_rxtshift; int t_flags; } ;
struct TYPE_3__ {scalar_t__ rc_went_idle_time; scalar_t__ rc_hpts_flags; } ;
struct tcp_rack {TYPE_1__ r_ctl; scalar_t__ rc_in_persist; TYPE_2__* rc_inp; } ;
struct TYPE_4__ {scalar_t__ inp_in_hpts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_1(struct tcpcb *VAR_2, struct tcp_rack *VAR_3)
{
 if (VAR_3->rc_inp->inp_in_hpts) {
  FUNC_0(VAR_3->rc_inp, VAR_0);
  VAR_3->r_ctl.rc_hpts_flags = 0;
 }
 VAR_3->rc_in_persist = 0;
 VAR_3->r_ctl.rc_went_idle_time = 0;
 VAR_2->t_flags &= ~VAR_1;
 VAR_2->t_rxtshift = 0;
}
