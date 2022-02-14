
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct siw_cep {struct socket* sock; } ;
struct TYPE_3__ {struct siw_cep* sk_user_data; } ;


 int FUNC_0 (struct siw_cep*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct siw_cep *VAR_0, struct socket *VAR_1)
{
 VAR_0->sock = VAR_1;
 FUNC_0(VAR_0);
 VAR_1->sk->sk_user_data = VAR_0;

 FUNC_2(VAR_1->sk);
 FUNC_1(VAR_1->sk);
}
