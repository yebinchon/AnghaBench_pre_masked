
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct tcphdr {int th_ack; } ;
struct tcpcb {int t_flags; int snd_ssthresh; int snd_cwnd; int snd_cwnd_prev; int snd_ssthresh_prev; TYPE_1__* ccv; int t_badrxtwin; int snd_max; int snd_nxt; int snd_recover_prev; int snd_recover; int snd_wnd; int t_bytes_acked; int t_dupacks; int t_inpcb; } ;
struct TYPE_4__ {int (* cong_signal ) (TYPE_1__*,int) ;} ;
struct TYPE_3__ {int curack; } ;


 TYPE_2__* FUNC_0 (struct tcpcb*) ;




 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (struct tcpcb*) ;
 int VAR_5 ;
 int VAR_6 ;

void inline
FUNC_12(struct tcpcb *VAR_7, struct tcphdr *VAR_8, uint32_t VAR_9)
{
 u_int VAR_10;

 FUNC_4(VAR_7->t_inpcb);

 switch(VAR_9) {
 case 130:
  if (!FUNC_6(VAR_7->t_flags)) {
   VAR_7->snd_recover = VAR_7->snd_max;
   if (VAR_7->t_flags & VAR_0)
    VAR_7->t_flags |= VAR_1;
  }
  break;
 case 131:
  if (!FUNC_5(VAR_7->t_flags)) {
   FUNC_7(VAR_5);
   VAR_7->snd_recover = VAR_7->snd_max;
   if (VAR_7->t_flags & VAR_0)
    VAR_7->t_flags |= VAR_1;
  }
  break;
 case 129:
  VAR_10 = FUNC_11(VAR_7);
  VAR_7->t_dupacks = 0;
  VAR_7->t_bytes_acked = 0;
  FUNC_3(VAR_7->t_flags);
  VAR_7->snd_ssthresh = FUNC_8(2, FUNC_9(VAR_7->snd_wnd, VAR_7->snd_cwnd) / 2 /
      VAR_10) * VAR_10;
  VAR_7->snd_cwnd = VAR_10;
  break;
 case 128:
  FUNC_7(VAR_6);

  VAR_7->snd_cwnd = VAR_7->snd_cwnd_prev;
  VAR_7->snd_ssthresh = VAR_7->snd_ssthresh_prev;
  VAR_7->snd_recover = VAR_7->snd_recover_prev;
  if (VAR_7->t_flags & VAR_4)
   FUNC_2(VAR_7->t_flags);
  if (VAR_7->t_flags & VAR_3)
   FUNC_1(VAR_7->t_flags);
  VAR_7->snd_nxt = VAR_7->snd_max;
  VAR_7->t_flags &= ~VAR_2;
  VAR_7->t_badrxtwin = 0;
  break;
 }

 if (FUNC_0(VAR_7)->cong_signal != ((void*)0)) {
  if (VAR_8 != ((void*)0))
   VAR_7->ccv->curack = VAR_8->th_ack;
  FUNC_0(VAR_7)->cong_signal(VAR_7->ccv, VAR_9);
 }
}
