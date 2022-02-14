
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_aes_reqctx {int dummy; } ;
struct atmel_aes_dev {TYPE_1__* ctx; int areq; } ;
struct ablkcipher_request {scalar_t__ nbytes; int dst; int src; int info; } ;
struct TYPE_2__ {scalar_t__ block_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ablkcipher_request* FUNC_0 (int ) ;
 struct atmel_aes_reqctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct atmel_aes_dev*,int) ;
 int FUNC_3 (struct atmel_aes_dev*,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (struct atmel_aes_dev*,int ,int ,scalar_t__,int ) ;
 int FUNC_5 (struct atmel_aes_dev*) ;
 int FUNC_6 (struct atmel_aes_dev*,struct atmel_aes_reqctx*) ;
 int VAR_2 ;
 int FUNC_7 (struct atmel_aes_dev*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct atmel_aes_dev *VAR_3)
{
 struct ablkcipher_request *VAR_4 = FUNC_0(VAR_3->areq);
 struct atmel_aes_reqctx *VAR_5 = FUNC_1(VAR_4);
 bool VAR_6 = (VAR_4->nbytes >= VAR_1 ||
   VAR_3->ctx->block_size != VAR_0);
 int VAR_7;

 FUNC_6(VAR_3, VAR_5);

 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7)
  return FUNC_2(VAR_3, VAR_7);

 FUNC_7(VAR_3, VAR_6, VAR_4->info);
 if (VAR_6)
  return FUNC_4(VAR_3, VAR_4->src, VAR_4->dst, VAR_4->nbytes,
        VAR_2);

 return FUNC_3(VAR_3, VAR_4->src, VAR_4->dst, VAR_4->nbytes,
       VAR_2);
}
