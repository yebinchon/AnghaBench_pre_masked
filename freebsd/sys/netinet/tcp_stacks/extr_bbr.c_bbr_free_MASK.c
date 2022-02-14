
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rc_free_cnt; int rc_num_maps_alloced; int rc_free; struct bbr_sendmap* rc_sacklast; struct bbr_sendmap* rc_next; struct bbr_sendmap* rc_resend; struct bbr_sendmap* rc_tlp_send; int rc_num_small_maps_alloced; int rc_num_split_allocs; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
struct bbr_sendmap {scalar_t__ r_limit_type; scalar_t__ r_is_smallmap; } ;


 int FUNC_0 (int *,struct bbr_sendmap*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bbr_sendmap*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,struct bbr_sendmap*) ;

__attribute__((used)) static void
FUNC_3(struct tcp_bbr *VAR_3, struct bbr_sendmap *VAR_4)
{
 if (VAR_4->r_limit_type) {

  VAR_3->r_ctl.rc_num_split_allocs--;
 }
 if (VAR_4->r_is_smallmap)
  VAR_3->r_ctl.rc_num_small_maps_alloced--;
 if (VAR_3->r_ctl.rc_tlp_send == VAR_4)
  VAR_3->r_ctl.rc_tlp_send = ((void*)0);
 if (VAR_3->r_ctl.rc_resend == VAR_4) {
  VAR_3->r_ctl.rc_resend = ((void*)0);
 }
 if (VAR_3->r_ctl.rc_next == VAR_4)
  VAR_3->r_ctl.rc_next = ((void*)0);
 if (VAR_3->r_ctl.rc_sacklast == VAR_4)
  VAR_3->r_ctl.rc_sacklast = ((void*)0);
 if (VAR_3->r_ctl.rc_free_cnt < VAR_0) {
  FUNC_1(VAR_4, 0, sizeof(struct bbr_sendmap));
  FUNC_0(&VAR_3->r_ctl.rc_free, VAR_4, VAR_2);
  VAR_4->r_limit_type = 0;
  VAR_3->r_ctl.rc_free_cnt++;
  return;
 }
 VAR_3->r_ctl.rc_num_maps_alloced--;
 FUNC_2(VAR_1, VAR_4);
}
