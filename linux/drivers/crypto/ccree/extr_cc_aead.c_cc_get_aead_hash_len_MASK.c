
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct cc_aead_ctx {int drvdata; } ;


 unsigned int FUNC_0 (int ) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;

__attribute__((used)) static unsigned int FUNC_2(struct crypto_aead *VAR_0)
{
 struct cc_aead_ctx *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->drvdata);
}
