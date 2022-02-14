
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_sha_reqctx {unsigned int op; } ;
struct atmel_sha_dev {int dummy; } ;
struct atmel_sha_ctx {struct atmel_sha_dev* dd; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; } ;


 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct atmel_sha_dev*,struct ahash_request*) ;
 struct atmel_sha_ctx* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0, unsigned int VAR_1)
{
 struct atmel_sha_reqctx *VAR_2 = FUNC_0(VAR_0);
 struct atmel_sha_ctx *VAR_3 = FUNC_2(VAR_0->base.tfm);
 struct atmel_sha_dev *VAR_4 = VAR_3->dd;

 VAR_2->op = VAR_1;

 return FUNC_1(VAR_4, VAR_0);
}
