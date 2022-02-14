
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_destruct; } ;
struct rng_ctx {unsigned int len; void* drng; } ;
struct alg_sock {struct rng_ctx* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct alg_sock* FUNC_0 (struct sock*) ;
 int VAR_2 ;
 struct rng_ctx* FUNC_1 (struct sock*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, struct sock *VAR_4)
{
 struct rng_ctx *VAR_5;
 struct alg_sock *VAR_6 = FUNC_0(VAR_4);
 unsigned int VAR_7 = sizeof(*VAR_5);

 VAR_5 = FUNC_1(VAR_4, VAR_7, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->len = VAR_7;







 VAR_5->drng = VAR_3;
 VAR_6->private = VAR_5;
 VAR_4->sk_destruct = VAR_2;

 return 0;
}
