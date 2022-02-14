
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sdp_sock {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 int FUNC_3 (struct sdp_sock*,int ) ;
 struct sdp_sock* FUNC_4 (struct socket*) ;

void
FUNC_5(struct socket *VAR_3)
{
 struct sdp_sock *VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 FUNC_1(VAR_4);



 if (!(VAR_4->flags & VAR_2) &&
     !(VAR_4->flags & VAR_1))
  FUNC_3(VAR_4, VAR_0);
 FUNC_0(VAR_4->flags & VAR_1, ("sdp_abort: %p not dropped 0x%X",
     VAR_4, VAR_4->flags));
 FUNC_2(VAR_4);
}
