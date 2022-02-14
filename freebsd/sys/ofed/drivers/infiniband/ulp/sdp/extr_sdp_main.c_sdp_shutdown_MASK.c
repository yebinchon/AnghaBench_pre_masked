
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sdp_sock {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdp_sock*) ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 struct sdp_sock* FUNC_3 (struct socket*) ;
 int FUNC_4 (struct sdp_sock*) ;
 int FUNC_5 (struct socket*) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_3)
{
 int VAR_4 = 0;
 struct sdp_sock *VAR_5;

 VAR_5 = FUNC_3(VAR_3);
 FUNC_0(VAR_5);
 if (VAR_5->flags & (VAR_2 | VAR_1)) {
  VAR_4 = VAR_0;
  goto out;
 }
 FUNC_5(VAR_3);
 FUNC_4(VAR_5);
 if (!(VAR_5->flags & VAR_1))
  FUNC_2(VAR_5);

out:
 FUNC_1(VAR_5);

 return (VAR_4);
}
