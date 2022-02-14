
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rc_tmap; } ;
struct tcp_bbr {int r_wanted_output; TYPE_1__ r_ctl; } ;
struct bbr_sendmap {int r_dupack; } ;


 int VAR_0 ;
 struct bbr_sendmap* FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct tcp_bbr *VAR_1)
{
 struct bbr_sendmap *VAR_2;

 VAR_2 = FUNC_0(&VAR_1->r_ctl.rc_tmap);
 if (VAR_2 && (VAR_2->r_dupack < 0xff)) {
  VAR_2->r_dupack++;
  if (VAR_2->r_dupack >= VAR_0)
   VAR_1->r_wanted_output = 1;
 }
}
