
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct af_alg_async_req {int areqlen; struct sock* sk; } ;


 int FUNC_0 (struct af_alg_async_req*) ;
 int FUNC_1 (struct sock*,struct af_alg_async_req*,int ) ;

void FUNC_2(struct af_alg_async_req *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;

 FUNC_0(VAR_0);
 FUNC_1(VAR_1, VAR_0, VAR_0->areqlen);
}
