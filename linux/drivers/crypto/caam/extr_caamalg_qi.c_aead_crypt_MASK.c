
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct caam_ctx {int qidev; } ;
struct aead_request {int dummy; } ;
struct aead_edesc {int drv_req; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct aead_edesc*) ;
 int FUNC_1 (struct aead_edesc*) ;
 struct aead_edesc* FUNC_2 (struct aead_request*,int) ;
 int FUNC_3 (int ,struct aead_edesc*,struct aead_request*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 struct caam_ctx* FUNC_5 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_6 (struct aead_request*) ;
 int FUNC_7 (struct aead_edesc*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static inline int FUNC_9(struct aead_request *VAR_3, bool VAR_4)
{
 struct aead_edesc *VAR_5;
 struct crypto_aead *VAR_6 = FUNC_6(VAR_3);
 struct caam_ctx *VAR_7 = FUNC_5(VAR_6);
 int VAR_8;

 if (FUNC_8(VAR_2))
  return -VAR_0;


 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);


 VAR_8 = FUNC_4(VAR_7->qidev, &VAR_5->drv_req);
 if (!VAR_8) {
  VAR_8 = -VAR_1;
 } else {
  FUNC_3(VAR_7->qidev, VAR_5, VAR_3);
  FUNC_7(VAR_5);
 }

 return VAR_8;
}
