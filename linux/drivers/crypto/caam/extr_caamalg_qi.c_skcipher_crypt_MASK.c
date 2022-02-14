
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {int cryptlen; } ;
struct skcipher_edesc {int drv_req; } ;
struct crypto_skcipher {int dummy; } ;
struct caam_ctx {int qidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct skcipher_edesc*) ;
 int FUNC_1 (struct skcipher_edesc*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 struct caam_ctx* FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (struct skcipher_edesc*) ;
 struct skcipher_edesc* FUNC_6 (struct skcipher_request*,int) ;
 int FUNC_7 (int ,struct skcipher_edesc*,struct skcipher_request*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static inline int FUNC_9(struct skcipher_request *VAR_3, bool VAR_4)
{
 struct skcipher_edesc *VAR_5;
 struct crypto_skcipher *VAR_6 = FUNC_4(VAR_3);
 struct caam_ctx *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;

 if (!VAR_3->cryptlen)
  return 0;

 if (FUNC_8(VAR_2))
  return -VAR_0;


 VAR_5 = FUNC_6(VAR_3, VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_8 = FUNC_2(VAR_7->qidev, &VAR_5->drv_req);
 if (!VAR_8) {
  VAR_8 = -VAR_1;
 } else {
  FUNC_7(VAR_7->qidev, VAR_5, VAR_3);
  FUNC_5(VAR_5);
 }

 return VAR_8;
}
