
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct atmel_aes_gcm_ctx {int textlen; int ghash; } ;
struct atmel_aes_dev {int flags; int (* resume ) (struct atmel_aes_dev*) ;int * buf; int areq; int ctx; } ;
struct aead_request {int assoclen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct aead_request* FUNC_1 (int ) ;
 struct atmel_aes_gcm_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct atmel_aes_dev*) ;
 int FUNC_4 (struct atmel_aes_dev*,int const*,int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (struct atmel_aes_dev*,int ) ;
 int FUNC_6 (struct atmel_aes_dev*,int ,int ) ;
 int FUNC_7 (struct atmel_aes_dev*,int ,int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct atmel_aes_dev *VAR_7)
{
 struct atmel_aes_gcm_ctx *VAR_8 = FUNC_2(VAR_7->ctx);
 struct aead_request *VAR_9 = FUNC_1(VAR_7->areq);
 u64 *VAR_10 = VAR_7->buf;

 if (FUNC_9(VAR_7->flags & VAR_1)) {
  if (!(FUNC_5(VAR_7, VAR_4) & VAR_3)) {
   VAR_7->resume = FUNC_10;
   FUNC_7(VAR_7, VAR_2, VAR_3);
   return -VAR_5;
  }

  return FUNC_3(VAR_7);
 }


 FUNC_6(VAR_7, FUNC_0(0), VAR_8->ghash);

 VAR_10[0] = FUNC_8(VAR_9->assoclen * 8);
 VAR_10[1] = FUNC_8(VAR_8->textlen * 8);

 return FUNC_4(VAR_7, (const u32 *)VAR_10, VAR_0,
       VAR_8->ghash, VAR_8->ghash, VAR_6);
}
