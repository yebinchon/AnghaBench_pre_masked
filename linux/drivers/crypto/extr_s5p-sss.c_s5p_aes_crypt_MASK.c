
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_aes_reqctx {unsigned long mode; } ;
struct s5p_aes_dev {int dev; } ;
struct s5p_aes_ctx {struct s5p_aes_dev* dev; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct s5p_aes_reqctx* FUNC_1 (struct ablkcipher_request*) ;
 struct s5p_aes_ctx* FUNC_2 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct s5p_aes_dev*,struct ablkcipher_request*) ;

__attribute__((used)) static int FUNC_6(struct ablkcipher_request *VAR_4, unsigned long VAR_5)
{
 struct crypto_ablkcipher *VAR_6 = FUNC_3(VAR_4);
 struct s5p_aes_reqctx *VAR_7 = FUNC_1(VAR_4);
 struct s5p_aes_ctx *VAR_8 = FUNC_2(VAR_6);
 struct s5p_aes_dev *VAR_9 = VAR_8->dev;

 if (!VAR_4->nbytes)
  return 0;

 if (!FUNC_0(VAR_4->nbytes, VAR_0) &&
   ((VAR_5 & VAR_3) != VAR_2)) {
  FUNC_4(VAR_9->dev, "request size is not exact amount of AES blocks\n");
  return -VAR_1;
 }

 VAR_7->mode = VAR_5;

 return FUNC_5(VAR_9, VAR_4);
}
