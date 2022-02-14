
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct qat_alg_ablkcipher_ctx {int dummy; } ;
struct TYPE_4__ {int key; } ;
struct icp_qat_hw_cipher_algo_blk {TYPE_1__ aes; } ;
struct icp_qat_fw_comn_req_hdr {int service_cmd_id; } ;
struct TYPE_5__ {int content_desc_params_sz; } ;
struct TYPE_6__ {TYPE_2__ s; } ;
struct icp_qat_fw_comn_req_hdr_cd_pars {TYPE_3__ u; } ;
struct icp_qat_fw_la_bulk_req {int cd_ctrl; struct icp_qat_fw_comn_req_hdr comn_hdr; struct icp_qat_fw_comn_req_hdr_cd_pars cd_pars; } ;
struct icp_qat_fw_cipher_cd_ctrl_hdr {unsigned int cipher_key_sz; int cipher_state_sz; scalar_t__ cipher_cfg_offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct icp_qat_fw_cipher_cd_ctrl_hdr*,int ) ;
 int FUNC_1 (struct icp_qat_fw_cipher_cd_ctrl_hdr*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (struct icp_qat_fw_comn_req_hdr*,int ) ;

__attribute__((used)) static void FUNC_4(struct qat_alg_ablkcipher_ctx *VAR_4,
     struct icp_qat_fw_la_bulk_req *VAR_5,
     struct icp_qat_hw_cipher_algo_blk *VAR_6,
     const uint8_t *VAR_7, unsigned int VAR_8)
{
 struct icp_qat_fw_comn_req_hdr_cd_pars *VAR_9 = &VAR_5->cd_pars;
 struct icp_qat_fw_comn_req_hdr *VAR_10 = &VAR_5->comn_hdr;
 struct icp_qat_fw_cipher_cd_ctrl_hdr *VAR_11 = (void *)&VAR_5->cd_ctrl;

 FUNC_2(VAR_6->aes.key, VAR_7, VAR_8);
 FUNC_3(VAR_10, 0);
 VAR_10->service_cmd_id = VAR_1;
 VAR_9->u.s.content_desc_params_sz =
    sizeof(struct icp_qat_hw_cipher_algo_blk) >> 3;

 VAR_11->cipher_key_sz = VAR_8 >> 3;
 VAR_11->cipher_state_sz = VAR_0 >> 3;
 VAR_11->cipher_cfg_offset = 0;
 FUNC_0(VAR_11, VAR_2);
 FUNC_1(VAR_11, VAR_3);
}
