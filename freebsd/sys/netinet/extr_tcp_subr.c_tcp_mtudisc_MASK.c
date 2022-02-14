
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_maxseg; int t_flags; TYPE_1__* t_fb; int snd_max; int snd_recover; int snd_una; int snd_nxt; scalar_t__ t_rtttime; } ;
struct TYPE_5__ {scalar_t__ sb_hiwat; } ;
struct socket {TYPE_2__ so_snd; } ;
struct inpcb {int inp_flags; struct socket* inp_socket; } ;
struct TYPE_4__ {int (* tfb_tcp_output ) (struct tcpcb*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 struct tcpcb* FUNC_6 (struct inpcb*) ;
 int FUNC_7 (struct tcpcb*) ;
 int FUNC_8 (struct tcpcb*) ;
 int FUNC_9 (struct tcpcb*,int,int,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(struct inpcb *VAR_4, int VAR_5)
{
 struct tcpcb *VAR_6;
 struct socket *VAR_7;

 FUNC_1(VAR_4);
 if ((VAR_4->inp_flags & VAR_1) ||
     (VAR_4->inp_flags & VAR_0))
  return;

 VAR_6 = FUNC_6(VAR_4);
 FUNC_2(VAR_6 != ((void*)0), ("tcp_mtudisc: tp == NULL"));

 FUNC_9(VAR_6, -1, VAR_5, ((void*)0), ((void*)0));

 VAR_7 = VAR_4->inp_socket;
 FUNC_3(&VAR_7->so_snd);

 if (VAR_7->so_snd.sb_hiwat < VAR_6->t_maxseg)
  VAR_6->t_maxseg = VAR_7->so_snd.sb_hiwat;
 FUNC_4(&VAR_7->so_snd);

 FUNC_5(VAR_3);
 VAR_6->t_rtttime = 0;
 VAR_6->snd_nxt = VAR_6->snd_una;
 FUNC_8(VAR_6);
 VAR_6->snd_recover = VAR_6->snd_max;
 if (VAR_6->t_flags & VAR_2)
  FUNC_0(VAR_6->t_flags);
 VAR_6->t_fb->tfb_tcp_output(VAR_6);
}
