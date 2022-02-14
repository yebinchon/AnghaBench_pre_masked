
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
 struct sdp_sock* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct sdp_sock*) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_3)
{
 struct sdp_sock *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(VAR_4);
 if (VAR_4->flags & (VAR_2 | VAR_1)) {
  VAR_5 = VAR_0;
  goto out;
 }
 FUNC_3(VAR_4);
out:
 FUNC_1(VAR_4);
 return (VAR_5);
}
