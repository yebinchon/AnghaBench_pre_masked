
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ rc_rcv_epoch_start; } ;
struct tcp_bbr {int rc_is_pkt_epoch_now; TYPE_1__ r_ctl; } ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tcp_bbr*,int ) ;
 int FUNC_1 (struct tcp_bbr*,scalar_t__,int) ;
 int FUNC_2 (struct tcp_bbr*,scalar_t__,int,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct tcp_bbr *VAR_1, uint32_t VAR_2, int32_t VAR_3, uint32_t VAR_4)
{
 int32_t VAR_5 = 0;

 if ((VAR_2 - VAR_1->r_ctl.rc_rcv_epoch_start) >= FUNC_0(VAR_1, VAR_0)) {
  FUNC_1(VAR_1, VAR_2, VAR_3);

  VAR_5 = 1;
 }
 FUNC_2(VAR_1, VAR_2, VAR_5, VAR_1->rc_is_pkt_epoch_now, VAR_4);
}
