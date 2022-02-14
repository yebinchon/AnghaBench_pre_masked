
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct skcipher_request {int cryptlen; int iv; struct scatterlist* dst; struct scatterlist* src; } ;
struct scatterlist {int dummy; } ;
struct scatter_walk {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_kw_block {int A; int R; } ;
struct crypto_cipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct crypto_cipher*,int *,int *) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct crypto_kw_block*,int) ;
 int FUNC_5 (int *,struct scatter_walk*,int,int) ;
 int FUNC_6 (struct scatter_walk*,struct scatterlist*) ;
 struct crypto_cipher* FUNC_7 (struct crypto_skcipher*) ;

__attribute__((used)) static int FUNC_8(struct skcipher_request *VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_2(VAR_2);
 struct crypto_cipher *VAR_4 = FUNC_7(VAR_3);
 struct crypto_kw_block VAR_5;
 struct scatterlist *VAR_6, *VAR_7;
 u64 VAR_8 = 1;
 unsigned int VAR_9;







 if (VAR_2->cryptlen < (2 * VAR_1) || VAR_2->cryptlen % VAR_1)
  return -VAR_0;





 VAR_5.A = FUNC_0(0xa6a6a6a6a6a6a6a6ULL);






 VAR_6 = VAR_2->src;
 VAR_7 = VAR_2->dst;

 for (VAR_9 = 0; VAR_9 < 6; VAR_9++) {
  struct scatter_walk VAR_10, VAR_11;
  unsigned int VAR_12 = VAR_2->cryptlen;

  FUNC_6(&VAR_10, VAR_6);
  FUNC_6(&VAR_11, VAR_7);

  while (VAR_12) {

   FUNC_5(&VAR_5.R, &VAR_10, VAR_1,
            0);


   FUNC_1(VAR_4, (u8 *)&VAR_5,
        (u8 *)&VAR_5);

   VAR_5.A ^= FUNC_0(VAR_8);
   VAR_8++;


   FUNC_5(&VAR_5.R, &VAR_11, VAR_1,
            1);

   VAR_12 -= VAR_1;
  }


  VAR_6 = VAR_2->dst;
  VAR_7 = VAR_2->dst;
 }


 FUNC_3(VAR_2->iv, &VAR_5.A, VAR_1);

 FUNC_4(&VAR_5, sizeof(struct crypto_kw_block));

 return 0;
}
