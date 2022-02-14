
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int cryptlen; int dst; int base; } ;
struct crypto_skcipher {int dummy; } ;
struct artpec6_cryptotfm_context {int crypto_type; } ;
struct artpec6_crypto_request_context {int common; int decrypt; } ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,void (*) (struct crypto_async_request*),int ,int ) ;
 void FUNC_2 (struct crypto_async_request*) ;
 void FUNC_3 (struct crypto_async_request*) ;
 int FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (int *) ;
 struct artpec6_cryptotfm_context* FUNC_6 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_7 (struct skcipher_request*) ;
 struct artpec6_crypto_request_context* FUNC_8 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_9(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_7(VAR_0);
 struct artpec6_cryptotfm_context *VAR_2 = FUNC_6(VAR_1);
 struct artpec6_crypto_request_context *VAR_3 = ((void*)0);
 void (*VAR_4)(struct crypto_async_request *VAR_5);
 int VAR_6;

 VAR_3 = FUNC_8(VAR_0);

 switch (VAR_2->crypto_type) {
 case 130:
 case 129:
 case 128:
  VAR_3->decrypt = 0;
  break;
 default:
  break;
 }

 switch (VAR_2->crypto_type) {
 case 130:
  VAR_4 = FUNC_2;
  break;
 default:
  VAR_4 = FUNC_3;
  break;
 }

 VAR_6 = FUNC_1(&VAR_3->common,
      &VAR_0->base,
      VAR_4,
      VAR_0->dst, VAR_0->cryptlen);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_0);
 if (VAR_6) {
  FUNC_0(&VAR_3->common);
  return VAR_6;
 }

 return FUNC_5(&VAR_3->common);
}
