
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct crypto_skcipher {int len; int iv; int used; } ;
struct alg_sock {struct crypto_skcipher* private; struct sock* parent; } ;
struct af_alg_ctx {int len; int iv; int used; } ;


 int FUNC_0 (struct sock*,int ,int *,int ) ;
 int FUNC_1 (struct sock*) ;
 struct alg_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct sock*,struct crypto_skcipher*,int ) ;
 int FUNC_5 (struct sock*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0)
{
 struct alg_sock *VAR_1 = FUNC_2(VAR_0);
 struct af_alg_ctx *VAR_2 = VAR_1->private;
 struct sock *VAR_3 = VAR_1->parent;
 struct alg_sock *VAR_4 = FUNC_2(VAR_3);
 struct crypto_skcipher *VAR_5 = VAR_4->private;

 FUNC_0(VAR_0, VAR_2->used, ((void*)0), 0);
 FUNC_5(VAR_0, VAR_2->iv, FUNC_3(VAR_5));
 FUNC_4(VAR_0, VAR_2, VAR_2->len);
 FUNC_1(VAR_0);
}
