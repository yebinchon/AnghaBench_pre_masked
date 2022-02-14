
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keylen; } ;
struct atmel_aes_xts_ctx {TYPE_1__ base; int key2; } ;
struct atmel_aes_reqctx {int dummy; } ;
struct atmel_aes_dev {unsigned long flags; int areq; int ctx; } ;
struct ablkcipher_request {int info; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;
 struct ablkcipher_request* FUNC_1 (int ) ;
 struct atmel_aes_reqctx* FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (struct atmel_aes_dev*,int) ;
 int FUNC_4 (struct atmel_aes_dev*) ;
 int FUNC_5 (struct atmel_aes_dev*,struct atmel_aes_reqctx*) ;
 int FUNC_6 (struct atmel_aes_dev*,int ) ;
 int FUNC_7 (struct atmel_aes_dev*,int ,int ) ;
 int FUNC_8 (struct atmel_aes_dev*,int,int *,int ,int ) ;
 struct atmel_aes_xts_ctx* FUNC_9 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct atmel_aes_dev *VAR_4)
{
 struct atmel_aes_xts_ctx *VAR_5 = FUNC_9(VAR_4->ctx);
 struct ablkcipher_request *VAR_6 = FUNC_1(VAR_4->areq);
 struct atmel_aes_reqctx *VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8;
 int VAR_9;

 FUNC_5(VAR_4, VAR_7);

 VAR_9 = FUNC_4(VAR_4);
 if (VAR_9)
  return FUNC_3(VAR_4, VAR_9);


 VAR_8 = VAR_4->flags;
 VAR_4->flags &= ~VAR_2;
 VAR_4->flags |= (VAR_0 | VAR_1);
 FUNC_8(VAR_4, 0, ((void*)0),
     VAR_5->key2, VAR_5->base.keylen);
 VAR_4->flags = VAR_8;

 FUNC_7(VAR_4, FUNC_0(0), VAR_6->info);
 return FUNC_6(VAR_4, VAR_3);
}
