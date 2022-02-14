
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct crypto_aead {int dummy; } ;
struct atmel_aes_gcm_ctx {scalar_t__ textlen; scalar_t__* tag; } ;
struct atmel_aes_dev {int flags; int areq; int ctx; } ;
struct aead_request {int src; int dst; scalar_t__ assoclen; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct aead_request* FUNC_2 (int ) ;
 int FUNC_3 (struct atmel_aes_dev*,int) ;
 struct atmel_aes_gcm_ctx* FUNC_4 (int ) ;
 int FUNC_5 (struct atmel_aes_dev*) ;
 int FUNC_6 (struct atmel_aes_dev*,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_8 (struct aead_request*) ;
 scalar_t__ FUNC_9 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (scalar_t__*,int ,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int FUNC_12(struct atmel_aes_dev *VAR_2)
{
 struct atmel_aes_gcm_ctx *VAR_3 = FUNC_4(VAR_2->ctx);
 struct aead_request *VAR_4 = FUNC_2(VAR_2->areq);
 struct crypto_aead *VAR_5 = FUNC_8(VAR_4);
 bool VAR_6 = FUNC_5(VAR_2);
 u32 VAR_7, VAR_8, VAR_9[4], *VAR_10 = VAR_3->tag;
 int VAR_11;


 if (FUNC_10(VAR_2->flags & VAR_0))
  FUNC_6(VAR_2, FUNC_1(0), VAR_3->tag);
 else
  FUNC_6(VAR_2, FUNC_0(0), VAR_3->tag);

 VAR_7 = VAR_4->assoclen + VAR_3->textlen;
 VAR_8 = FUNC_7(VAR_5);
 if (VAR_6) {
  FUNC_11(VAR_10, VAR_4->dst, VAR_7, VAR_8, 1);
  VAR_11 = 0;
 } else {
  FUNC_11(VAR_9, VAR_4->src, VAR_7, VAR_8, 0);
  VAR_11 = FUNC_9(VAR_9, VAR_10, VAR_8) ? -VAR_1 : 0;
 }

 return FUNC_3(VAR_2, VAR_11);
}
