
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rc_free; int rc_num_maps_alloced; } ;
struct tcp_rack {scalar_t__ rc_free_cnt; TYPE_1__ r_ctl; } ;
struct rack_sendmap {int dummy; } ;


 int VAR_0 ;
 struct rack_sendmap* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct rack_sendmap*,int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rack_sendmap* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct rack_sendmap *
FUNC_4(struct tcp_rack *VAR_5)
{
 struct rack_sendmap *VAR_6;

 VAR_6 = FUNC_3(VAR_4, VAR_0);
 if (VAR_6) {
  VAR_5->r_ctl.rc_num_maps_alloced++;
  FUNC_2(VAR_2, 1);
  return (VAR_6);
 }
 if (VAR_5->rc_free_cnt) {
  FUNC_2(VAR_3, 1);
  VAR_6 = FUNC_0(&VAR_5->r_ctl.rc_free);
  FUNC_1(&VAR_5->r_ctl.rc_free, VAR_6, VAR_1);
  VAR_5->rc_free_cnt--;
  return (VAR_6);
 }
 return (((void*)0));
}
