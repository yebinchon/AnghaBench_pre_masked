
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rs_rtt_tot; scalar_t__ rs_rtt_cnt; int rs_flags; } ;
struct TYPE_4__ {TYPE_1__ rack_rs; } ;
struct tcp_rack {TYPE_2__ r_ctl; } ;


 int VAR_0 ;

__attribute__((used)) static void inline
FUNC_0(struct tcp_rack *VAR_1)
{
 VAR_1->r_ctl.rack_rs.rs_flags = VAR_0;
 VAR_1->r_ctl.rack_rs.rs_rtt_cnt = 0;
 VAR_1->r_ctl.rack_rs.rs_rtt_tot = 0;
}
