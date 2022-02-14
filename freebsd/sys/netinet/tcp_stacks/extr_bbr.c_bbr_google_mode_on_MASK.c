
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rc_probertt_int; int rc_rttprop; int rc_delrate; scalar_t__ rc_inc_enet_oh; scalar_t__ rc_inc_ip_oh; scalar_t__ rc_inc_tcp_oh; scalar_t__ rc_incr_tmrs; int bbr_google_discount; } ;
struct tcp_bbr {int rc_use_google; int rc_tv; TYPE_1__ r_ctl; scalar_t__ bbr_use_rack_cheat; int r_use_policer; scalar_t__ rc_no_pacing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct tcp_bbr*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct tcp_bbr *VAR_4)
{
 VAR_4->rc_use_google = 1;
 VAR_4->rc_no_pacing = 0;
 VAR_4->r_ctl.bbr_google_discount = VAR_2;
 VAR_4->r_use_policer = VAR_3;
 VAR_4->r_ctl.rc_probertt_int = (VAR_1 * 10);
 VAR_4->bbr_use_rack_cheat = 0;
 VAR_4->r_ctl.rc_incr_tmrs = 0;
 VAR_4->r_ctl.rc_inc_tcp_oh = 0;
 VAR_4->r_ctl.rc_inc_ip_oh = 0;
 VAR_4->r_ctl.rc_inc_enet_oh = 0;
 FUNC_0(&VAR_4->r_ctl.rc_delrate,
     VAR_0);
 FUNC_1(&VAR_4->r_ctl.rc_rttprop,
    (11 * VAR_1));
 FUNC_2(VAR_4, FUNC_3(&VAR_4->rc_tv));
}
