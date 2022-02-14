
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {int drvdata; int authsize; int enc_keylen; } ;
struct aead_request {int dummy; } ;
struct TYPE_2__ {scalar_t__ op_type; } ;
struct aead_req_ctx {int mac_buf_dma_addr; int gcm_iv_inc1_dma_addr; int gcm_block_len_dma_addr; int icv_dma_addr; TYPE_1__ gen_ctx; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct cc_hw_desc*) ;
 int FUNC_4 (struct cc_hw_desc*) ;
 int FUNC_5 (struct cc_hw_desc*,int ) ;
 int FUNC_6 (struct cc_hw_desc*,int ) ;
 int FUNC_7 (struct cc_hw_desc*,int ,int) ;
 int FUNC_8 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_9 (struct cc_hw_desc*,int ,int ,int ,int) ;
 int FUNC_10 (struct cc_hw_desc*,int ,int ,int) ;
 int FUNC_11 (struct cc_hw_desc*,int ) ;
 int FUNC_12 (struct cc_hw_desc*,int ) ;
 int FUNC_13 (int ,struct cc_hw_desc*) ;
 int FUNC_14 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_15(struct aead_request *VAR_13,
          struct cc_hw_desc VAR_14[],
          unsigned int *VAR_15)
{
 struct crypto_aead *VAR_16 = FUNC_2(VAR_13);
 struct cc_aead_ctx *VAR_17 = FUNC_1(VAR_16);
 struct aead_req_ctx *VAR_18 = FUNC_0(VAR_13);
 dma_addr_t VAR_19;
 unsigned int VAR_20 = *VAR_15;

 if (VAR_18->gen_ctx.op_type == VAR_5) {
  VAR_19 = VAR_18->mac_buf_dma_addr;
 } else {
  VAR_19 = VAR_18->icv_dma_addr;
 }


 FUNC_3(&VAR_14[VAR_20]);
 FUNC_8(&VAR_14[VAR_20], VAR_3, VAR_18->gcm_block_len_dma_addr,
       VAR_0, VAR_8);
 FUNC_11(&VAR_14[VAR_20], VAR_2);
 VAR_20++;


 FUNC_3(&VAR_14[VAR_20]);
 FUNC_6(&VAR_14[VAR_20], VAR_7);
 FUNC_7(&VAR_14[VAR_20], 0, 0xfffff0);
 FUNC_9(&VAR_14[VAR_20], VAR_18->mac_buf_dma_addr, VAR_0,
        VAR_8, 0);
 FUNC_14(&VAR_14[VAR_20], VAR_10);
 FUNC_11(&VAR_14[VAR_20], VAR_12);
 FUNC_4(&VAR_14[VAR_20]);

 VAR_20++;


 FUNC_3(&VAR_14[VAR_20]);
 FUNC_6(&VAR_14[VAR_20], VAR_4);
 FUNC_12(&VAR_14[VAR_20], VAR_17->enc_keylen);
 FUNC_8(&VAR_14[VAR_20], VAR_3, VAR_18->gcm_iv_inc1_dma_addr,
       VAR_0, VAR_8);
 FUNC_5(&VAR_14[VAR_20], VAR_6);
 FUNC_14(&VAR_14[VAR_20], VAR_9);
 FUNC_11(&VAR_14[VAR_20], VAR_11);
 VAR_20++;


 FUNC_3(&VAR_14[VAR_20]);
 FUNC_7(&VAR_14[VAR_20], 0, 0xfffff0);
 FUNC_10(&VAR_14[VAR_20], 0, 0, 1);
 VAR_20++;


 FUNC_3(&VAR_14[VAR_20]);
 FUNC_6(&VAR_14[VAR_20], VAR_4);
 FUNC_8(&VAR_14[VAR_20], VAR_3, VAR_18->mac_buf_dma_addr,
       VAR_0, VAR_8);
 FUNC_9(&VAR_14[VAR_20], VAR_19, VAR_17->authsize, VAR_8, 1);
 FUNC_13(VAR_17->drvdata, &VAR_14[VAR_20]);
 FUNC_11(&VAR_14[VAR_20], VAR_1);
 VAR_20++;

 *VAR_15 = VAR_20;
}
