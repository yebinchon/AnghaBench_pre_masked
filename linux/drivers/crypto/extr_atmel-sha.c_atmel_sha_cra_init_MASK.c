
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_tfm {int dummy; } ;
struct atmel_sha_reqctx {int dummy; } ;
struct atmel_sha_ctx {int start; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 struct atmel_sha_ctx* FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_3(struct crypto_tfm *VAR_1)
{
 struct atmel_sha_ctx *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(FUNC_0(VAR_1),
     sizeof(struct atmel_sha_reqctx));
 VAR_2->start = VAR_0;

 return 0;
}
