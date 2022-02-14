
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_ucred; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sdp_sock {int flags; scalar_t__ lport; int id; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct sdp_sock*,struct sockaddr*,int ) ;
 struct sdp_sock* FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*,int) ;
 int FUNC_8 (struct socket*) ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_4, int VAR_5, struct thread *VAR_6)
{
 int VAR_7 = 0;
 struct sdp_sock *VAR_8;

 VAR_8 = FUNC_6(VAR_4);
 FUNC_0(VAR_8);
 if (VAR_8->flags & (VAR_2 | VAR_1)) {
  VAR_7 = VAR_0;
  goto out;
 }
 if (VAR_7 == 0 && VAR_8->lport == 0)
  VAR_7 = FUNC_5(VAR_8, (struct sockaddr *)0, VAR_6->td_ucred);
 FUNC_2(VAR_4);
 if (VAR_7 == 0)
  VAR_7 = FUNC_8(VAR_4);
 if (VAR_7 == 0) {
  FUNC_7(VAR_4, VAR_5);
  VAR_8->state = VAR_3;
 }
 FUNC_3(VAR_4);

out:
 FUNC_1(VAR_8);
 if (VAR_7 == 0)
  VAR_7 = -FUNC_4(VAR_8->id, VAR_5);
 return (VAR_7);
}
