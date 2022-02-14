
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {int t_state; } ;
struct TYPE_4__ {scalar_t__ sb_hiwat; int sb_flags; } ;
struct TYPE_3__ {scalar_t__ sb_hiwat; int sb_flags; } ;
struct socket {TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;
struct inpcb {int inp_vflag; int inp_flags; int in6p_hops; } ;
struct epoch_tracker {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct epoch_tracker) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct socket*,int *) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (struct inpcb*) ;
 int FUNC_7 (struct socket*,int ,int ) ;
 struct inpcb* FUNC_8 (struct socket*) ;
 struct tcpcb* FUNC_9 (struct inpcb*) ;

__attribute__((used)) static int
FUNC_10(struct socket *VAR_10)
{
 struct tcpcb *VAR_11;
 struct inpcb *VAR_12;
 struct epoch_tracker VAR_13;
 int VAR_14;

 if (VAR_10->so_snd.sb_hiwat == 0 || VAR_10->so_rcv.sb_hiwat == 0) {
  VAR_14 = FUNC_7(VAR_10, VAR_9, VAR_8);
  if (VAR_14)
   return (VAR_14);
 }
 VAR_10->so_rcv.sb_flags |= VAR_5;
 VAR_10->so_snd.sb_flags |= VAR_5;
 FUNC_1(VAR_13);
 VAR_14 = FUNC_4(VAR_10, &VAR_7);
 if (VAR_14) {
  FUNC_2(VAR_13);
  return (VAR_14);
 }
 VAR_12 = FUNC_8(VAR_10);
 VAR_12->inp_vflag |= VAR_2;
 VAR_11 = FUNC_9(VAR_12);
 if (VAR_11 == ((void*)0)) {
  FUNC_5(VAR_12);
  FUNC_6(VAR_12);
  FUNC_2(VAR_13);
  return (VAR_0);
 }
 VAR_11->t_state = VAR_6;
 FUNC_0(VAR_12);
 FUNC_2(VAR_13);
 FUNC_3(VAR_6);
 return (0);
}
