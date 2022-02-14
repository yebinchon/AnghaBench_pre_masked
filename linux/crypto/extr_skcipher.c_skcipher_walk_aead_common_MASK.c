
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_walk {int flags; int alignmask; int ivsize; int stride; int blocksize; int total; int out; int in; int oiv; int iv; scalar_t__ nbytes; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct aead_request {TYPE_1__ base; int assoclen; int dst; int src; int iv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (int *,int *,int ,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct skcipher_walk*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct skcipher_walk *VAR_3,
         struct aead_request *VAR_4, bool VAR_5)
{
 struct crypto_aead *VAR_6 = FUNC_4(VAR_4);
 int VAR_7;

 VAR_3->nbytes = 0;
 VAR_3->iv = VAR_4->iv;
 VAR_3->oiv = VAR_4->iv;

 if (FUNC_9(!VAR_3->total))
  return 0;

 VAR_3->flags &= ~VAR_1;

 FUNC_7(&VAR_3->in, VAR_4->src);
 FUNC_7(&VAR_3->out, VAR_4->dst);

 FUNC_5(((void*)0), &VAR_3->in, VAR_4->assoclen, 2);
 FUNC_5(((void*)0), &VAR_3->out, VAR_4->assoclen, 2);

 FUNC_6(&VAR_3->in, 0, VAR_3->total);
 FUNC_6(&VAR_3->out, 0, VAR_3->total);

 if (VAR_4->base.flags & VAR_0)
  VAR_3->flags |= VAR_2;
 else
  VAR_3->flags &= ~VAR_2;

 VAR_3->blocksize = FUNC_1(VAR_6);
 VAR_3->stride = FUNC_2(VAR_6);
 VAR_3->ivsize = FUNC_3(VAR_6);
 VAR_3->alignmask = FUNC_0(VAR_6);

 VAR_7 = FUNC_8(VAR_3);

 if (VAR_5)
  VAR_3->flags &= ~VAR_2;

 return VAR_7;
}
