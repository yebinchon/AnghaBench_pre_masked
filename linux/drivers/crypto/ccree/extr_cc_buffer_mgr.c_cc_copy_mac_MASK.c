
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int src; scalar_t__ cryptlen; } ;
struct aead_req_ctx {scalar_t__ req_authsize; int backup_mac; scalar_t__ is_gcm4543; scalar_t__ assoclen; } ;
typedef enum cc_sg_cpy_direct { ____Placeholder_cc_sg_cpy_direct } cc_sg_cpy_direct ;


 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct device*,int ,int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct aead_request *VAR_1,
   enum cc_sg_cpy_direct VAR_2)
{
 struct aead_req_ctx *VAR_3 = FUNC_0(VAR_1);
 struct crypto_aead *VAR_4 = FUNC_3(VAR_1);
 u32 VAR_5 = VAR_3->assoclen + VAR_1->cryptlen;

 if (VAR_3->is_gcm4543)
  VAR_5 += FUNC_2(VAR_4);

 FUNC_1(VAR_0, VAR_3->backup_mac, VAR_1->src,
      (VAR_5 - VAR_3->req_authsize), VAR_5, VAR_2);
}
