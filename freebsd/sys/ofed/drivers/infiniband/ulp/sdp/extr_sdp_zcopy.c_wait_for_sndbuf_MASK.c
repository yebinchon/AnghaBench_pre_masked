
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk_socket; } ;
struct sdp_sock {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct socket*,char*) ;
 int FUNC_2 (struct sdp_sock*) ;
 struct sdp_sock* FUNC_3 (struct socket*) ;
 int FUNC_4 (struct sdp_sock*,long*,int*) ;
 int FUNC_5 (struct sdp_sock*,int) ;
 int VAR_1 ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static inline int FUNC_7(struct socket *VAR_2, long *VAR_3)
{
 struct sdp_sock *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = 0;
 int VAR_6 = 1;

 FUNC_1(VAR_2, "Wait for mem\n");

 FUNC_6(VAR_0, &VAR_2->sk_socket->flags);

 FUNC_0(VAR_1);

 FUNC_2(VAR_4);

 FUNC_5(VAR_4, 1);

 VAR_5 = FUNC_4(VAR_4, VAR_3, &VAR_6);

 return VAR_5;
}
