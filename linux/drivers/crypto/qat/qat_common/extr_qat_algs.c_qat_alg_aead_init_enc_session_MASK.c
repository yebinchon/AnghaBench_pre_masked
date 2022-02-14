
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int val; } ;
struct TYPE_12__ {int key; TYPE_2__ cipher_config; } ;
struct icp_qat_hw_cipher_algo_blk {TYPE_3__ aes; } ;
struct qat_enc {struct icp_qat_hw_cipher_algo_blk cipher; } ;
struct qat_alg_cd {int dummy; } ;
struct icp_qat_fw_comn_req_hdr {int serv_specif_flags; int service_cmd_id; } ;
struct TYPE_17__ {int content_desc_params_sz; int content_desc_addr; } ;
struct TYPE_18__ {TYPE_8__ s; } ;
struct icp_qat_fw_comn_req_hdr_cd_pars {TYPE_9__ u; } ;
struct icp_qat_fw_la_bulk_req {int cd_ctrl; struct icp_qat_fw_comn_req_hdr comn_hdr; struct icp_qat_fw_comn_req_hdr_cd_pars cd_pars; } ;
struct qat_alg_aead_ctx {int qat_hash_alg; int enc_cd_paddr; int hash_tfm; struct icp_qat_fw_la_bulk_req enc_fw_req; TYPE_1__* enc_cd; } ;
struct icp_qat_hw_auth_setup {int dummy; } ;
struct TYPE_14__ {int counter; } ;
struct TYPE_13__ {int config; } ;
struct TYPE_15__ {TYPE_5__ auth_counter; TYPE_4__ auth_config; } ;
struct TYPE_16__ {TYPE_6__ inner_setup; } ;
struct icp_qat_hw_auth_algo_blk {TYPE_7__ sha; } ;
struct icp_qat_fw_cipher_cd_ctrl_hdr {int cipher_key_sz; int cipher_state_sz; int hash_cfg_offset; unsigned int inner_res_sz; unsigned int final_sz; int inner_state1_sz; int inner_state2_sz; int inner_state2_offset; int hash_flags; scalar_t__ cipher_cfg_offset; } ;
struct icp_qat_fw_auth_cd_ctrl_hdr {int cipher_key_sz; int cipher_state_sz; int hash_cfg_offset; unsigned int inner_res_sz; unsigned int final_sz; int inner_state1_sz; int inner_state2_sz; int inner_state2_offset; int hash_flags; scalar_t__ cipher_cfg_offset; } ;
struct crypto_authenc_keys {int enckeylen; int authkeylen; int authkey; int enckey; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_10__ {struct qat_enc qat_enc_cd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct icp_qat_fw_cipher_cd_ctrl_hdr*,int ) ;
 int FUNC_1 (struct icp_qat_fw_cipher_cd_ctrl_hdr*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;



 int FUNC_5 (int ,int,unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ) ;
 unsigned int FUNC_8 (struct crypto_aead*) ;
 struct qat_alg_aead_ctx* FUNC_9 (struct crypto_aead*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int) ;
 scalar_t__ FUNC_12 (struct icp_qat_hw_auth_algo_blk*,struct qat_alg_aead_ctx*,int ,int ) ;
 int FUNC_13 (struct icp_qat_fw_comn_req_hdr*,int) ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static int FUNC_15(struct crypto_aead *VAR_17,
      int VAR_18,
      struct crypto_authenc_keys *VAR_19,
      int VAR_20)
{
 struct qat_alg_aead_ctx *VAR_21 = FUNC_9(VAR_17);
 unsigned int VAR_22 = FUNC_8(VAR_17);
 struct qat_enc *VAR_23 = &VAR_21->enc_cd->qat_enc_cd;
 struct icp_qat_hw_cipher_algo_blk *VAR_24 = &VAR_23->cipher;
 struct icp_qat_hw_auth_algo_blk *VAR_25 =
  (struct icp_qat_hw_auth_algo_blk *)((char *)VAR_23 +
  sizeof(struct icp_qat_hw_auth_setup) + VAR_19->enckeylen);
 struct icp_qat_fw_la_bulk_req *VAR_26 = &VAR_21->enc_fw_req;
 struct icp_qat_fw_comn_req_hdr_cd_pars *VAR_27 = &VAR_26->cd_pars;
 struct icp_qat_fw_comn_req_hdr *VAR_28 = &VAR_26->comn_hdr;
 void *VAR_29 = &VAR_26->cd_ctrl;
 struct icp_qat_fw_cipher_cd_ctrl_hdr *VAR_30 = VAR_29;
 struct icp_qat_fw_auth_cd_ctrl_hdr *VAR_31 = VAR_29;


 VAR_24->aes.cipher_config.val = FUNC_6(VAR_18, VAR_20);
 FUNC_11(VAR_24->aes.key, VAR_19->enckey, VAR_19->enckeylen);
 VAR_25->sha.inner_setup.auth_config.config =
  FUNC_5(VAR_10,
          VAR_21->qat_hash_alg, VAR_22);
 VAR_25->sha.inner_setup.auth_counter.counter =
  FUNC_7(FUNC_10(VAR_21->hash_tfm));

 if (FUNC_12(VAR_25, VAR_21, VAR_19->authkey, VAR_19->authkeylen))
  return -VAR_1;


 FUNC_13(VAR_28, 1);
 VAR_28->service_cmd_id = VAR_3;
 FUNC_3(VAR_28->serv_specif_flags,
        VAR_4);
 FUNC_4(VAR_28->serv_specif_flags,
       VAR_6);
 FUNC_2(VAR_28->serv_specif_flags,
       VAR_5);
 VAR_27->u.s.content_desc_addr = VAR_21->enc_cd_paddr;
 VAR_27->u.s.content_desc_params_sz = sizeof(struct qat_alg_cd) >> 3;


 VAR_30->cipher_key_sz = VAR_19->enckeylen >> 3;
 VAR_30->cipher_state_sz = VAR_0 >> 3;
 VAR_30->cipher_cfg_offset = 0;
 FUNC_0(VAR_30, VAR_8);
 FUNC_1(VAR_30, VAR_7);

 VAR_31->hash_cfg_offset = ((char *)VAR_25 - (char *)VAR_24) >> 3;
 VAR_31->hash_flags = VAR_2;
 VAR_31->inner_res_sz = VAR_22;
 VAR_31->final_sz = VAR_22;

 switch (VAR_21->qat_hash_alg) {
 case 130:
  VAR_31->inner_state1_sz =
   FUNC_14(VAR_11, 8);
  VAR_31->inner_state2_sz =
   FUNC_14(VAR_12, 8);
  break;
 case 129:
  VAR_31->inner_state1_sz = VAR_13;
  VAR_31->inner_state2_sz = VAR_14;
  break;
 case 128:
  VAR_31->inner_state1_sz = VAR_15;
  VAR_31->inner_state2_sz = VAR_16;
  break;
 default:
  break;
 }
 VAR_31->inner_state2_offset = VAR_31->hash_cfg_offset +
   ((sizeof(struct icp_qat_hw_auth_setup) +
    FUNC_14(VAR_31->inner_state1_sz, 8)) >> 3);
 FUNC_0(VAR_31, VAR_7);
 FUNC_1(VAR_31, VAR_9);
 return 0;
}
