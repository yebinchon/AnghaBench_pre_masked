
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {unsigned int cryptlen; int dst; } ;
struct crypto_skcipher {int dummy; } ;
struct adiantum_tfm_ctx {int blockcipher; } ;
struct TYPE_2__ {int bignum; int bytes; } ;
struct adiantum_request_ctx {TYPE_1__ rbuf; int header_hash; int enc; } ;
typedef int le128 ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct skcipher_request*,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 struct adiantum_tfm_ctx* FUNC_2 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_3 (struct skcipher_request*) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *,int ,unsigned int const,unsigned int,int) ;
 struct adiantum_request_ctx* FUNC_7 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_8(struct skcipher_request *VAR_1)
{
 struct crypto_skcipher *VAR_2 = FUNC_3(VAR_1);
 const struct adiantum_tfm_ctx *VAR_3 = FUNC_2(VAR_2);
 struct adiantum_request_ctx *VAR_4 = FUNC_7(VAR_1);
 const unsigned int VAR_5 = VAR_1->cryptlen - VAR_0;
 le128 VAR_6;
 int VAR_7;


 if (!VAR_4->enc)
  FUNC_1(VAR_3->blockcipher, VAR_4->rbuf.bytes,
       VAR_4->rbuf.bytes);






 VAR_7 = FUNC_0(VAR_1, VAR_1->dst, &VAR_6);
 if (VAR_7)
  return VAR_7;
 FUNC_4(&VAR_6, &VAR_6, &VAR_4->header_hash);
 FUNC_5(&VAR_4->rbuf.bignum, &VAR_4->rbuf.bignum, &VAR_6);
 FUNC_6(&VAR_4->rbuf.bignum, VAR_1->dst,
     VAR_5, VAR_0, 1);
 return 0;
}
