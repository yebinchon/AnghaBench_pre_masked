
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct caam_ctx {unsigned int authsize; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct crypto_aead*) ;
 struct caam_ctx* FUNC_1 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_2,
      unsigned int VAR_3)
{
 struct caam_ctx *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3 != VAR_1)
  return -VAR_0;

 VAR_4->authsize = VAR_3;
 return FUNC_0(VAR_2);
}
