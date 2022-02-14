
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sdp_sock {int keep2msl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,struct sdp_sock*) ;
 int VAR_1 ;
 struct sdp_sock* FUNC_2 (struct socket*) ;

void
FUNC_3(struct socket *VAR_2)
{
 struct sdp_sock *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (!FUNC_0(&VAR_3->keep2msl))
                FUNC_1(&VAR_3->keep2msl, VAR_0,
                    VAR_1, VAR_3);
}
