
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int rc_pkt_epoch_rtt; int rc_last_rtt; scalar_t__ rc_ack_hdwr_delay; int rc_rttprop; } ;
struct tcp_bbr {TYPE_2__* rc_tp; TYPE_1__ r_ctl; scalar_t__ rc_ack_was_delayed; } ;
typedef scalar_t__ int32_t ;
struct TYPE_4__ {scalar_t__ t_srtt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static __inline uint32_t
FUNC_3(struct tcp_bbr *VAR_7, int32_t VAR_8)
{
 uint32_t VAR_9;
 uint32_t VAR_10;

 VAR_9 = FUNC_1(&VAR_7->r_ctl.rc_rttprop);
 if (FUNC_1(&VAR_7->r_ctl.rc_rttprop) == 0xffffffff) {

  if (VAR_7->rc_tp->t_srtt == 0)
   VAR_9 = VAR_0;
  else
   VAR_9 = (FUNC_0(VAR_7->rc_tp->t_srtt) >> VAR_5);




  if (VAR_9 < VAR_6) {
   VAR_9 = VAR_6;
  }
 }

 if (VAR_8 == VAR_2) {
  VAR_10 = VAR_9;
 } else if (VAR_8 == VAR_1) {
  if (VAR_7->r_ctl.rc_pkt_epoch_rtt) {
   VAR_10 = VAR_7->r_ctl.rc_pkt_epoch_rtt;
  } else {

   VAR_10 = VAR_9;
  }
 } else if (VAR_8 == VAR_3) {
  VAR_10 = VAR_7->r_ctl.rc_last_rtt;

  if (VAR_7->rc_ack_was_delayed)
   VAR_10 += VAR_7->r_ctl.rc_ack_hdwr_delay;
 } else if (VAR_8 == VAR_4) {
  VAR_10 = (FUNC_0(VAR_7->rc_tp->t_srtt) >> VAR_5);
 } else {

  VAR_10 = VAR_9;



 }
 return (VAR_10);
}
