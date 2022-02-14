
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct crypto_aead {int dummy; } ;
struct atmel_aes_gcm_ctx {scalar_t__ textlen; } ;
struct atmel_aes_dev {int flags; int areq; int ctx; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; } ;


 int VAR_0 ;
 struct aead_request* FUNC_0 (int ) ;
 struct atmel_aes_gcm_ctx* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct atmel_aes_dev*) ;
 int FUNC_3 (struct atmel_aes_dev*,int ) ;
 int FUNC_4 (struct atmel_aes_dev*,int,int *) ;
 scalar_t__ FUNC_5 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_6 (struct aead_request*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct atmel_aes_dev *VAR_2)
{
 struct atmel_aes_gcm_ctx *VAR_3 = FUNC_1(VAR_2->ctx);
 struct aead_request *VAR_4 = FUNC_0(VAR_2->areq);
 struct crypto_aead *VAR_5 = FUNC_6(VAR_4);
 bool VAR_6 = FUNC_2(VAR_2);
 u32 VAR_7;


 VAR_7 = FUNC_5(VAR_5);
 VAR_3->textlen = VAR_4->cryptlen - (VAR_6 ? 0 : VAR_7);





 if (FUNC_7(VAR_4->assoclen != 0 || VAR_3->textlen != 0))
  VAR_2->flags |= VAR_0;

 FUNC_4(VAR_2, 0, ((void*)0));
 return FUNC_3(VAR_2, VAR_1);
}
