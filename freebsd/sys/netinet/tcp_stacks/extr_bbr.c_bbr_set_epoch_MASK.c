
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ rc_rcv_epoch_start; int rc_rtt_epoch; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
typedef int int32_t ;


 int FUNC_0 (struct tcp_bbr*,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct tcp_bbr *VAR_0, uint32_t VAR_1, int32_t VAR_2)
{
 uint32_t VAR_3;


 VAR_0->r_ctl.rc_rtt_epoch++;
 VAR_3 = VAR_1 - VAR_0->r_ctl.rc_rcv_epoch_start;
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 VAR_0->r_ctl.rc_rcv_epoch_start = VAR_1;
}
