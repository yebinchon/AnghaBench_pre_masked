
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct alg_sock {struct af_alg_ctx* private; struct sock* parent; } ;
struct af_alg_ctx {scalar_t__ used; scalar_t__ aead_assoclen; scalar_t__ enc; struct crypto_aead* aead; } ;
struct aead_tfm {scalar_t__ used; scalar_t__ aead_assoclen; scalar_t__ enc; struct crypto_aead* aead; } ;


 struct alg_sock* FUNC_0 (struct sock*) ;
 unsigned int FUNC_1 (struct crypto_aead*) ;

__attribute__((used)) static inline bool FUNC_2(struct sock *VAR_0)
{
 struct alg_sock *VAR_1 = FUNC_0(VAR_0);
 struct sock *VAR_2 = VAR_1->parent;
 struct alg_sock *VAR_3 = FUNC_0(VAR_2);
 struct af_alg_ctx *VAR_4 = VAR_1->private;
 struct aead_tfm *VAR_5 = VAR_3->private;
 struct crypto_aead *VAR_6 = VAR_5->aead;
 unsigned int VAR_7 = FUNC_1(VAR_6);





 return VAR_4->used >= VAR_4->aead_assoclen + (VAR_4->enc ? 0 : VAR_7);
}
