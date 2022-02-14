
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_2__ {void* cur_rtt_send_time; void* ts_in; void* cur_rtt; } ;
struct tcp_bbr {int rtt_valid; TYPE_1__ r_ctl; } ;



__attribute__((used)) static void
FUNC_0(struct tcp_bbr *VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 VAR_0->rtt_valid = 1;
 VAR_0->r_ctl.cur_rtt = VAR_1;
 VAR_0->r_ctl.ts_in = VAR_4;
 if (VAR_2)
  VAR_0->r_ctl.cur_rtt_send_time = VAR_2;
}
