
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int content_desc_addr; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct icp_qat_fw_comn_req_hdr_cd_pars {TYPE_2__ u; } ;
struct icp_qat_fw_la_bulk_req {struct icp_qat_fw_comn_req_hdr_cd_pars cd_pars; } ;
struct qat_alg_ablkcipher_ctx {int dec_cd_paddr; struct icp_qat_fw_la_bulk_req dec_fw_req; struct icp_qat_hw_cipher_algo_blk* dec_cd; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_8__ {TYPE_3__ cipher_config; } ;
struct icp_qat_hw_cipher_algo_blk {TYPE_4__ aes; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct qat_alg_ablkcipher_ctx*,struct icp_qat_fw_la_bulk_req*,struct icp_qat_hw_cipher_algo_blk*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct qat_alg_ablkcipher_ctx *VAR_1,
     int VAR_2, const uint8_t *VAR_3,
     unsigned int VAR_4, int VAR_5)
{
 struct icp_qat_hw_cipher_algo_blk *VAR_6 = VAR_1->dec_cd;
 struct icp_qat_fw_la_bulk_req *VAR_7 = &VAR_1->dec_fw_req;
 struct icp_qat_fw_comn_req_hdr_cd_pars *VAR_8 = &VAR_7->cd_pars;

 FUNC_2(VAR_1, VAR_7, VAR_6, VAR_3, VAR_4);
 VAR_8->u.s.content_desc_addr = VAR_1->dec_cd_paddr;

 if (VAR_5 != VAR_0)
  VAR_6->aes.cipher_config.val =
     FUNC_0(VAR_2, VAR_5);
 else
  VAR_6->aes.cipher_config.val =
     FUNC_1(VAR_2, VAR_5);
}
