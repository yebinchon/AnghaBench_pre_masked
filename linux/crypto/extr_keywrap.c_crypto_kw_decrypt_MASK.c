
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct skcipher_request {int cryptlen; struct scatterlist* dst; struct scatterlist* src; int iv; } ;
struct scatterlist {int dummy; } ;
struct scatter_walk {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_kw_block {int A; int R; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct crypto_cipher*,int *,int *) ;
 int FUNC_2 (struct scatter_walk*,struct scatterlist*,unsigned int) ;
 struct crypto_skcipher* FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct crypto_kw_block*,int) ;
 int FUNC_6 (int *,struct scatter_walk*,int,int) ;
 struct crypto_cipher* FUNC_7 (struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_8(struct skcipher_request *VAR_3)
{
 struct crypto_skcipher *VAR_4 = FUNC_3(VAR_3);
 struct crypto_cipher *VAR_5 = FUNC_7(VAR_4);
 struct crypto_kw_block VAR_6;
 struct scatterlist *VAR_7, *VAR_8;
 u64 VAR_9 = 6 * ((VAR_3->cryptlen) >> 3);
 unsigned int VAR_10;
 int VAR_11 = 0;





 if (VAR_3->cryptlen < (2 * VAR_2) || VAR_3->cryptlen % VAR_2)
  return -VAR_1;


 FUNC_4(&VAR_6.A, VAR_3->iv, VAR_2);






 VAR_7 = VAR_3->src;
 VAR_8 = VAR_3->dst;

 for (VAR_10 = 0; VAR_10 < 6; VAR_10++) {
  struct scatter_walk VAR_12, VAR_13;
  unsigned int VAR_14 = VAR_3->cryptlen;

  while (VAR_14) {

   FUNC_2(&VAR_12, VAR_7, VAR_14);

   FUNC_6(&VAR_6.R, &VAR_12, VAR_2,
            0);


   VAR_6.A ^= FUNC_0(VAR_9);
   VAR_9--;

   FUNC_1(VAR_5, (u8 *)&VAR_6,
        (u8 *)&VAR_6);


   FUNC_2(&VAR_13, VAR_8, VAR_14);

   FUNC_6(&VAR_6.R, &VAR_13, VAR_2,
            1);

   VAR_14 -= VAR_2;
  }


  VAR_7 = VAR_3->dst;
  VAR_8 = VAR_3->dst;
 }


 if (VAR_6.A != FUNC_0(0xa6a6a6a6a6a6a6a6ULL))
  VAR_11 = -VAR_0;

 FUNC_5(&VAR_6, sizeof(struct crypto_kw_block));

 return VAR_11;
}
