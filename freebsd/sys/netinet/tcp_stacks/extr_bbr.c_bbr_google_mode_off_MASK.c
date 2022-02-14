
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rc_incr_tmrs; int rc_inc_tcp_oh; int rc_inc_ip_oh; int rc_inc_enet_oh; int rc_rttprop; int rc_delrate; int rc_probertt_int; scalar_t__ bbr_google_discount; } ;
struct tcp_bbr {int rc_no_pacing; int bbr_use_rack_cheat; int rc_tv; TYPE_1__ r_ctl; scalar_t__ no_pacing_until; scalar_t__ r_use_policer; scalar_t__ rc_use_google; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct tcp_bbr*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct tcp_bbr *VAR_10)
{
 VAR_10->rc_use_google = 0;
 VAR_10->r_ctl.bbr_google_discount = 0;
 VAR_10->no_pacing_until = VAR_6;
 VAR_10->r_use_policer = 0;
 if (VAR_10->no_pacing_until)
  VAR_10->rc_no_pacing = 1;
 else
  VAR_10->rc_no_pacing = 0;
 if (VAR_9)
  VAR_10->bbr_use_rack_cheat = 1;
 else
  VAR_10->bbr_use_rack_cheat = 0;
 if (VAR_5)
  VAR_10->r_ctl.rc_incr_tmrs = 1;
 else
  VAR_10->r_ctl.rc_incr_tmrs = 0;
 if (VAR_4)
  VAR_10->r_ctl.rc_inc_tcp_oh = 1;
 else
  VAR_10->r_ctl.rc_inc_tcp_oh = 0;
 if (VAR_3)
  VAR_10->r_ctl.rc_inc_ip_oh = 1;
 else
  VAR_10->r_ctl.rc_inc_ip_oh = 0;
 if (VAR_2)
  VAR_10->r_ctl.rc_inc_enet_oh = 1;
 else
  VAR_10->r_ctl.rc_inc_enet_oh = 0;
 VAR_10->r_ctl.rc_probertt_int = VAR_8;
 FUNC_0(&VAR_10->r_ctl.rc_delrate,
     VAR_7);
 FUNC_1(&VAR_10->r_ctl.rc_rttprop,
    (VAR_1 * VAR_0));
 FUNC_2(VAR_10, FUNC_3(&VAR_10->rc_tv));
}
