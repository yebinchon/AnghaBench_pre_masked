
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_4__ {scalar_t__ sb_hiwat; int sb_flags; } ;
struct TYPE_3__ {scalar_t__ sb_hiwat; int sb_flags; } ;
struct socket {int so_options; scalar_t__ so_linger; scalar_t__ so_pcb; int so_cred; TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;
struct sdp_sock {int rxctlq; int state; scalar_t__ qp_active; scalar_t__ flags; int cred; struct socket* socket; int lock; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct sdp_sock*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int VAR_9 ;
 int FUNC_7 (struct socket*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sdp_sock* FUNC_8 (struct socket*) ;
 int VAR_13 ;
 int FUNC_9 (struct socket*,int ,int ) ;
 struct sdp_sock* FUNC_10 (int ,int) ;

__attribute__((used)) static int
FUNC_11(struct socket *VAR_14, int VAR_15, struct thread *VAR_16)
{
 struct sdp_sock *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_8(VAR_14);
 FUNC_0(VAR_17 == ((void*)0), ("sdp_attach: ssk already set on so %p", VAR_14));
 if (VAR_14->so_snd.sb_hiwat == 0 || VAR_14->so_rcv.sb_hiwat == 0) {
  VAR_18 = FUNC_9(VAR_14, VAR_12, VAR_11);
  if (VAR_18)
   return (VAR_18);
 }
 VAR_14->so_rcv.sb_flags |= VAR_4;
 VAR_14->so_snd.sb_flags |= VAR_4;
 VAR_17 = FUNC_10(VAR_13, VAR_2 | VAR_3);
 if (VAR_17 == ((void*)0))
  return (VAR_0);
 FUNC_6(&VAR_17->lock, "sdpsock");
 VAR_17->socket = VAR_14;
 VAR_17->cred = FUNC_4(VAR_14->so_cred);
 VAR_14->so_pcb = (caddr_t)VAR_17;
 FUNC_7(VAR_14);
 VAR_17->flags = 0;
 VAR_17->qp_active = 0;
 VAR_17->state = VAR_6;
 FUNC_5(&VAR_17->rxctlq, VAR_1);
 FUNC_2();
 FUNC_1(&VAR_10, VAR_17, VAR_8);
 VAR_9++;
 FUNC_3();
 if ((VAR_14->so_options & VAR_5) && VAR_14->so_linger == 0)
  VAR_14->so_linger = VAR_7;

 return (0);
}
