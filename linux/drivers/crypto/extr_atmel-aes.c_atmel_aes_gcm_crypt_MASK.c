
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_aes_reqctx {unsigned long mode; } ;
struct atmel_aes_dev {int dummy; } ;
struct atmel_aes_base_ctx {int is_aead; int block_size; } ;
struct aead_request {int base; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 struct atmel_aes_reqctx* FUNC_0 (struct aead_request*) ;
 struct atmel_aes_dev* FUNC_1 (struct atmel_aes_base_ctx*) ;
 int FUNC_2 (struct atmel_aes_dev*,int *) ;
 struct atmel_aes_base_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct aead_request*) ;

__attribute__((used)) static int FUNC_5(struct aead_request *VAR_3,
          unsigned long VAR_4)
{
 struct atmel_aes_base_ctx *VAR_5;
 struct atmel_aes_reqctx *VAR_6;
 struct atmel_aes_dev *VAR_7;

 VAR_5 = FUNC_3(FUNC_4(VAR_3));
 VAR_5->block_size = VAR_0;
 VAR_5->is_aead = 1;

 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7)
  return -VAR_2;

 VAR_6 = FUNC_0(VAR_3);
 VAR_6->mode = VAR_1 | VAR_4;

 return FUNC_2(VAR_7, &VAR_3->base);
}
