
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_aes_gcm_ctx {scalar_t__ textlen; int * j0; } ;
struct atmel_aes_dev {scalar_t__ datalen; scalar_t__ buflen; scalar_t__ buf; int * data; int areq; int ctx; } ;
struct aead_request {scalar_t__ assoclen; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 struct aead_request* FUNC_1 (int ) ;
 int FUNC_2 (struct atmel_aes_dev*,int ) ;
 struct atmel_aes_gcm_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct atmel_aes_dev*) ;
 size_t FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (struct atmel_aes_dev*,int ,scalar_t__) ;
 int FUNC_7 (struct atmel_aes_dev*,int ,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct atmel_aes_dev *VAR_4)
{
 struct atmel_aes_gcm_ctx *VAR_5 = FUNC_3(VAR_4->ctx);
 struct aead_request *VAR_6 = FUNC_1(VAR_4->areq);
 u32 VAR_7, *VAR_8 = VAR_5->j0;
 size_t VAR_9;


 VAR_7 = VAR_8[3];
 VAR_8[3] = FUNC_9(FUNC_8(VAR_8[3]) + 1);
 FUNC_7(VAR_4, FUNC_0(0), VAR_8);
 VAR_8[3] = VAR_7;


 FUNC_6(VAR_4, VAR_0, VAR_6->assoclen);
 FUNC_6(VAR_4, VAR_2, VAR_5->textlen);


 if (FUNC_12(VAR_6->assoclen == 0)) {
  VAR_4->datalen = 0;
  return FUNC_4(VAR_4);
 }


 VAR_9 = FUNC_5(VAR_6->assoclen, VAR_1);
 if (FUNC_12(VAR_6->assoclen + VAR_9 > VAR_4->buflen))
  return FUNC_2(VAR_4, -VAR_3);
 FUNC_10(VAR_6->src, FUNC_11(VAR_6->src), VAR_4->buf, VAR_6->assoclen);


 VAR_4->data = (u32 *)VAR_4->buf;
 VAR_4->datalen = VAR_6->assoclen + VAR_9;
 return FUNC_4(VAR_4);
}
