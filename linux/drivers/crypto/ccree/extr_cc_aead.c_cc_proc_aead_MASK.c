
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_crypto_req {void* user_arg; void* user_cb; } ;
struct cc_aead_ctx {scalar_t__ cipher_mode; scalar_t__ ctr_nonce; int auth_mode; int drvdata; int authsize; } ;
struct aead_request {scalar_t__ iv; int base; int cryptlen; TYPE_2__* dst; TYPE_2__* src; } ;
struct TYPE_3__ {int op_type; } ;
struct aead_req_ctx {scalar_t__ cipher_mode; scalar_t__ ctr_iv; scalar_t__ hw_iv_size; int ccm_hdr_size; int req_authsize; TYPE_1__ gen_ctx; int assoclen; } ;
typedef enum drv_crypto_direction { ____Placeholder_drv_crypto_direction } drv_crypto_direction ;
typedef int __be32 ;
struct TYPE_4__ {int offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (struct aead_request*,struct cc_hw_desc*,int*) ;
 int FUNC_2 (struct aead_request*,struct cc_hw_desc*,int*) ;
 int FUNC_3 (struct aead_request*,struct cc_hw_desc*,int*) ;
 int FUNC_4 (int ,struct aead_request*) ;
 int FUNC_5 (struct aead_request*,struct cc_hw_desc*,int*) ;
 int FUNC_6 (int ,struct cc_crypto_req*,struct cc_hw_desc*,int,int *) ;
 int FUNC_7 (struct device*,struct aead_request*) ;
 int FUNC_8 (struct aead_request*,struct cc_hw_desc*,int*) ;
 int VAR_15 ;
 int FUNC_9 (struct aead_request*) ;
 int FUNC_10 (struct aead_request*) ;
 int FUNC_11 (int) ;
 struct cc_aead_ctx* FUNC_12 (struct crypto_aead*) ;
 scalar_t__ FUNC_13 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_14 (struct aead_request*) ;
 int FUNC_15 (struct crypto_aead*,int ) ;
 int FUNC_16 (struct device*,char*,...) ;
 int FUNC_17 (struct device*,char*,...) ;
 struct device* FUNC_18 (int ) ;
 int FUNC_19 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_20 (TYPE_2__*) ;
 scalar_t__ FUNC_21 (struct cc_aead_ctx*,int,struct aead_request*) ;

__attribute__((used)) static int FUNC_22(struct aead_request *VAR_16,
   enum drv_crypto_direction VAR_17)
{
 int VAR_18 = 0;
 int VAR_19 = 0;
 struct cc_hw_desc VAR_20[VAR_13];
 struct crypto_aead *VAR_21 = FUNC_14(VAR_16);
 struct cc_aead_ctx *VAR_22 = FUNC_12(VAR_21);
 struct aead_req_ctx *VAR_23 = FUNC_0(VAR_16);
 struct device *VAR_24 = FUNC_18(VAR_22->drvdata);
 struct cc_crypto_req VAR_25 = {};

 FUNC_16(VAR_24, "%s context=%p req=%p iv=%p src=%p src_ofs=%d dst=%p dst_ofs=%d cryptolen=%d\n",
  ((VAR_17 == VAR_8) ? "Enc" : "Dec"),
  VAR_22, VAR_16, VAR_16->iv, FUNC_20(VAR_16->src), VAR_16->src->offset,
  FUNC_20(VAR_16->dst), VAR_16->dst->offset, VAR_16->cryptlen);




 if (FUNC_21(VAR_22, VAR_17, VAR_16)) {
  FUNC_17(VAR_24, "Unsupported crypt/assoc len %d/%d.\n",
   VAR_16->cryptlen, VAR_23->assoclen);
  FUNC_15(VAR_21, VAR_1);
  return -VAR_11;
 }


 VAR_25.user_cb = (void *)VAR_14;
 VAR_25.user_arg = (void *)VAR_16;


 VAR_23->gen_ctx.op_type = VAR_17;
 VAR_23->req_authsize = VAR_22->authsize;
 VAR_23->cipher_mode = VAR_22->cipher_mode;



 if (VAR_22->cipher_mode == VAR_6) {



  FUNC_19(VAR_23->ctr_iv, VAR_22->ctr_nonce,
         VAR_4);
  FUNC_19(VAR_23->ctr_iv + VAR_4, VAR_16->iv,
         VAR_3);

  *(__be32 *)(VAR_23->ctr_iv + VAR_4 +
       VAR_3) = FUNC_11(1);


  VAR_16->iv = VAR_23->ctr_iv;
  VAR_23->hw_iv_size = VAR_2;
 } else if ((VAR_22->cipher_mode == VAR_5) ||
     (VAR_22->cipher_mode == VAR_7)) {
  VAR_23->hw_iv_size = VAR_0;
  if (VAR_23->ctr_iv != VAR_16->iv) {
   FUNC_19(VAR_23->ctr_iv, VAR_16->iv,
          FUNC_13(VAR_21));
   VAR_16->iv = VAR_23->ctr_iv;
  }
 } else {
  VAR_23->hw_iv_size = FUNC_13(VAR_21);
 }

 if (VAR_22->cipher_mode == VAR_5) {
  VAR_18 = FUNC_9(VAR_16);
  if (VAR_18) {
   FUNC_16(VAR_24, "config_ccm_adata() returned with a failure %d!",
    VAR_18);
   goto exit;
  }
 } else {
  VAR_23->ccm_hdr_size = VAR_15;
 }

 if (VAR_22->cipher_mode == VAR_7) {
  VAR_18 = FUNC_10(VAR_16);
  if (VAR_18) {
   FUNC_16(VAR_24, "config_gcm_context() returned with a failure %d!",
    VAR_18);
   goto exit;
  }
 }

 VAR_18 = FUNC_4(VAR_22->drvdata, VAR_16);
 if (VAR_18) {
  FUNC_17(VAR_24, "map_request() failed\n");
  goto exit;
 }




 FUNC_5(VAR_16, VAR_20, &VAR_19);


 switch (VAR_22->auth_mode) {
 case 130:
 case 129:
  FUNC_3(VAR_16, VAR_20, &VAR_19);
  break;
 case 128:
  FUNC_8(VAR_16, VAR_20, &VAR_19);
  break;
 case 131:
  if (VAR_22->cipher_mode == VAR_5)
   FUNC_1(VAR_16, VAR_20, &VAR_19);
  if (VAR_22->cipher_mode == VAR_7)
   FUNC_2(VAR_16, VAR_20, &VAR_19);
  break;
 default:
  FUNC_17(VAR_24, "Unsupported authenc (%d)\n", VAR_22->auth_mode);
  FUNC_7(VAR_24, VAR_16);
  VAR_18 = -VAR_12;
  goto exit;
 }



 VAR_18 = FUNC_6(VAR_22->drvdata, &VAR_25, VAR_20, VAR_19, &VAR_16->base);

 if (VAR_18 != -VAR_10 && VAR_18 != -VAR_9) {
  FUNC_17(VAR_24, "send_request() failed (rc=%d)\n", VAR_18);
  FUNC_7(VAR_24, VAR_16);
 }

exit:
 return VAR_18;
}
