
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int rc_tmap; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
struct bbr_sendmap {int r_rtr_cnt; int * r_tim_lastsent; } ;


 struct bbr_sendmap* FUNC_0 (int *) ;

__attribute__((used)) static uint32_t
FUNC_1(struct tcp_bbr *VAR_0, struct bbr_sendmap *VAR_1, uint32_t VAR_2)
{
 struct bbr_sendmap *VAR_3;

 VAR_3 = FUNC_0(&VAR_0->r_ctl.rc_tmap);
 if ((VAR_3 == ((void*)0)) || (VAR_1 == VAR_3))
  return (VAR_2);
 return(VAR_3->r_tim_lastsent[(VAR_3->r_rtr_cnt-1)]);
}
