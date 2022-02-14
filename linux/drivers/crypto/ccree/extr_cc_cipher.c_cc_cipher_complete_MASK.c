
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int iv; struct scatterlist* src; struct scatterlist* dst; } ;
struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct cipher_req_ctx {int iv; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct cipher_req_ctx*,unsigned int,struct scatterlist*,struct scatterlist*) ;
 unsigned int FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 int FUNC_5 (struct skcipher_request*,int) ;
 struct cipher_req_ctx* FUNC_6 (struct skcipher_request*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_1, void *VAR_2, int VAR_3)
{
 struct skcipher_request *VAR_4 = (struct skcipher_request *)VAR_2;
 struct scatterlist *VAR_5 = VAR_4->dst;
 struct scatterlist *VAR_6 = VAR_4->src;
 struct cipher_req_ctx *VAR_7 = FUNC_6(VAR_4);
 struct crypto_skcipher *VAR_8 = FUNC_2(VAR_4);
 unsigned int VAR_9 = FUNC_1(VAR_8);

 if (VAR_3 != -VAR_0) {

  FUNC_0(VAR_1, VAR_7, VAR_9, VAR_6, VAR_5);
  FUNC_4(VAR_4->iv, VAR_7->iv, VAR_9);
  FUNC_3(VAR_7->iv);
 }

 FUNC_5(VAR_4, VAR_3);
}
