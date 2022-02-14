
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct tcpcb {int dummy; } ;
struct TYPE_2__ {int rc_tmap; int rc_map; } ;
struct tcp_bbr {TYPE_1__ r_ctl; } ;
struct bbr_sendmap {int r_in_tmap; int r_flags; scalar_t__ r_dupack; scalar_t__ r_end; scalar_t__ r_start; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,struct bbr_sendmap*,struct bbr_sendmap*,int ) ;
 struct bbr_sendmap* FUNC_2 (struct tcp_bbr*) ;
 int FUNC_3 (struct tcp_bbr*,struct bbr_sendmap*,struct bbr_sendmap*,scalar_t__) ;
 int FUNC_4 (struct tcpcb*,struct tcp_bbr*,struct bbr_sendmap*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint32_t
FUNC_5(struct tcpcb *VAR_3, struct tcp_bbr *VAR_4,
    struct bbr_sendmap *VAR_5, uint32_t VAR_6, int32_t *VAR_7, uint32_t VAR_8)
{




 struct bbr_sendmap *VAR_9;
 uint32_t VAR_10;
 int32_t VAR_11;

 VAR_11 = *VAR_7;
 VAR_10 = VAR_5->r_start + VAR_11;
 if (FUNC_0(VAR_10, VAR_5->r_end)) {




  FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
  if (VAR_10 == VAR_5->r_end) {
   *VAR_7 = 0;
   return (0);
  } else {
   int32_t VAR_12;


   VAR_12 = VAR_5->r_end - VAR_5->r_start;
   *VAR_7 = (VAR_11 - VAR_12);
   return (VAR_5->r_end);
  }

 }




 VAR_9 = FUNC_2(VAR_4);
 if (VAR_9 == ((void*)0)) {
  *VAR_7 = 0;
  return (0);
 }







 FUNC_3(VAR_4, VAR_9, VAR_5, VAR_10);
 FUNC_1(&VAR_4->r_ctl.rc_map, VAR_5, VAR_9, VAR_1);
 VAR_9->r_dupack = 0;
 if (VAR_5->r_in_tmap) {
  FUNC_1(&VAR_4->r_ctl.rc_tmap, VAR_5, VAR_9, VAR_2);
  VAR_9->r_in_tmap = 1;
 }
 VAR_5->r_flags &= (~VAR_0);
 FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_8);
 *VAR_7 = 0;
 return (0);
}
