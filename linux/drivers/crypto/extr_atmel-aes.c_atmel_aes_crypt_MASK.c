
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_ablkcipher {int dummy; } ;
struct atmel_aes_reqctx {unsigned long mode; int lastc; } ;
struct atmel_aes_dev {int dummy; } ;
struct atmel_aes_base_ctx {int is_aead; int block_size; } ;
struct ablkcipher_request {int base; scalar_t__ nbytes; int src; int dst; } ;


 int VAR_0 ;




 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct atmel_aes_reqctx* FUNC_0 (struct ablkcipher_request*) ;
 struct atmel_aes_dev* FUNC_1 (struct atmel_aes_base_ctx*) ;
 int FUNC_2 (struct atmel_aes_dev*,int *) ;
 struct atmel_aes_base_ctx* FUNC_3 (struct crypto_ablkcipher*) ;
 int FUNC_4 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_5 (struct ablkcipher_request*) ;
 int FUNC_6 (int ,int ,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_7(struct ablkcipher_request *VAR_8, unsigned long VAR_9)
{
 struct crypto_ablkcipher *VAR_10 = FUNC_5(VAR_8);
 struct atmel_aes_base_ctx *VAR_11 = FUNC_3(VAR_10);
 struct atmel_aes_reqctx *VAR_12;
 struct atmel_aes_dev *VAR_13;

 switch (VAR_9 & VAR_2) {
 case 128:
  VAR_11->block_size = VAR_6;
  break;

 case 131:
  VAR_11->block_size = VAR_3;
  break;

 case 130:
  VAR_11->block_size = VAR_4;
  break;

 case 129:
  VAR_11->block_size = VAR_5;
  break;

 default:
  VAR_11->block_size = VAR_0;
  break;
 }
 VAR_11->is_aead = 0;

 VAR_13 = FUNC_1(VAR_11);
 if (!VAR_13)
  return -VAR_7;

 VAR_12 = FUNC_0(VAR_8);
 VAR_12->mode = VAR_9;

 if (!(VAR_9 & VAR_1) && (VAR_8->src == VAR_8->dst)) {
  int VAR_14 = FUNC_4(VAR_10);

  FUNC_6(VAR_12->lastc, VAR_8->src,
   (VAR_8->nbytes - VAR_14), VAR_14, 0);
 }

 return FUNC_2(VAR_13, &VAR_8->base);
}
