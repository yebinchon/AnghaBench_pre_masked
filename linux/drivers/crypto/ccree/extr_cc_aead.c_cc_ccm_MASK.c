
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {int enc_keylen; int authsize; int drvdata; int enckey_dma_addr; } ;
struct aead_request {int dummy; } ;
struct TYPE_2__ {scalar_t__ op_type; int iv_dma_addr; } ;
struct aead_req_ctx {scalar_t__ assoclen; int ccm_hdr_size; int mac_buf_dma_addr; int ccm_iv0_dma_addr; scalar_t__ cryptlen; int ccm_adata_sg; TYPE_1__ gen_ctx; int icv_dma_addr; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
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
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,unsigned int,struct cc_hw_desc*,unsigned int*) ;
 int FUNC_2 (struct aead_request*,int ,struct cc_hw_desc*,unsigned int*) ;
 struct cc_aead_ctx* FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct cc_hw_desc*) ;
 int FUNC_6 (struct cc_hw_desc*) ;
 int FUNC_7 (struct cc_hw_desc*,int ) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;
 int FUNC_9 (struct cc_hw_desc*,int ,int) ;
 int FUNC_10 (struct cc_hw_desc*,int ,int ,int,int ) ;
 int FUNC_11 (struct cc_hw_desc*,int ,int,int ,int) ;
 int FUNC_12 (struct cc_hw_desc*,int ,int ,int) ;
 int FUNC_13 (struct cc_hw_desc*,int ) ;
 int FUNC_14 (struct cc_hw_desc*,int) ;
 int FUNC_15 (int ,struct cc_hw_desc*) ;
 int FUNC_16 (struct cc_hw_desc*,int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct aead_request *VAR_21, struct cc_hw_desc VAR_22[],
    unsigned int *VAR_23)
{
 struct crypto_aead *VAR_24 = FUNC_4(VAR_21);
 struct cc_aead_ctx *VAR_25 = FUNC_3(VAR_24);
 struct aead_req_ctx *VAR_26 = FUNC_0(VAR_21);
 unsigned int VAR_27 = *VAR_23;
 unsigned int VAR_28;
 dma_addr_t VAR_29;

 if (VAR_26->gen_ctx.op_type == VAR_10) {
  VAR_28 = VAR_2;
  VAR_29 = VAR_26->mac_buf_dma_addr;
 } else {
  VAR_28 = VAR_1;
  VAR_29 = VAR_26->icv_dma_addr;
 }


 FUNC_5(&VAR_22[VAR_27]);
 FUNC_8(&VAR_22[VAR_27], VAR_9);
 FUNC_10(&VAR_22[VAR_27], VAR_7, VAR_25->enckey_dma_addr,
       ((VAR_25->enc_keylen == 24) ? VAR_3 :
        VAR_25->enc_keylen), VAR_13);
 FUNC_14(&VAR_22[VAR_27], VAR_25->enc_keylen);
 FUNC_16(&VAR_22[VAR_27], VAR_14);
 FUNC_7(&VAR_22[VAR_27], VAR_4);
 FUNC_13(&VAR_22[VAR_27], VAR_18);
 VAR_27++;


 FUNC_5(&VAR_22[VAR_27]);
 FUNC_8(&VAR_22[VAR_27], VAR_9);
 FUNC_14(&VAR_22[VAR_27], VAR_25->enc_keylen);
 FUNC_10(&VAR_22[VAR_27], VAR_7,
       VAR_26->gen_ctx.iv_dma_addr, VAR_0, VAR_13);
 FUNC_7(&VAR_22[VAR_27], VAR_4);
 FUNC_16(&VAR_22[VAR_27], VAR_16);
 FUNC_13(&VAR_22[VAR_27], VAR_18);
 VAR_27++;


 FUNC_5(&VAR_22[VAR_27]);
 FUNC_8(&VAR_22[VAR_27], VAR_8);
 FUNC_10(&VAR_22[VAR_27], VAR_7, VAR_25->enckey_dma_addr,
       ((VAR_25->enc_keylen == 24) ? VAR_3 :
        VAR_25->enc_keylen), VAR_13);
 FUNC_14(&VAR_22[VAR_27], VAR_25->enc_keylen);
 FUNC_16(&VAR_22[VAR_27], VAR_14);
 FUNC_7(&VAR_22[VAR_27], VAR_4);
 FUNC_13(&VAR_22[VAR_27], VAR_19);
 FUNC_6(&VAR_22[VAR_27]);
 VAR_27++;


 FUNC_5(&VAR_22[VAR_27]);
 FUNC_8(&VAR_22[VAR_27], VAR_8);
 FUNC_14(&VAR_22[VAR_27], VAR_25->enc_keylen);
 FUNC_10(&VAR_22[VAR_27], VAR_7, VAR_26->mac_buf_dma_addr,
       VAR_0, VAR_13);
 FUNC_7(&VAR_22[VAR_27], VAR_4);
 FUNC_16(&VAR_22[VAR_27], VAR_15);
 FUNC_13(&VAR_22[VAR_27], VAR_19);
 FUNC_6(&VAR_22[VAR_27]);
 VAR_27++;


 if (VAR_26->assoclen > 0) {
  FUNC_2(VAR_21, VAR_6, VAR_22, &VAR_27);
 } else {
  FUNC_5(&VAR_22[VAR_27]);
  FUNC_10(&VAR_22[VAR_27], VAR_7,
        FUNC_17(&VAR_26->ccm_adata_sg),
        VAR_0 + VAR_26->ccm_hdr_size, VAR_13);
  FUNC_13(&VAR_22[VAR_27], VAR_6);
  VAR_27++;
 }


 if (VAR_26->cryptlen)
  FUNC_1(VAR_21, VAR_28, VAR_22, &VAR_27);


 FUNC_5(&VAR_22[VAR_27]);
 FUNC_8(&VAR_22[VAR_27], VAR_8);
 FUNC_11(&VAR_22[VAR_27], VAR_26->mac_buf_dma_addr, VAR_25->authsize,
        VAR_13, 0);
 FUNC_16(&VAR_22[VAR_27], VAR_17);
 FUNC_7(&VAR_22[VAR_27], VAR_12);
 FUNC_13(&VAR_22[VAR_27], VAR_20);
 FUNC_6(&VAR_22[VAR_27]);
 VAR_27++;


 FUNC_5(&VAR_22[VAR_27]);
 FUNC_8(&VAR_22[VAR_27], VAR_9);
 FUNC_7(&VAR_22[VAR_27], VAR_11);
 FUNC_10(&VAR_22[VAR_27], VAR_7, VAR_26->ccm_iv0_dma_addr,
       VAR_0, VAR_13);
 FUNC_14(&VAR_22[VAR_27], VAR_25->enc_keylen);
 FUNC_16(&VAR_22[VAR_27], VAR_16);
 FUNC_13(&VAR_22[VAR_27], VAR_18);
 VAR_27++;

 FUNC_5(&VAR_22[VAR_27]);
 FUNC_9(&VAR_22[VAR_27], 0, 0xfffff0);
 FUNC_12(&VAR_22[VAR_27], 0, 0, 1);
 VAR_27++;


 FUNC_5(&VAR_22[VAR_27]);
 FUNC_10(&VAR_22[VAR_27], VAR_7, VAR_26->mac_buf_dma_addr,
       VAR_25->authsize, VAR_13);
 FUNC_11(&VAR_22[VAR_27], VAR_29, VAR_25->authsize, VAR_13, 1);
 FUNC_15(VAR_25->drvdata, &VAR_22[VAR_27]);
 FUNC_13(&VAR_22[VAR_27], VAR_5);
 VAR_27++;

 *VAR_23 = VAR_27;
 return 0;
}
