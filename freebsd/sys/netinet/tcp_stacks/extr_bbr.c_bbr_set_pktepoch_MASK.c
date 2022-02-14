
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ rc_lost; scalar_t__ rc_lost_at_pktepoch; scalar_t__ rc_delivered; scalar_t__ rc_pkt_epoch_del; scalar_t__ rc_pkt_epoch; scalar_t__ rc_pkt_epoch_time; int rc_pkt_epoch_rtt; int recovery_lr; scalar_t__ rc_pkt_epoch_loss_rate; } ;
struct tcp_bbr {scalar_t__ no_pacing_until; TYPE_2__ r_ctl; scalar_t__ rc_no_pacing; TYPE_1__* rc_tp; } ;
typedef int int32_t ;
struct TYPE_3__ {int t_flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct tcp_bbr*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct tcp_bbr*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_4(struct tcp_bbr *VAR_0, uint32_t VAR_1, int32_t VAR_2)
{
 uint64_t VAR_3;
 uint32_t VAR_4, VAR_5;

 if (VAR_0->r_ctl.rc_lost > VAR_0->r_ctl.rc_lost_at_pktepoch)
  VAR_4 = VAR_0->r_ctl.rc_lost - VAR_0->r_ctl.rc_lost_at_pktepoch;
 else
  VAR_4 = 0;
 VAR_5 = VAR_0->r_ctl.rc_delivered - VAR_0->r_ctl.rc_pkt_epoch_del;
 if (VAR_4 == 0) {
  VAR_3 = 0;
 } else if (VAR_5) {
  VAR_3 = VAR_4;
  VAR_3 *= (uint64_t)1000;
  VAR_3 /= (uint64_t)VAR_5;
 } else {

  VAR_3 = 1000;
 }
 VAR_0->r_ctl.rc_pkt_epoch_loss_rate = (uint32_t)VAR_3;
 if (FUNC_0(VAR_0->rc_tp->t_flags))
  VAR_0->r_ctl.recovery_lr += (uint32_t)VAR_3;
 VAR_0->r_ctl.rc_pkt_epoch++;
 if (VAR_0->rc_no_pacing &&
     (VAR_0->r_ctl.rc_pkt_epoch >= VAR_0->no_pacing_until)) {
  VAR_0->rc_no_pacing = 0;
  FUNC_3(VAR_0, VAR_1);
 }
 VAR_0->r_ctl.rc_pkt_epoch_rtt = FUNC_1(VAR_1, VAR_0->r_ctl.rc_pkt_epoch_time);
 VAR_0->r_ctl.rc_pkt_epoch_time = VAR_1;

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5);
 VAR_0->r_ctl.rc_pkt_epoch_del = VAR_0->r_ctl.rc_delivered;
 VAR_0->r_ctl.rc_lost_at_pktepoch = VAR_0->r_ctl.rc_lost;
}
