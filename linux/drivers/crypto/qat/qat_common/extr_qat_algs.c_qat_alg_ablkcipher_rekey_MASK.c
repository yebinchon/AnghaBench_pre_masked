
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qat_alg_ablkcipher_ctx {int dec_fw_req; int enc_fw_req; int * dec_cd; int * enc_cd; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct qat_alg_ablkcipher_ctx*,int const*,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct qat_alg_ablkcipher_ctx *VAR_0,
        const u8 *VAR_1, unsigned int VAR_2,
        int VAR_3)
{
 FUNC_0(VAR_0->enc_cd, 0, sizeof(*VAR_0->enc_cd));
 FUNC_0(VAR_0->dec_cd, 0, sizeof(*VAR_0->dec_cd));
 FUNC_0(&VAR_0->enc_fw_req, 0, sizeof(VAR_0->enc_fw_req));
 FUNC_0(&VAR_0->dec_fw_req, 0, sizeof(VAR_0->dec_fw_req));

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
