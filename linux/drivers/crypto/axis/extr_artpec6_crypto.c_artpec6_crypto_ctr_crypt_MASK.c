
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct skcipher_request {size_t iv; int cryptlen; int dst; int src; TYPE_1__ base; } ;
struct crypto_skcipher {int dummy; } ;
struct artpec6_cryptotfm_context {int fallback; int key_length; int aes_key; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct skcipher_request*) ;
 int FUNC_3 (struct skcipher_request*) ;
 unsigned int FUNC_4 (int *) ;
 struct artpec6_cryptotfm_context* FUNC_5 (struct crypto_skcipher*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 size_t FUNC_8 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_9 (struct skcipher_request*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (char*,unsigned int,unsigned int) ;
 int FUNC_12 (int ,int ,int *,int *) ;
 int FUNC_13 (int ,int ,int ,int ,size_t) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_16(struct skcipher_request *VAR_2, bool VAR_3)
{
 struct crypto_skcipher *VAR_4 = FUNC_9(VAR_2);
 struct artpec6_cryptotfm_context *VAR_5 = FUNC_5(VAR_4);
 size_t VAR_6 = FUNC_8(VAR_4);
 unsigned int VAR_7 = FUNC_4((__be32 *)
         (VAR_2->iv + VAR_6 - 4));
 unsigned int VAR_8 = FUNC_0(VAR_2->cryptlen, VAR_0) /
        VAR_0;







 if (VAR_7 + VAR_8 < VAR_7) {
  int VAR_9;

  FUNC_11("counter %x will overflow (nblks %u), falling back\n",
    VAR_7, VAR_7 + VAR_8);

  VAR_9 = FUNC_10(VAR_5->fallback, VAR_5->aes_key,
        VAR_5->key_length);
  if (VAR_9)
   return VAR_9;

  {
   FUNC_1(VAR_1, VAR_5->fallback);

   FUNC_14(VAR_1, VAR_5->fallback);
   FUNC_12(VAR_1, VAR_2->base.flags,
            ((void*)0), ((void*)0));
   FUNC_13(VAR_1, VAR_2->src, VAR_2->dst,
         VAR_2->cryptlen, VAR_2->iv);
   VAR_9 = VAR_3 ? FUNC_7(VAR_1)
          : FUNC_6(VAR_1);
   FUNC_15(VAR_1);
  }
  return VAR_9;
 }

 return VAR_3 ? FUNC_3(VAR_2)
         : FUNC_2(VAR_2);
}
