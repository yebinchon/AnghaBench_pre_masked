
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_rfc4106_ctx {int child; } ;
struct crypto_aead {int dummy; } ;


 struct crypto_rfc4106_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_0,
          unsigned int VAR_1)
{
 struct crypto_rfc4106_ctx *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2->child, VAR_1);
}
