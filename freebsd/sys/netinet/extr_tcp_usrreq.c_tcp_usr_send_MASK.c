
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_char ;
struct thread {int td_ucred; } ;
struct tcpcb {scalar_t__ t_state; int t_flags; TYPE_1__* t_fb; scalar_t__ snd_una; scalar_t__ snd_up; void* snd_wnd; } ;
struct socket {int so_snd; } ;
struct sockaddr_in6 {int sin6_len; int sin6_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_4__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct mbuf {scalar_t__ m_len; } ;
struct TYPE_7__ {int inc_flags; } ;
struct inpcb {int inp_vflag; int inp_flags; scalar_t__ inp_lport; TYPE_3__ inp_inc; TYPE_2__* inp_socket; } ;
struct epoch_tracker {int dummy; } ;
struct TYPE_6__ {int so_snd; int so_rcv; } ;
struct TYPE_5__ {int (* tfb_tcp_output ) (struct tcpcb*) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct epoch_tracker) ;
 int FUNC_9 (struct epoch_tracker) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_17 ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_18 ;
 int FUNC_14 (struct tcpcb*,int *,int *,int *,int ,int,int ,int *,int) ;
 int VAR_19 ;
 int FUNC_15 (int ,struct tcpcb*,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int FUNC_16 (struct sockaddr_in*,struct sockaddr_in6*) ;
 struct tcpcb* FUNC_17 (struct inpcb*) ;
 int FUNC_18 (struct mbuf*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,TYPE_4__*) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *,struct mbuf*,int) ;
 int FUNC_23 (int *,struct mbuf*,int) ;
 scalar_t__ FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct socket*) ;
 struct inpcb* FUNC_27 (struct socket*) ;
 int FUNC_28 (struct tcpcb*) ;
 int FUNC_29 (struct tcpcb*) ;
 int FUNC_30 (struct tcpcb*,struct sockaddr*,struct thread*) ;
 int FUNC_31 (struct tcpcb*,struct sockaddr*,struct thread*) ;
 int FUNC_32 (struct tcpcb*) ;
 int FUNC_33 (struct tcpcb*,int) ;
 int FUNC_34 (struct tcpcb*) ;

__attribute__((used)) static int
FUNC_35(struct socket *VAR_25, int VAR_26, struct mbuf *VAR_27,
    struct sockaddr *VAR_28, struct mbuf *VAR_29, struct thread *VAR_30)
{
 struct epoch_tracker VAR_31;
 int VAR_32 = 0;
 struct inpcb *VAR_33;
 struct tcpcb *VAR_34 = ((void*)0);
 u_int8_t VAR_35;
 u_char VAR_36;
 bool VAR_37;
 VAR_17;





 if (VAR_26 & VAR_10)
  FUNC_8(VAR_31);
 VAR_33 = FUNC_27(VAR_25);
 FUNC_6(VAR_33 != ((void*)0), ("tcp_usr_send: inp == NULL"));
 FUNC_2(VAR_33);
 VAR_36 = VAR_33->inp_vflag;
 VAR_35 = VAR_33->inp_inc.inc_flags;
 VAR_37 = 0;
 if (VAR_33->inp_flags & (VAR_9 | VAR_6)) {
  if (VAR_29)
   FUNC_18(VAR_29);




  if (VAR_27 && (VAR_26 & VAR_12) == 0)
   FUNC_18(VAR_27);
  VAR_32 = VAR_1;
  goto out;
 }
 VAR_34 = FUNC_17(VAR_33);
 FUNC_12();
 if (VAR_28 != ((void*)0) && VAR_34->t_state < VAR_18) {
  switch (VAR_28->sa_family) {
  default:
   if (VAR_27)
    FUNC_18(VAR_27);
   VAR_32 = VAR_0;
   goto out;
  }
 }
 if (VAR_29) {

  if (VAR_29->m_len) {
   FUNC_18(VAR_29);
   if (VAR_27)
    FUNC_18(VAR_27);
   VAR_32 = VAR_2;
   goto out;
  }
  FUNC_18(VAR_29);
 }
 if (!(VAR_26 & VAR_13)) {
  FUNC_22(&VAR_25->so_snd, VAR_27, VAR_26);
  if (VAR_28 && VAR_34->t_state < VAR_18) {
   if (VAR_32 == 0 || VAR_33->inp_lport != 0)
    VAR_37 = 0;

   if (VAR_32)
    goto out;
   if (FUNC_5(VAR_34->t_flags))
    FUNC_32(VAR_34);
   else {
    VAR_34->snd_wnd = VAR_23;
    FUNC_33(VAR_34, -1);
   }
  }
  if (VAR_26 & VAR_10) {




   FUNC_7();
   FUNC_26(VAR_25);
   FUNC_34(VAR_34);
  }
  if (!(VAR_33->inp_flags & VAR_6) &&
      !(VAR_26 & VAR_12)) {
   if (VAR_26 & VAR_11)
    VAR_34->t_flags |= VAR_22;
   VAR_32 = VAR_34->t_fb->tfb_tcp_output(VAR_34);
   if (VAR_26 & VAR_11)
    VAR_34->t_flags &= ~VAR_22;
  }
 } else {



  FUNC_10(&VAR_25->so_snd);
  if (FUNC_25(&VAR_25->so_snd) < -512) {
   FUNC_11(&VAR_25->so_snd);
   FUNC_18(VAR_27);
   VAR_32 = VAR_3;
   goto out;
  }
  FUNC_23(&VAR_25->so_snd, VAR_27, VAR_26);
  FUNC_11(&VAR_25->so_snd);
  if (VAR_28 && VAR_34->t_state < VAR_18) {
   if (FUNC_5(VAR_34->t_flags))
    VAR_34->t_flags &= ~VAR_20;
   if (VAR_32 == 0 || VAR_33->inp_lport != 0)
    VAR_37 = 0;

   if (VAR_32)
    goto out;
   VAR_34->snd_wnd = VAR_23;
   FUNC_33(VAR_34, -1);
  }
  VAR_34->snd_up = VAR_34->snd_una + FUNC_24(&VAR_25->so_snd);
  if (!(VAR_26 & VAR_12)) {
   VAR_34->t_flags |= VAR_21;
   VAR_32 = VAR_34->t_fb->tfb_tcp_output(VAR_34);
   VAR_34->t_flags &= ~VAR_21;
  }
 }
 FUNC_14(VAR_34, ((void*)0),
     &VAR_33->inp_socket->so_rcv,
     &VAR_33->inp_socket->so_snd,
     VAR_19, VAR_32,
     0, ((void*)0), 0);
out:




 if (VAR_32 != 0 && VAR_37) {
  VAR_33->inp_vflag = VAR_36;
  VAR_33->inp_inc.inc_flags = VAR_35;
 }
 FUNC_13((VAR_26 & VAR_13) ? VAR_15 :
    ((VAR_26 & VAR_10) ? VAR_16 : VAR_14));
 FUNC_15(VAR_24, VAR_34, (VAR_26 & VAR_13) ? VAR_15 :
     ((VAR_26 & VAR_10) ? VAR_16 : VAR_14));
 FUNC_3(VAR_33);
 if (VAR_26 & VAR_10)
  FUNC_9(VAR_31);
 return (VAR_32);
}
