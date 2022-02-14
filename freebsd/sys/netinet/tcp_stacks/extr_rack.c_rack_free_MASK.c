
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rc_num_maps_alloced; int rc_free; struct rack_sendmap* rc_sacklast; struct rack_sendmap* rc_tlpsend; int rc_num_split_allocs; } ;
struct tcp_rack {scalar_t__ rc_free_cnt; TYPE_1__ r_ctl; } ;
struct rack_sendmap {scalar_t__ r_limit_type; } ;


 int FUNC_0 (int *,struct rack_sendmap*,int ) ;
 int FUNC_1 (struct rack_sendmap*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,struct rack_sendmap*) ;

__attribute__((used)) static void
FUNC_3(struct tcp_rack *VAR_3, struct rack_sendmap *VAR_4)
{
 if (VAR_4->r_limit_type) {

  VAR_3->r_ctl.rc_num_split_allocs--;
 }
 if (VAR_3->r_ctl.rc_tlpsend == VAR_4)
  VAR_3->r_ctl.rc_tlpsend = ((void*)0);
 if (VAR_3->r_ctl.rc_sacklast == VAR_4)
  VAR_3->r_ctl.rc_sacklast = ((void*)0);
 if (VAR_3->rc_free_cnt < VAR_1) {
  FUNC_1(VAR_4, 0, sizeof(struct rack_sendmap));
  FUNC_0(&VAR_3->r_ctl.rc_free, VAR_4, VAR_0);
  VAR_4->r_limit_type = 0;
  VAR_3->rc_free_cnt++;
  return;
 }
 VAR_3->r_ctl.rc_num_maps_alloced--;
 FUNC_2(VAR_2, VAR_4);
}
