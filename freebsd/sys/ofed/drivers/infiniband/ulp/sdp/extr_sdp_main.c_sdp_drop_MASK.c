
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_error; } ;
struct sdp_sock {int softerror; int state; struct socket* socket; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdp_sock*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct sdp_sock* FUNC_2 (struct sdp_sock*) ;
 int FUNC_3 (struct sdp_sock*) ;

__attribute__((used)) static struct sdp_sock *
FUNC_4(struct sdp_sock *VAR_1, int VAR_2)
{
 struct socket *VAR_3;

 FUNC_0(VAR_1);
 VAR_3 = VAR_1->socket;
 if (FUNC_1(VAR_1->state))
  FUNC_3(VAR_1);
 if (VAR_2 == VAR_0 && VAR_1->softerror)
  VAR_2 = VAR_1->softerror;
 VAR_3->so_error = VAR_2;
 return (FUNC_2(VAR_1));
}
