
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sdp_sock {int keep2msl; } ;


 int FUNC_0 (int *) ;
 struct sdp_sock* FUNC_1 (struct socket*) ;

__attribute__((used)) static void
FUNC_2(struct socket *VAR_0)
{
 struct sdp_sock *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->keep2msl);
}
