
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_hw {int spu_wordalign_padlen; int spu_ccm_update_iv; int spu_xts_tweak_in_payload; int spu_status_process; int spu_rx_status_len; int spu_tx_status_len; int spu_request_pad; int spu_cipher_req_finish; int spu_cipher_req_init; int spu_create_request; int spu_digest_size; int spu_hash_type; int spu_aead_ivlen; int spu_assoc_resp_len; int spu_gcm_ccm_pad_len; int spu_hash_pad_len; int spu_response_hdr_len; int spu_payload_length; int spu_ctx_max_payload; int spu_dump_msg_hdr; } ;
struct device {int dummy; } ;
typedef enum spu_spu_type { ____Placeholder_spu_spu_type } spu_spu_type ;
typedef enum spu_spu_subtype { ____Placeholder_spu_spu_subtype } spu_spu_subtype ;
struct TYPE_2__ {struct spu_hw spu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;

__attribute__((used)) static void FUNC_1(struct device *VAR_44,
       enum spu_spu_type VAR_45,
       enum spu_spu_subtype VAR_46)
{
 struct spu_hw *VAR_47 = &VAR_2.spu;

 if (VAR_45 == VAR_1) {
  FUNC_0(VAR_44, "Registering SPUM functions");
  VAR_47->spu_dump_msg_hdr = VAR_30;
  VAR_47->spu_payload_length = VAR_36;
  VAR_47->spu_response_hdr_len = VAR_38;
  VAR_47->spu_hash_pad_len = VAR_32;
  VAR_47->spu_gcm_ccm_pad_len = VAR_31;
  VAR_47->spu_assoc_resp_len = VAR_24;
  VAR_47->spu_aead_ivlen = VAR_23;
  VAR_47->spu_hash_type = VAR_33;
  VAR_47->spu_digest_size = VAR_29;
  VAR_47->spu_create_request = VAR_28;
  VAR_47->spu_cipher_req_init = VAR_27;
  VAR_47->spu_cipher_req_finish = VAR_26;
  VAR_47->spu_request_pad = VAR_37;
  VAR_47->spu_tx_status_len = VAR_41;
  VAR_47->spu_rx_status_len = VAR_39;
  VAR_47->spu_status_process = VAR_40;
  VAR_47->spu_xts_tweak_in_payload = VAR_43;
  VAR_47->spu_ccm_update_iv = VAR_25;
  VAR_47->spu_wordalign_padlen = VAR_42;
  if (VAR_46 == VAR_0)
   VAR_47->spu_ctx_max_payload = VAR_34;
  else
   VAR_47->spu_ctx_max_payload = VAR_35;
 } else {
  FUNC_0(VAR_44, "Registering SPU2 functions");
  VAR_47->spu_dump_msg_hdr = VAR_11;
  VAR_47->spu_ctx_max_payload = VAR_9;
  VAR_47->spu_payload_length = VAR_15;
  VAR_47->spu_response_hdr_len = VAR_17;
  VAR_47->spu_hash_pad_len = VAR_13;
  VAR_47->spu_gcm_ccm_pad_len = VAR_12;
  VAR_47->spu_assoc_resp_len = VAR_4;
  VAR_47->spu_aead_ivlen = VAR_3;
  VAR_47->spu_hash_type = VAR_14;
  VAR_47->spu_digest_size = VAR_10;
  VAR_47->spu_create_request = VAR_8;
  VAR_47->spu_cipher_req_init = VAR_7;
  VAR_47->spu_cipher_req_finish = VAR_6;
  VAR_47->spu_request_pad = VAR_16;
  VAR_47->spu_tx_status_len = VAR_20;
  VAR_47->spu_rx_status_len = VAR_18;
  VAR_47->spu_status_process = VAR_19;
  VAR_47->spu_xts_tweak_in_payload = VAR_22;
  VAR_47->spu_ccm_update_iv = VAR_5;
  VAR_47->spu_wordalign_padlen = VAR_21;
 }
}
