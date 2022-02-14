
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atmel_aes_gcm_ctx {int (* ghash_resume ) (struct atmel_aes_dev*) ;int ghash_out; } ;
struct atmel_aes_dev {scalar_t__ datalen; int data; int (* resume ) (struct atmel_aes_dev*) ;int ctx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct atmel_aes_gcm_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct atmel_aes_dev*,int ) ;
 int FUNC_4 (struct atmel_aes_dev*,int ,int ) ;
 int FUNC_5 (struct atmel_aes_dev*,int ,int) ;
 int FUNC_6 (struct atmel_aes_dev*,int ,int) ;
 int FUNC_7 (struct atmel_aes_dev*) ;

__attribute__((used)) static int FUNC_8(struct atmel_aes_dev *VAR_5)
{
 struct atmel_aes_gcm_ctx *VAR_6 = FUNC_2(VAR_5->ctx);
 u32 VAR_7;


 while (VAR_5->datalen > 0) {
  FUNC_6(VAR_5, FUNC_1(0), VAR_5->data);
  VAR_5->data += 4;
  VAR_5->datalen -= VAR_0;

  VAR_7 = FUNC_3(VAR_5, VAR_3);
  if (!(VAR_7 & VAR_2)) {
   VAR_5->resume = FUNC_8;
   FUNC_5(VAR_5, VAR_1, VAR_2);
   return -VAR_4;
  }
 }


 FUNC_4(VAR_5, FUNC_0(0), VAR_6->ghash_out);

 return VAR_6->ghash_resume(VAR_5);
}
