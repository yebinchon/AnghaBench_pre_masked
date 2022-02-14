
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


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct TYPE_14__ {scalar_t__ enc_cipher; int iv_source; int aes_key; } ;
struct TYPE_15__ {int flags; TYPE_5__ e; } ;
struct TYPE_16__ {TYPE_6__ enc_ctrl; int encr_key; } ;
struct fc_context {TYPE_7__ enc; } ;
struct TYPE_12__ {int major; int minor; } ;
struct TYPE_13__ {TYPE_3__ s; } ;
struct TYPE_18__ {int dlen; scalar_t__ param2; int param1; TYPE_4__ opcode; } ;
struct TYPE_10__ {int se_req; int dma_mode; scalar_t__ grp; } ;
struct TYPE_11__ {TYPE_1__ s; } ;
struct cpt_request_info {TYPE_9__ req; TYPE_8__* in; TYPE_2__ ctrl; } ;
struct cvm_req_ctx {int control_word; struct cpt_request_info cpt_req; struct fc_context fctx; } ;
struct cvm_enc_ctx {scalar_t__ cipher_type; int key_len; int enc_key; int key_type; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int nbytes; } ;
struct TYPE_17__ {int size; int * vptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cvm_req_ctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (int) ;
 struct cvm_enc_ctx* FUNC_3 (struct crypto_ablkcipher*) ;
 size_t FUNC_4 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_5 (struct ablkcipher_request*) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static inline u32 FUNC_7(struct ablkcipher_request *VAR_6, u32 VAR_7,
     u32 *VAR_8)
{
 struct crypto_ablkcipher *VAR_9 = FUNC_5(VAR_6);
 struct cvm_enc_ctx *VAR_10 = FUNC_3(VAR_9);
 struct cvm_req_ctx *VAR_11 = FUNC_1(VAR_6);
 struct fc_context *VAR_12 = &VAR_11->fctx;
 u64 *VAR_13 = &VAR_11->control_word;
 u32 VAR_14 = FUNC_4(VAR_9);
 struct cpt_request_info *VAR_15 = &VAR_11->cpt_req;
 u64 *VAR_16 = ((void*)0);

 VAR_15->ctrl.s.grp = 0;
 VAR_15->ctrl.s.dma_mode = VAR_2;
 VAR_15->ctrl.s.se_req = VAR_5;

 VAR_15->req.opcode.s.major = VAR_4 |
     FUNC_0(VAR_2);
 if (VAR_7)
  VAR_15->req.opcode.s.minor = 2;
 else
  VAR_15->req.opcode.s.minor = 3;

 VAR_15->req.param1 = VAR_6->nbytes;
 VAR_15->req.param2 = 0;

 VAR_12->enc.enc_ctrl.e.enc_cipher = VAR_10->cipher_type;
 VAR_12->enc.enc_ctrl.e.aes_key = VAR_10->key_type;
 VAR_12->enc.enc_ctrl.e.iv_source = VAR_3;

 if (VAR_10->cipher_type == VAR_0)
  FUNC_6(VAR_12->enc.encr_key, VAR_10->enc_key, VAR_10->key_len * 2);
 else
  FUNC_6(VAR_12->enc.encr_key, VAR_10->enc_key, VAR_10->key_len);
 VAR_16 = (u64 *)&VAR_12->enc.enc_ctrl.flags;
 *VAR_16 = FUNC_2(*VAR_16);

 *VAR_13 = FUNC_2(((u64)(VAR_14) << 16));



 VAR_15->in[*VAR_8].vptr = (u8 *)VAR_13;
 VAR_15->in[*VAR_8].size = VAR_1;
 VAR_15->req.dlen += VAR_1;
 ++(*VAR_8);

 VAR_15->in[*VAR_8].vptr = (u8 *)VAR_12;
 VAR_15->in[*VAR_8].size = sizeof(struct fc_context);
 VAR_15->req.dlen += sizeof(struct fc_context);

 ++(*VAR_8);

 return 0;
}
