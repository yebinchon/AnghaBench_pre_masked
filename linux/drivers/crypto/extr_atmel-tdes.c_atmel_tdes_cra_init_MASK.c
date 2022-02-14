
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;
struct atmel_tdes_reqctx {int dummy; } ;
struct atmel_tdes_dev {int dummy; } ;
struct atmel_tdes_ctx {int dummy; } ;


 int VAR_0 ;
 struct atmel_tdes_dev* FUNC_0 (struct atmel_tdes_ctx*) ;
 struct atmel_tdes_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_1)
{
 struct atmel_tdes_ctx *VAR_2 = FUNC_1(VAR_1);
 struct atmel_tdes_dev *VAR_3;

 VAR_1->crt_ablkcipher.reqsize = sizeof(struct atmel_tdes_reqctx);

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 return 0;
}
