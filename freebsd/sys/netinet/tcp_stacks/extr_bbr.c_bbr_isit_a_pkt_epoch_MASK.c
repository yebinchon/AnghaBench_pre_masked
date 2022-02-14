
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int rc_pkt_epoch_del; } ;
struct tcp_bbr {int rc_is_pkt_epoch_now; TYPE_1__ r_ctl; } ;
struct bbr_sendmap {int r_delivered; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct tcp_bbr *VAR_0, uint32_t VAR_1, struct bbr_sendmap *VAR_2, int32_t VAR_3, int32_t VAR_4)
{
 if (FUNC_0(VAR_2->r_delivered, VAR_0->r_ctl.rc_pkt_epoch_del)) {
  VAR_0->rc_is_pkt_epoch_now = 1;
 }
}
