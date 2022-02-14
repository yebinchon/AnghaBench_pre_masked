
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int addr; } ;
struct TYPE_10__ {TYPE_3__ virt; } ;
struct TYPE_7__ {int addr; } ;
struct TYPE_8__ {TYPE_1__ virt; } ;
struct skcipher_walk {int nbytes; int total; int iv; TYPE_4__ src; TYPE_2__ dst; } ;
struct skcipher_request {int cryptlen; int iv; struct scatterlist* dst; struct scatterlist* src; } ;
struct scatterlist {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_11__ {int key_enc; } ;
struct TYPE_12__ {int key_enc; } ;
struct crypto_aes_xts_ctx {TYPE_5__ key2; TYPE_6__ key1; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int,int,int ,int ,int) ;
 struct crypto_aes_xts_ctx* FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_6__*) ;
 struct scatterlist* FUNC_8 (struct scatterlist*,struct scatterlist*,int) ;
 int FUNC_9 (struct skcipher_request*) ;
 int FUNC_10 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_11 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,int,int ) ;
 int FUNC_12 (struct skcipher_request*,struct crypto_skcipher*) ;
 int FUNC_13 (struct skcipher_walk*) ;
 int FUNC_14 (struct skcipher_walk*,int) ;
 int FUNC_15 (struct skcipher_walk*,struct skcipher_request*,int) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct skcipher_request *VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_3(VAR_2);
 struct crypto_aes_xts_ctx *VAR_4 = FUNC_2(VAR_3);
 int VAR_5, VAR_6, VAR_7 = FUNC_7(&VAR_4->key1);
 int VAR_8 = VAR_2->cryptlen % VAR_0;
 struct scatterlist VAR_9[2], VAR_10[2];
 struct skcipher_request VAR_11;
 struct scatterlist *VAR_12, *VAR_13;
 struct skcipher_walk VAR_14;

 if (VAR_2->cryptlen < VAR_0)
  return -VAR_1;

 VAR_5 = FUNC_15(&VAR_14, VAR_2, 0);

 if (FUNC_16(VAR_8 > 0 && VAR_14.nbytes < VAR_14.total)) {
  int VAR_15 = FUNC_0(VAR_2->cryptlen,
           VAR_0) - 2;

  FUNC_13(&VAR_14);

  FUNC_12(&VAR_11, VAR_3);
  FUNC_10(&VAR_11,
           FUNC_9(VAR_2),
           ((void*)0), ((void*)0));
  FUNC_11(&VAR_11, VAR_2->src, VAR_2->dst,
        VAR_15 * VAR_0,
        VAR_2->iv);
  VAR_2 = &VAR_11;
  VAR_5 = FUNC_15(&VAR_14, VAR_2, 0);
 } else {
  VAR_8 = 0;
 }

 for (VAR_6 = 1; VAR_14.nbytes >= VAR_0; VAR_6 = 0) {
  int VAR_16 = VAR_14.nbytes;

  if (VAR_14.nbytes < VAR_14.total)
   VAR_16 &= ~(VAR_0 - 1);

  FUNC_4();
  FUNC_1(VAR_14.dst.virt.addr, VAR_14.src.virt.addr,
       VAR_4->key1.key_enc, VAR_7, VAR_16, VAR_14.iv,
       VAR_4->key2.key_enc, VAR_6);
  FUNC_5();
  VAR_5 = FUNC_14(&VAR_14, VAR_14.nbytes - VAR_16);
 }

 if (VAR_5 || FUNC_6(!VAR_8))
  return VAR_5;

 VAR_13 = VAR_12 = FUNC_8(VAR_9, VAR_2->src, VAR_2->cryptlen);
 if (VAR_2->dst != VAR_2->src)
  VAR_13 = FUNC_8(VAR_10, VAR_2->dst, VAR_2->cryptlen);

 FUNC_11(VAR_2, VAR_12, VAR_13, VAR_0 + VAR_8,
       VAR_2->iv);

 VAR_5 = FUNC_15(&VAR_14, VAR_2, 0);
 if (VAR_5)
  return VAR_5;

 FUNC_4();
 FUNC_1(VAR_14.dst.virt.addr, VAR_14.src.virt.addr,
      VAR_4->key1.key_enc, VAR_7, VAR_14.nbytes, VAR_14.iv,
      VAR_4->key2.key_enc, VAR_6);
 FUNC_5();

 return FUNC_14(&VAR_14, 0);
}
