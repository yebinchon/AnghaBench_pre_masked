
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_ctx_s {int * fallback_cipher; } ;
struct crypto_tfm {int dummy; } ;
struct crypto_aead {int dummy; } ;


 struct crypto_tfm* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int *) ;
 struct iproc_ctx_s* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_4(struct crypto_aead *VAR_0)
{
 struct crypto_tfm *VAR_1 = FUNC_0(VAR_0);
 struct iproc_ctx_s *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 if (VAR_2->fallback_cipher) {
  FUNC_1(VAR_2->fallback_cipher);
  VAR_2->fallback_cipher = ((void*)0);
 }
}
