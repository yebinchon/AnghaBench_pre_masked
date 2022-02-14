
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct tcpcb {int dummy; } ;
struct TYPE_3__ {int rc_hpts_flags; int rc_last_output_to; } ;
struct tcp_rack {int rc_tmr_stopped; TYPE_1__ r_ctl; TYPE_2__* rc_inp; } ;
struct TYPE_4__ {scalar_t__ inp_in_hpts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct tcp_rack*,int,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_3, struct tcp_rack *VAR_4, uint32_t VAR_5, int VAR_6)
{
 uint8_t VAR_7 = 0;

 if ((VAR_4->r_ctl.rc_hpts_flags & VAR_1) &&
     FUNC_0(VAR_5, VAR_4->r_ctl.rc_last_output_to)) {
  FUNC_2(VAR_4->rc_inp, VAR_0);
  VAR_7 = 1;
 }
 if (VAR_4->r_ctl.rc_hpts_flags & VAR_2) {
  VAR_4->rc_tmr_stopped = VAR_4->r_ctl.rc_hpts_flags & VAR_2;
  if (VAR_4->rc_inp->inp_in_hpts &&
      ((VAR_4->r_ctl.rc_hpts_flags & VAR_1) == 0)) {





   FUNC_2(VAR_4->rc_inp, VAR_0);
   VAR_7 = 1;
  }
  FUNC_1(VAR_4, VAR_7, VAR_6);
  VAR_4->r_ctl.rc_hpts_flags &= ~(VAR_2);
 }
}
