
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct rng_ctx {int len; } ;
struct alg_sock {struct rng_ctx* private; } ;


 int FUNC_0 (struct sock*) ;
 struct alg_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct rng_ctx*,int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct alg_sock *VAR_1 = FUNC_1(VAR_0);
 struct rng_ctx *VAR_2 = VAR_1->private;

 FUNC_2(VAR_0, VAR_2, VAR_2->len);
 FUNC_0(VAR_0);
}
