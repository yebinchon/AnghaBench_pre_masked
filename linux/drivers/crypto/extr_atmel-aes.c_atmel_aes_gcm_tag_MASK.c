
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_aes_gcm_ctx {int ghash; int j0; } ;
struct atmel_aes_dev {unsigned long flags; int ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct atmel_aes_gcm_ctx* FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct atmel_aes_dev*,int ) ;
 int FUNC_3 (struct atmel_aes_dev*,int ,int ) ;
 int FUNC_4 (struct atmel_aes_dev*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct atmel_aes_dev *VAR_4)
{
 struct atmel_aes_gcm_ctx *VAR_5 = FUNC_1(VAR_4->ctx);
 unsigned long VAR_6;





 VAR_6 = VAR_4->flags;
 VAR_4->flags &= ~(VAR_2 | VAR_1);
 VAR_4->flags |= VAR_0;
 FUNC_4(VAR_4, 0, VAR_5->j0);
 VAR_4->flags = VAR_6;

 FUNC_3(VAR_4, FUNC_0(0), VAR_5->ghash);
 return FUNC_2(VAR_4, VAR_3);
}
