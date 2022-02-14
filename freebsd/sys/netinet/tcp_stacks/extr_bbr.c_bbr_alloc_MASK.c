
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rc_free_cnt; int rc_free; int rc_num_maps_alloced; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
struct bbr_sendmap {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bbr_sendmap* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bbr_sendmap*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct bbr_sendmap* FUNC_3 (int ,int) ;

__attribute__((used)) static struct bbr_sendmap *
FUNC_4(struct tcp_bbr *VAR_7)
{
 struct bbr_sendmap *VAR_8;

 FUNC_0(VAR_2);
 VAR_8 = FUNC_3(VAR_5, (VAR_0 | VAR_1));
 if (VAR_8) {
  VAR_7->r_ctl.rc_num_maps_alloced++;
  return (VAR_8);
 }
 if (VAR_7->r_ctl.rc_free_cnt) {
  FUNC_0(VAR_3);
  VAR_8 = FUNC_1(&VAR_7->r_ctl.rc_free);
  FUNC_2(&VAR_7->r_ctl.rc_free, VAR_8, VAR_6);
  VAR_7->r_ctl.rc_free_cnt--;
  return (VAR_8);
 }
 FUNC_0(VAR_4);
 return (((void*)0));
}
