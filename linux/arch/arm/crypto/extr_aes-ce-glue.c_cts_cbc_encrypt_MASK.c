
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_3__ virt; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_6__ {TYPE_1__ virt; } ;
struct skcipher_walk {int iv; int nbytes; TYPE_4__ src; TYPE_2__ dst; } ;
struct skcipher_request {int cryptlen; int iv; struct scatterlist* dst; struct scatterlist* src; } ;
struct scatterlist {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_aes_ctx {int key_enc; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct skcipher_request*,struct skcipher_walk*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 struct crypto_aes_ctx* FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct crypto_aes_ctx*) ;
 struct scatterlist* FUNC_8 (struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_9 (struct skcipher_request*) ;
 int FUNC_10 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_11 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int,int ) ;
 int FUNC_12 (struct skcipher_request*,struct crypto_skcipher*) ;
 int FUNC_13 (struct skcipher_walk*,int ) ;
 int FUNC_14 (struct skcipher_walk*,struct skcipher_request*,int) ;

__attribute__((used)) static int FUNC_15(struct skcipher_request *VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_4(VAR_2);
 struct crypto_aes_ctx *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = FUNC_0(VAR_2->cryptlen, VAR_0) - 2;
 struct scatterlist *VAR_6 = VAR_2->src, *VAR_7 = VAR_2->dst;
 struct scatterlist VAR_8[2], VAR_9[2];
 struct skcipher_request VAR_10;
 struct skcipher_walk VAR_11;
 int VAR_12;

 FUNC_12(&VAR_10, VAR_3);
 FUNC_10(&VAR_10, FUNC_9(VAR_2),
          ((void*)0), ((void*)0));

 if (VAR_2->cryptlen <= VAR_0) {
  if (VAR_2->cryptlen < VAR_0)
   return -VAR_1;
  VAR_5 = 1;
 }

 if (VAR_5 > 0) {
  FUNC_11(&VAR_10, VAR_2->src, VAR_2->dst,
        VAR_5 * VAR_0,
        VAR_2->iv);

  VAR_12 = FUNC_14(&VAR_11, &VAR_10, 0) ?:
        FUNC_1(&VAR_10, &VAR_11);
  if (VAR_12)
   return VAR_12;

  if (VAR_2->cryptlen == VAR_0)
   return 0;

  VAR_7 = VAR_6 = FUNC_8(VAR_8, VAR_2->src, VAR_10.cryptlen);
  if (VAR_2->dst != VAR_2->src)
   VAR_7 = FUNC_8(VAR_9, VAR_2->dst,
            VAR_10.cryptlen);
 }


 FUNC_11(&VAR_10, VAR_6, VAR_7,
       VAR_2->cryptlen - VAR_5 * VAR_0,
       VAR_2->iv);

 VAR_12 = FUNC_14(&VAR_11, &VAR_10, 0);
 if (VAR_12)
  return VAR_12;

 FUNC_5();
 FUNC_2(VAR_11.dst.virt.addr, VAR_11.src.virt.addr,
          VAR_4->key_enc, FUNC_7(VAR_4), VAR_11.nbytes,
          VAR_11.iv);
 FUNC_6();

 return FUNC_13(&VAR_11, 0);
}
