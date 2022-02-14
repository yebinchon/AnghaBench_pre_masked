
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int snd_max; int snd_nxt; struct bbr_sendmap* t_fb_ptr; TYPE_1__* t_inpcb; } ;
struct TYPE_4__ {int rc_high_rwnd; int rc_init_rwnd; scalar_t__ rc_free_cnt; int rc_free; int rc_map; scalar_t__ crte; } ;
struct tcp_bbr {TYPE_2__ r_ctl; scalar_t__ bbr_hdrw_pacing; int * rc_tp; } ;
struct bbr_sendmap {int dummy; } ;
typedef int int32_t ;
struct TYPE_3__ {int inp_flags2; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bbr_sendmap* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bbr_sendmap*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct tcp_bbr*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int) ;
 int VAR_9 ;
 int FUNC_5 (scalar_t__,int *) ;
 int FUNC_6 (int ,struct bbr_sendmap*) ;

__attribute__((used)) static void
FUNC_7(struct tcpcb *VAR_10, int32_t VAR_11)
{
 if (VAR_10->t_fb_ptr) {
  uint32_t VAR_12;
  struct tcp_bbr *VAR_13;
  struct bbr_sendmap *VAR_14;

  VAR_13 = (struct tcp_bbr *)VAR_10->t_fb_ptr;
  if (VAR_13->r_ctl.crte)
   FUNC_5(VAR_13->r_ctl.crte, VAR_13->rc_tp);
  FUNC_3(VAR_13);
  VAR_13->rc_tp = ((void*)0);
  if (VAR_10->t_inpcb) {

   VAR_10->t_inpcb->inp_flags2 &= ~VAR_0;
   VAR_10->t_inpcb->inp_flags2 &= ~VAR_2;
   VAR_10->t_inpcb->inp_flags2 &= ~VAR_1;
  }
  if (VAR_13->bbr_hdrw_pacing)
   FUNC_4(VAR_5, -1);
  else
   FUNC_4(VAR_4, -1);
  VAR_14 = FUNC_1(&VAR_13->r_ctl.rc_map);
  while (VAR_14) {
   FUNC_2(&VAR_13->r_ctl.rc_map, VAR_14, VAR_9);
   FUNC_6(VAR_8, VAR_14);
   VAR_14 = FUNC_1(&VAR_13->r_ctl.rc_map);
  }
  VAR_14 = FUNC_1(&VAR_13->r_ctl.rc_free);
  while (VAR_14) {
   FUNC_2(&VAR_13->r_ctl.rc_free, VAR_14, VAR_9);
   FUNC_6(VAR_8, VAR_14);
   VAR_14 = FUNC_1(&VAR_13->r_ctl.rc_free);
  }
  VAR_12 = VAR_13->r_ctl.rc_high_rwnd - VAR_13->r_ctl.rc_init_rwnd;
  if (VAR_12 > (VAR_13->r_ctl.rc_init_rwnd / 10))
   FUNC_0(VAR_3);
  else
   FUNC_0(VAR_7);
  VAR_13->r_ctl.rc_free_cnt = 0;
  FUNC_6(VAR_6, VAR_10->t_fb_ptr);
  VAR_10->t_fb_ptr = ((void*)0);
 }

 VAR_10->snd_nxt = VAR_10->snd_max;
}
