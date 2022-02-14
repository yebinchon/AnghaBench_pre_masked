
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_walk {int alignmask; int ivsize; int stride; int blocksize; int flags; int out; int in; int total; int oiv; int iv; scalar_t__ nbytes; } ;
struct TYPE_2__ {int flags; } ;
struct skcipher_request {TYPE_1__ base; int dst; int src; int iv; int cryptlen; } ;
struct crypto_skcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_skcipher*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (struct crypto_skcipher*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct skcipher_walk*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct skcipher_walk *VAR_2,
      struct skcipher_request *VAR_3)
{
 struct crypto_skcipher *VAR_4 = FUNC_3(VAR_3);

 VAR_2->total = VAR_3->cryptlen;
 VAR_2->nbytes = 0;
 VAR_2->iv = VAR_3->iv;
 VAR_2->oiv = VAR_3->iv;

 if (FUNC_7(!VAR_2->total))
  return 0;

 FUNC_5(&VAR_2->in, VAR_3->src);
 FUNC_5(&VAR_2->out, VAR_3->dst);

 VAR_2->flags &= ~VAR_1;
 VAR_2->flags |= VAR_3->base.flags & VAR_0 ?
         VAR_1 : 0;

 VAR_2->blocksize = FUNC_1(VAR_4);
 VAR_2->stride = FUNC_4(VAR_4);
 VAR_2->ivsize = FUNC_2(VAR_4);
 VAR_2->alignmask = FUNC_0(VAR_4);

 return FUNC_6(VAR_2);
}
