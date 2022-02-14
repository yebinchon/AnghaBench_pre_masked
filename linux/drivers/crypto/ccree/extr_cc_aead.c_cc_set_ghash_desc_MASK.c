
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {int enc_keylen; int enckey_dma_addr; } ;
struct aead_request {int dummy; } ;
struct aead_req_ctx {int hkey_dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct cc_hw_desc*) ;
 int FUNC_4 (struct cc_hw_desc*) ;
 int FUNC_5 (struct cc_hw_desc*,int ) ;
 int FUNC_6 (struct cc_hw_desc*,int ) ;
 int FUNC_7 (struct cc_hw_desc*,int) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;
 int FUNC_9 (struct cc_hw_desc*,int,int ) ;
 int FUNC_10 (struct cc_hw_desc*,int ,int) ;
 int FUNC_11 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_12 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_13 (struct cc_hw_desc*,int ,int ,int) ;
 int FUNC_14 (struct cc_hw_desc*,int ) ;
 int FUNC_15 (struct cc_hw_desc*,int ) ;
 int FUNC_16 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_17(struct aead_request *VAR_12,
         struct cc_hw_desc VAR_13[], unsigned int *VAR_14)
{
 struct crypto_aead *VAR_15 = FUNC_2(VAR_12);
 struct cc_aead_ctx *VAR_16 = FUNC_1(VAR_15);
 struct aead_req_ctx *VAR_17 = FUNC_0(VAR_12);
 unsigned int VAR_18 = *VAR_14;


 FUNC_3(&VAR_13[VAR_18]);
 FUNC_8(&VAR_13[VAR_18], VAR_3);
 FUNC_5(&VAR_13[VAR_18], VAR_4);
 FUNC_11(&VAR_13[VAR_18], VAR_2, VAR_16->enckey_dma_addr,
       VAR_16->enc_keylen, VAR_7);
 FUNC_15(&VAR_13[VAR_18], VAR_16->enc_keylen);
 FUNC_16(&VAR_13[VAR_18], VAR_8);
 FUNC_14(&VAR_13[VAR_18], VAR_10);
 VAR_18++;


 FUNC_3(&VAR_13[VAR_18]);
 FUNC_9(&VAR_13[VAR_18], 0x0, VAR_0);
 FUNC_12(&VAR_13[VAR_18], VAR_17->hkey_dma_addr, VAR_0,
        VAR_7, 0);
 FUNC_14(&VAR_13[VAR_18], VAR_1);
 VAR_18++;


 FUNC_3(&VAR_13[VAR_18]);
 FUNC_10(&VAR_13[VAR_18], 0, 0xfffff0);
 FUNC_13(&VAR_13[VAR_18], 0, 0, 1);
 VAR_18++;


 FUNC_3(&VAR_13[VAR_18]);
 FUNC_11(&VAR_13[VAR_18], VAR_2, VAR_17->hkey_dma_addr,
       VAR_0, VAR_7);
 FUNC_13(&VAR_13[VAR_18], 0, 0, 1);
 FUNC_14(&VAR_13[VAR_18], VAR_11);
 FUNC_4(&VAR_13[VAR_18]);
 FUNC_8(&VAR_13[VAR_18], VAR_5);
 FUNC_6(&VAR_13[VAR_18], VAR_6);
 FUNC_16(&VAR_13[VAR_18], VAR_8);
 VAR_18++;






 FUNC_3(&VAR_13[VAR_18]);
 FUNC_10(&VAR_13[VAR_18], 0, 0xfffff0);
 FUNC_13(&VAR_13[VAR_18], 0, 0, 1);
 FUNC_14(&VAR_13[VAR_18], VAR_11);
 FUNC_4(&VAR_13[VAR_18]);
 FUNC_8(&VAR_13[VAR_18], VAR_5);
 FUNC_7(&VAR_13[VAR_18], 1);
 FUNC_5(&VAR_13[VAR_18], VAR_4);
 FUNC_6(&VAR_13[VAR_18], VAR_6);
 FUNC_16(&VAR_13[VAR_18], VAR_8);
 VAR_18++;




 FUNC_3(&VAR_13[VAR_18]);
 FUNC_9(&VAR_13[VAR_18], 0x0, VAR_0);
 FUNC_13(&VAR_13[VAR_18], 0, 0, 1);
 FUNC_14(&VAR_13[VAR_18], VAR_11);
 FUNC_4(&VAR_13[VAR_18]);
 FUNC_8(&VAR_13[VAR_18], VAR_5);
 FUNC_6(&VAR_13[VAR_18], VAR_6);
 FUNC_16(&VAR_13[VAR_18], VAR_9);
 VAR_18++;

 *VAR_14 = VAR_18;
}
