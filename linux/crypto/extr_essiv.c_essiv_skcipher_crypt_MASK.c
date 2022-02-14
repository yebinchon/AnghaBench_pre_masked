
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {int iv; int cryptlen; int dst; int src; } ;
struct TYPE_2__ {int skcipher; } ;
struct essiv_tfm_ctx {TYPE_1__ u; int essiv_cipher; } ;
struct crypto_skcipher {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct essiv_tfm_ctx* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (struct skcipher_request*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int VAR_0 ;
 struct skcipher_request* FUNC_5 (struct skcipher_request*) ;
 int FUNC_6 (struct skcipher_request*) ;
 int FUNC_7 (struct skcipher_request*,int ,int ,struct skcipher_request*) ;
 int FUNC_8 (struct skcipher_request*,int ,int ,int ,int ) ;
 int FUNC_9 (struct skcipher_request*,int ) ;

__attribute__((used)) static int FUNC_10(struct skcipher_request *VAR_1, bool VAR_2)
{
 struct crypto_skcipher *VAR_3 = FUNC_4(VAR_1);
 const struct essiv_tfm_ctx *VAR_4 = FUNC_1(VAR_3);
 struct skcipher_request *VAR_5 = FUNC_5(VAR_1);

 FUNC_0(VAR_4->essiv_cipher, VAR_1->iv, VAR_1->iv);

 FUNC_9(VAR_5, VAR_4->u.skcipher);
 FUNC_8(VAR_5, VAR_1->src, VAR_1->dst, VAR_1->cryptlen,
       VAR_1->iv);
 FUNC_7(VAR_5, FUNC_6(VAR_1),
          VAR_0, VAR_1);

 return VAR_2 ? FUNC_3(VAR_5) :
       FUNC_2(VAR_5);
}
