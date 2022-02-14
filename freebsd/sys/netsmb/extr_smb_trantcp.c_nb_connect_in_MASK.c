
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int td_proc; int td_ucred; } ;
struct TYPE_3__ {int sb_timeo; int sb_flags; } ;
struct socket {int so_state; int so_error; int so_timeo; TYPE_1__ so_snd; TYPE_1__ so_rcv; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct nbpcb {int nbp_vc; int nbp_rcvbuf; int nbp_sndbuf; struct socket* nbp_tso; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct nbpcb*,int ) ;
 int FUNC_3 (struct socket*,int ,int ,int) ;
 int VAR_12 ;
 int FUNC_4 (int ,struct thread*) ;
 int FUNC_5 (struct socket*,struct sockaddr*,struct thread*) ;
 int FUNC_6 (int ,struct socket**,int ,int ,int ,struct thread*) ;
 int FUNC_7 (struct socket*,int ,int ) ;
 int FUNC_8 (struct socket*,int ,int ,struct nbpcb*) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_12(struct nbpcb *VAR_13, struct sockaddr_in *VAR_14, struct thread *VAR_15)
{
 struct socket *VAR_16;
 int VAR_17, VAR_18;

 VAR_17 = FUNC_6(VAR_0, &VAR_16, VAR_5, VAR_1,
     VAR_15->td_ucred, VAR_15);
 if (VAR_17)
  return VAR_17;
 VAR_13->nbp_tso = VAR_16;
 FUNC_0(&VAR_16->so_rcv);
 FUNC_8(VAR_16, VAR_8, VAR_12, VAR_13);
 FUNC_1(&VAR_16->so_rcv);
 VAR_16->so_rcv.sb_timeo = (5 * VAR_3);
 VAR_16->so_snd.sb_timeo = (5 * VAR_3);
 VAR_17 = FUNC_7(VAR_16, VAR_13->nbp_sndbuf, VAR_13->nbp_rcvbuf);
 if (VAR_17)
  goto bad;
 FUNC_3(VAR_16, VAR_6, VAR_7, 1);
 FUNC_3(VAR_16, VAR_1, VAR_10, 1);
 FUNC_0(&VAR_16->so_rcv);
 VAR_16->so_rcv.sb_flags &= ~VAR_4;
 FUNC_1(&VAR_16->so_rcv);
 FUNC_0(&VAR_16->so_snd);
 VAR_16->so_snd.sb_flags &= ~VAR_4;
 FUNC_1(&VAR_16->so_snd);
 VAR_17 = FUNC_5(VAR_16, (struct sockaddr*)VAR_14, VAR_15);
 if (VAR_17)
  goto bad;
 VAR_18 = FUNC_9();
 while ((VAR_16->so_state & VAR_9) && VAR_16->so_error == 0) {
  FUNC_11(&VAR_16->so_timeo, VAR_2, "nbcon", 2 * VAR_11);
  if ((VAR_16->so_state & VAR_9) && VAR_16->so_error == 0 &&
   (VAR_17 = FUNC_2(VAR_13, VAR_15->td_proc)) != 0) {
   VAR_16->so_state &= ~VAR_9;
   FUNC_10(VAR_18);
   goto bad;
  }
 }
 if (VAR_16->so_error) {
  VAR_17 = VAR_16->so_error;
  VAR_16->so_error = 0;
  FUNC_10(VAR_18);
  goto bad;
 }
 FUNC_10(VAR_18);
 return 0;
bad:
 FUNC_4(VAR_13->nbp_vc, VAR_15);
 return VAR_17;
}
