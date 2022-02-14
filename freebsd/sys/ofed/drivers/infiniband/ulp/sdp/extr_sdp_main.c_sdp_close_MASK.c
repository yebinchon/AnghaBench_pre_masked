
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_state; } ;
struct sdp_sock {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct socket*) ;
 int FUNC_3 (struct socket*) ;
 int VAR_3 ;
 struct sdp_sock* FUNC_4 (struct socket*) ;
 int FUNC_5 (struct sdp_sock*) ;

__attribute__((used)) static void
FUNC_6(struct socket *VAR_4)
{
 struct sdp_sock *VAR_5;

 VAR_5 = FUNC_4(VAR_4);
 FUNC_0(VAR_5);



 if (!(VAR_5->flags & VAR_2) &&
     !(VAR_5->flags & VAR_0))
  FUNC_5(VAR_5);





 if (!(VAR_5->flags & VAR_0)) {
  FUNC_2(VAR_4);
  VAR_4->so_state |= VAR_3;
  FUNC_3(VAR_4);
  VAR_5->flags |= VAR_1;
 }
 FUNC_1(VAR_5);
}
