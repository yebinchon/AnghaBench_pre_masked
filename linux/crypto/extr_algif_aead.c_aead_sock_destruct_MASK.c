
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct alg_sock {struct af_alg_ctx* private; struct sock* parent; } ;
struct af_alg_ctx {int len; int iv; int used; struct crypto_aead* aead; } ;
struct aead_tfm {int len; int iv; int used; struct crypto_aead* aead; } ;


 int FUNC_0 (struct sock*,int ,int *,int ) ;
 int FUNC_1 (struct sock*) ;
 struct alg_sock* FUNC_2 (struct sock*) ;
 unsigned int FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (struct sock*,struct af_alg_ctx*,int ) ;
 int FUNC_5 (struct sock*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0)
{
 struct alg_sock *VAR_1 = FUNC_2(VAR_0);
 struct af_alg_ctx *VAR_2 = VAR_1->private;
 struct sock *VAR_3 = VAR_1->parent;
 struct alg_sock *VAR_4 = FUNC_2(VAR_3);
 struct aead_tfm *VAR_5 = VAR_4->private;
 struct crypto_aead *VAR_6 = VAR_5->aead;
 unsigned int VAR_7 = FUNC_3(VAR_6);

 FUNC_0(VAR_0, VAR_2->used, ((void*)0), 0);
 FUNC_5(VAR_0, VAR_2->iv, VAR_7);
 FUNC_4(VAR_0, VAR_2, VAR_2->len);
 FUNC_1(VAR_0);
}
