
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct caam_ctx {unsigned int authsize; } ;


 int VAR_0 ;
 struct caam_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_1,
          unsigned int VAR_2)
{
 struct caam_ctx *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 != 16)
  return -VAR_0;

 VAR_3->authsize = VAR_2;
 FUNC_1(VAR_1);

 return 0;
}
