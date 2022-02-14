
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rs_flags; scalar_t__ rs_rtt_lowest; scalar_t__ rs_rtt_highest; int rs_rtt_cnt; int rs_rtt_tot; } ;
struct TYPE_4__ {TYPE_1__ rack_rs; } ;
struct tcp_rack {TYPE_2__ r_ctl; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct tcp_rack *VAR_2, int32_t VAR_3)
{
 if ((VAR_2->r_ctl.rack_rs.rs_flags & VAR_0) ||
     (VAR_2->r_ctl.rack_rs.rs_rtt_lowest > VAR_3)) {
  VAR_2->r_ctl.rack_rs.rs_rtt_lowest = VAR_3;
 }
 if ((VAR_2->r_ctl.rack_rs.rs_flags & VAR_0) ||
     (VAR_2->r_ctl.rack_rs.rs_rtt_highest < VAR_3)) {
  VAR_2->r_ctl.rack_rs.rs_rtt_highest = VAR_3;
 }
 VAR_2->r_ctl.rack_rs.rs_flags = VAR_1;
 VAR_2->r_ctl.rack_rs.rs_rtt_tot += VAR_3;
 VAR_2->r_ctl.rack_rs.rs_rtt_cnt++;
}
