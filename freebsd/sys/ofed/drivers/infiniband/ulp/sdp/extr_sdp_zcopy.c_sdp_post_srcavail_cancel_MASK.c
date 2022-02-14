
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sdp_sock {int srcavail_cancel_work; int socket; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket*,struct sdp_sock*,struct mbuf*) ;
 int FUNC_1 (int *,int ) ;
 struct mbuf* FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sdp_sock*,int ) ;
 struct sdp_sock* FUNC_5 (struct socket*) ;

__attribute__((used)) static int FUNC_6(struct socket *VAR_1)
{
 struct sdp_sock *VAR_2 = FUNC_5(VAR_1);
 struct mbuf *VAR_3;

 FUNC_3(VAR_2->socket, "Posting srcavail cancel\n");

 VAR_3 = FUNC_2(VAR_1, 0);
 FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_4(VAR_2, 0);

 FUNC_1(&VAR_2->srcavail_cancel_work,
   VAR_0);

 return 0;
}
