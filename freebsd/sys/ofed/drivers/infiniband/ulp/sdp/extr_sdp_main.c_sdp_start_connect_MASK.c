
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_ucred; } ;
struct socket {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; scalar_t__ sin_port; TYPE_1__ sin_addr; int sin_zero; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct sdp_sock {scalar_t__ lport; int state; int id; int laddr; struct socket* socket; } ;
typedef int src ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 int VAR_2 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,struct sockaddr*,struct sockaddr*,int ) ;
 int FUNC_5 (struct sdp_sock*,struct sockaddr*,int ) ;
 int FUNC_6 (struct socket*) ;

__attribute__((used)) static int
FUNC_7(struct sdp_sock *VAR_3, struct sockaddr *VAR_4, struct thread *VAR_5)
{
 struct sockaddr_in VAR_6;
 struct socket *VAR_7;
 int VAR_8;

 VAR_7 = VAR_3->socket;

 FUNC_1(VAR_3);
 if (VAR_3->lport == 0) {
  VAR_8 = FUNC_5(VAR_3, (struct sockaddr *)0, VAR_5->td_ucred);
  if (VAR_8)
   return VAR_8;
 }
 VAR_6.sin_family = VAR_0;
 VAR_6.sin_len = sizeof(VAR_6);
 FUNC_3(&VAR_6.sin_zero, sizeof(VAR_6.sin_zero));
 VAR_6.sin_port = VAR_3->lport;
 VAR_6.sin_addr.s_addr = VAR_3->laddr;
 FUNC_6(VAR_7);
 FUNC_2(VAR_3);
 VAR_8 = -FUNC_4(VAR_3->id, (struct sockaddr *)&VAR_6, VAR_4,
     VAR_1);
 FUNC_0(VAR_3);
 if (VAR_8 == 0)
  VAR_3->state = VAR_2;

 return 0;
}
