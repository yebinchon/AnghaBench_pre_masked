
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct qat_alg_aead_ctx {int dec_fw_req; int enc_fw_req; int * dec_cd; int * enc_cd; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 struct qat_alg_aead_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct crypto_aead*,int const*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct crypto_aead *VAR_1, const uint8_t *VAR_2,
         unsigned int VAR_3)
{
 struct qat_alg_aead_ctx *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_4->enc_cd, 0, sizeof(*VAR_4->enc_cd));
 FUNC_1(VAR_4->dec_cd, 0, sizeof(*VAR_4->dec_cd));
 FUNC_1(&VAR_4->enc_fw_req, 0, sizeof(VAR_4->enc_fw_req));
 FUNC_1(&VAR_4->dec_fw_req, 0, sizeof(VAR_4->dec_fw_req));

 return FUNC_2(VAR_1, VAR_2, VAR_3,
       VAR_0);
}
