
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int rc_hpts_flags; scalar_t__ rc_last_delay_val; } ;
struct tcp_bbr {int rc_timer_first; scalar_t__ rc_pacer_started; int rc_tmr_stopped; TYPE_1__ r_ctl; TYPE_2__* rc_inp; } ;
typedef int int32_t ;
struct TYPE_4__ {scalar_t__ inp_in_hpts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (struct tcp_bbr*,int ,scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(struct tcp_bbr *VAR_2, int32_t VAR_3, uint32_t VAR_4)
{
 if (VAR_2->r_ctl.rc_hpts_flags & VAR_1) {
  uint8_t VAR_5 = 0;

  if (VAR_2->rc_inp->inp_in_hpts &&
      (VAR_2->rc_timer_first == 1)) {





   VAR_5 = 1;
   FUNC_2(VAR_2->rc_inp, VAR_0);
   if (VAR_2->r_ctl.rc_last_delay_val) {

    uint32_t VAR_6;

    if (FUNC_0(VAR_4, VAR_2->rc_pacer_started))
     VAR_6 = VAR_4 - VAR_2->rc_pacer_started;
    else
     VAR_6 = 0;
    if (VAR_2->r_ctl.rc_last_delay_val > VAR_6) {

     VAR_2->r_ctl.rc_last_delay_val -= VAR_6;
    } else {
     VAR_2->r_ctl.rc_last_delay_val = 0;
    }
    VAR_2->rc_pacer_started = VAR_4;
   }
  }
  VAR_2->rc_timer_first = 0;
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
  VAR_2->rc_tmr_stopped = VAR_2->r_ctl.rc_hpts_flags & VAR_1;
  VAR_2->r_ctl.rc_hpts_flags &= ~(VAR_1);
 }
}
