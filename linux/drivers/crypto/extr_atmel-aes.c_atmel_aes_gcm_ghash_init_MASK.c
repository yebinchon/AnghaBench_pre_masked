
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_aes_gcm_ctx {scalar_t__ ghash_in; } ;
struct atmel_aes_dev {int total; int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct atmel_aes_gcm_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct atmel_aes_dev*) ;
 int FUNC_3 (struct atmel_aes_dev*,int ,int ) ;
 int FUNC_4 (struct atmel_aes_dev*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct atmel_aes_dev *VAR_2)
{
 struct atmel_aes_gcm_ctx *VAR_3 = FUNC_1(VAR_2->ctx);


 FUNC_3(VAR_2, VAR_0, VAR_2->total);
 FUNC_3(VAR_2, VAR_1, 0);


 if (VAR_3->ghash_in)
  FUNC_4(VAR_2, FUNC_0(0), VAR_3->ghash_in);

 return FUNC_2(VAR_2);
}
