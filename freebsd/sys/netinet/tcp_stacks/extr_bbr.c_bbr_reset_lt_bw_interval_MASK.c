
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int rc_lost; int rc_lt_lost; int rc_delivered; int rc_lt_del; int rc_del_time; int rc_lt_time; int rc_pkt_epoch; int rc_lt_epoch; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;



__attribute__((used)) static inline void
FUNC_0(struct tcp_bbr *VAR_0, uint32_t VAR_1)
{
 VAR_0->r_ctl.rc_lt_epoch = VAR_0->r_ctl.rc_pkt_epoch;
 VAR_0->r_ctl.rc_lt_time = VAR_0->r_ctl.rc_del_time;
 VAR_0->r_ctl.rc_lt_del = VAR_0->r_ctl.rc_delivered;
 VAR_0->r_ctl.rc_lt_lost = VAR_0->r_ctl.rc_lost;
}
