
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {scalar_t__ flow_mode; scalar_t__ cipher_mode; int enc_keylen; int enckey_dma_addr; } ;
struct aead_request {int dummy; } ;
struct TYPE_2__ {int op_type; int iv_dma_addr; } ;
struct aead_req_ctx {unsigned int hw_iv_size; TYPE_1__ gen_ctx; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct cc_hw_desc*) ;
 int FUNC_4 (struct cc_hw_desc*,int) ;
 int FUNC_5 (struct cc_hw_desc*,scalar_t__) ;
 int FUNC_6 (struct cc_hw_desc*,int ,int ,unsigned int,int ) ;
 int FUNC_7 (struct cc_hw_desc*,scalar_t__) ;
 int FUNC_8 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_9 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_10 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_11(struct aead_request *VAR_8,
          struct cc_hw_desc VAR_9[],
          unsigned int *VAR_10)
{
 struct crypto_aead *VAR_11 = FUNC_2(VAR_8);
 struct cc_aead_ctx *VAR_12 = FUNC_1(VAR_11);
 struct aead_req_ctx *VAR_13 = FUNC_0(VAR_8);
 unsigned int VAR_14 = VAR_13->hw_iv_size;
 unsigned int VAR_15 = *VAR_10;
 int VAR_16 = VAR_13->gen_ctx.op_type;


 FUNC_3(&VAR_9[VAR_15]);
 FUNC_4(&VAR_9[VAR_15], VAR_16);
 FUNC_7(&VAR_9[VAR_15], VAR_12->flow_mode);
 FUNC_6(&VAR_9[VAR_15], VAR_1, VAR_13->gen_ctx.iv_dma_addr,
       VAR_14, VAR_3);
 if (VAR_12->cipher_mode == VAR_2)
  FUNC_10(&VAR_9[VAR_15], VAR_6);
 else
  FUNC_10(&VAR_9[VAR_15], VAR_5);
 FUNC_5(&VAR_9[VAR_15], VAR_12->cipher_mode);
 VAR_15++;


 FUNC_3(&VAR_9[VAR_15]);
 FUNC_4(&VAR_9[VAR_15], VAR_16);
 FUNC_10(&VAR_9[VAR_15], VAR_4);
 FUNC_7(&VAR_9[VAR_15], VAR_12->flow_mode);
 if (VAR_12->flow_mode == VAR_7) {
  FUNC_6(&VAR_9[VAR_15], VAR_1, VAR_12->enckey_dma_addr,
        ((VAR_12->enc_keylen == 24) ? VAR_0 :
         VAR_12->enc_keylen), VAR_3);
  FUNC_8(&VAR_9[VAR_15], VAR_12->enc_keylen);
 } else {
  FUNC_6(&VAR_9[VAR_15], VAR_1, VAR_12->enckey_dma_addr,
        VAR_12->enc_keylen, VAR_3);
  FUNC_9(&VAR_9[VAR_15], VAR_12->enc_keylen);
 }
 FUNC_5(&VAR_9[VAR_15], VAR_12->cipher_mode);
 VAR_15++;

 *VAR_10 = VAR_15;
}
