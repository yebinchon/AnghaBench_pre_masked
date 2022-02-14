
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct skcipher_walk {unsigned int nbytes; int iv; } ;
struct skcipher_request {unsigned int cryptlen; int * iv; struct scatterlist* dst; struct scatterlist* src; } ;
struct scatterlist {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct common_glue_ctx {int fpu_blocks_limit; } ;
typedef int le128 ;
typedef int (* common_glue_func_t ) (void*,int ,int ) ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct common_glue_ctx const*,void*,struct skcipher_walk*) ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (unsigned int const,int ,struct skcipher_walk*,int,unsigned int const) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int *,int *,unsigned int) ;
 struct scatterlist* FUNC_7 (struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_8 (int *,struct scatterlist*,unsigned int,unsigned int,int) ;
 int FUNC_9 (struct skcipher_request*,int ,int *,int *) ;
 int FUNC_10 (struct skcipher_request*,struct scatterlist*,struct scatterlist*,unsigned int,int *) ;
 int FUNC_11 (struct skcipher_request*,struct crypto_skcipher*) ;
 int FUNC_12 (struct skcipher_walk*,unsigned int) ;
 int FUNC_13 (struct skcipher_walk*,struct skcipher_request*,int) ;
 scalar_t__ FUNC_14 (int const) ;

int FUNC_15(const struct common_glue_ctx *VAR_2,
   struct skcipher_request *VAR_3,
   common_glue_func_t VAR_4, void *VAR_5,
   void *VAR_6, bool VAR_7)
{
 const bool VAR_8 = (VAR_3->cryptlen % VAR_1);
 const unsigned int VAR_9 = 128 / 8;
 struct skcipher_request VAR_10;
 struct skcipher_walk VAR_11;
 bool VAR_12 = 0;
 unsigned int VAR_13, VAR_14;
 int VAR_15;

 if (VAR_3->cryptlen < VAR_1)
  return -VAR_0;

 if (FUNC_14(VAR_8)) {
  struct crypto_skcipher *VAR_16 = FUNC_2(VAR_3);

  VAR_14 = VAR_3->cryptlen % VAR_1 + VAR_1;

  FUNC_11(&VAR_10, VAR_16);
  FUNC_9(&VAR_10,
           FUNC_1(VAR_16),
           ((void*)0), ((void*)0));
  FUNC_10(&VAR_10, VAR_3->src, VAR_3->dst,
        VAR_3->cryptlen - VAR_14, VAR_3->iv);
  VAR_3 = &VAR_10;
 }

 VAR_15 = FUNC_13(&VAR_11, VAR_3, 0);
 VAR_13 = VAR_11.nbytes;
 if (VAR_15)
  return VAR_15;


 VAR_12 = FUNC_4(VAR_9, VAR_2->fpu_blocks_limit,
         &VAR_11, VAR_12,
         VAR_13 < VAR_9 ? VAR_9 : VAR_13);


 VAR_4(VAR_5, VAR_11.iv, VAR_11.iv);

 while (VAR_13) {
  VAR_13 = FUNC_0(VAR_2, VAR_6, &VAR_11);

  VAR_15 = FUNC_12(&VAR_11, VAR_13);
  VAR_13 = VAR_11.nbytes;
 }

 if (FUNC_14(VAR_8)) {
  u8 *VAR_17, *VAR_18 = VAR_3->iv;
  struct scatterlist *VAR_19, *VAR_20;
  struct scatterlist VAR_21[2], VAR_22[2];
  le128 VAR_23[2];

  VAR_20 = VAR_19 = FUNC_7(VAR_21, VAR_3->src, VAR_3->cryptlen);
  if (VAR_3->dst != VAR_3->src)
   VAR_20 = FUNC_7(VAR_22, VAR_3->dst, VAR_3->cryptlen);

  if (VAR_7) {
   VAR_17 = FUNC_6(VAR_23, VAR_3->iv, VAR_1);
   FUNC_3(VAR_23, VAR_23);
  } else {
   VAR_17 = VAR_3->iv;
  }

  FUNC_10(&VAR_10, VAR_19, VAR_20, VAR_1,
        VAR_17);

  VAR_15 = FUNC_13(&VAR_11, VAR_3, 0) ?:
        FUNC_12(&VAR_11,
    FUNC_0(VAR_2, VAR_6, &VAR_11));
  if (VAR_15)
   goto out;

  FUNC_8(VAR_23, VAR_20, 0, VAR_1, 0);
  FUNC_6(VAR_23 + 1, VAR_23, VAR_14 - VAR_1);
  FUNC_8(VAR_23, VAR_19, VAR_1,
      VAR_14 - VAR_1, 0);
  FUNC_8(VAR_23, VAR_20, 0, VAR_14, 1);

  FUNC_10(&VAR_10, VAR_20, VAR_20, VAR_1,
        VAR_18);

  VAR_15 = FUNC_13(&VAR_11, VAR_3, 0) ?:
        FUNC_12(&VAR_11,
    FUNC_0(VAR_2, VAR_6, &VAR_11));
 }

out:
 FUNC_5(VAR_12);

 return VAR_15;
}
