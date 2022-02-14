
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct crypto_aead {int dummy; } ;
struct atmel_aes_reqctx {int dummy; } ;
struct atmel_aes_gcm_ctx {int * j0; } ;
struct atmel_aes_dev {size_t buflen; int * buf; int areq; int ctx; } ;
struct aead_request {void* iv; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct aead_request* FUNC_0 (int ) ;
 struct atmel_aes_reqctx* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct atmel_aes_dev*,int) ;
 struct atmel_aes_gcm_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct atmel_aes_dev*,int const*,size_t,int *,int *,int (*) (struct atmel_aes_dev*)) ;
 int FUNC_5 (struct atmel_aes_dev*) ;
 int FUNC_6 (struct atmel_aes_dev*) ;
 size_t FUNC_7 (size_t,size_t) ;
 int FUNC_8 (struct atmel_aes_dev*,struct atmel_aes_reqctx*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (size_t) ;
 size_t FUNC_11 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_12 (struct aead_request*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,void const*,size_t) ;
 int FUNC_15 (int *,int ,size_t) ;

__attribute__((used)) static int FUNC_16(struct atmel_aes_dev *VAR_3)
{
 struct atmel_aes_gcm_ctx *VAR_4 = FUNC_3(VAR_3->ctx);
 struct aead_request *VAR_5 = FUNC_0(VAR_3->areq);
 struct crypto_aead *VAR_6 = FUNC_12(VAR_5);
 struct atmel_aes_reqctx *VAR_7 = FUNC_1(VAR_5);
 size_t VAR_8 = FUNC_11(VAR_6);
 size_t VAR_9, VAR_10;
 const void *VAR_11 = VAR_5->iv;
 u8 *VAR_12 = VAR_3->buf;
 int VAR_13;

 FUNC_8(VAR_3, VAR_7);

 VAR_13 = FUNC_6(VAR_3);
 if (VAR_13)
  return FUNC_2(VAR_3, VAR_13);

 if (FUNC_13(VAR_8 == VAR_2)) {
  FUNC_14(VAR_4->j0, VAR_11, VAR_8);
  VAR_4->j0[3] = FUNC_9(1);
  return FUNC_5(VAR_3);
 }

 VAR_10 = FUNC_7(VAR_8, VAR_0);
 VAR_9 = VAR_8 + VAR_10 + VAR_0;
 if (VAR_9 > VAR_3->buflen)
  return FUNC_2(VAR_3, -VAR_1);

 FUNC_14(VAR_12, VAR_11, VAR_8);
 FUNC_15(VAR_12 + VAR_8, 0, VAR_10 + sizeof(u64));
 ((u64 *)(VAR_12 + VAR_9))[-1] = FUNC_10(VAR_8 * 8);

 return FUNC_4(VAR_3, (const u32 *)VAR_12, VAR_9,
       ((void*)0), VAR_4->j0, FUNC_5);
}
