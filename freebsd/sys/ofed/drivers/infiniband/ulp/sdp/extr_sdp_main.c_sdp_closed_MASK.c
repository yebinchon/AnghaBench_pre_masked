
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;
struct sdp_sock {int flags; struct socket* socket; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 int FUNC_3 (struct socket*) ;
 int VAR_2 ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (struct socket*) ;

__attribute__((used)) static struct sdp_sock *
FUNC_6(struct sdp_sock *VAR_3)
{
 struct socket *VAR_4;

 FUNC_1(VAR_3);

 VAR_3->flags |= VAR_0;
 VAR_4 = VAR_3->socket;
 FUNC_5(VAR_4);
 if (VAR_3->flags & VAR_1) {
  FUNC_0(VAR_4->so_state & VAR_2,
      ("sdp_closed: !SS_PROTOREF"));
  VAR_3->flags &= ~VAR_1;
  FUNC_2(VAR_3);
  FUNC_3(VAR_4);
  VAR_4->so_state &= ~VAR_2;
  FUNC_4(VAR_4);
  return (((void*)0));
 }
 return (VAR_3);
}
