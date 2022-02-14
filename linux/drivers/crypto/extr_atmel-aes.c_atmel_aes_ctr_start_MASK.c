
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_aes_reqctx {int dummy; } ;
struct atmel_aes_dev {scalar_t__ total; int areq; int ctx; } ;
struct atmel_aes_ctr_ctx {scalar_t__ offset; int iv; } ;
struct ablkcipher_request {int info; } ;


 int VAR_0 ;
 struct ablkcipher_request* FUNC_0 (int ) ;
 struct atmel_aes_reqctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct atmel_aes_dev*,int) ;
 struct atmel_aes_ctr_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct atmel_aes_dev*) ;
 int FUNC_5 (struct atmel_aes_dev*) ;
 int FUNC_6 (struct atmel_aes_dev*,struct atmel_aes_reqctx*) ;
 int FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct atmel_aes_dev *VAR_1)
{
 struct atmel_aes_ctr_ctx *VAR_2 = FUNC_3(VAR_1->ctx);
 struct ablkcipher_request *VAR_3 = FUNC_0(VAR_1->areq);
 struct atmel_aes_reqctx *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 FUNC_6(VAR_1, VAR_4);

 VAR_5 = FUNC_5(VAR_1);
 if (VAR_5)
  return FUNC_2(VAR_1, VAR_5);

 FUNC_7(VAR_2->iv, VAR_3->info, VAR_0);
 VAR_2->offset = 0;
 VAR_1->total = 0;
 return FUNC_4(VAR_1);
}
