
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_aead {int base; } ;
struct cc_xcbc_s {int * xcbc_keys; scalar_t__ xcbc_keys_dma_addr; } ;
struct cc_hmac_s {int * padded_authkey; scalar_t__ padded_authkey_dma_addr; int * ipad_opad; scalar_t__ ipad_opad_dma_addr; } ;
struct TYPE_2__ {struct cc_hmac_s hmac; struct cc_xcbc_s xcbc; } ;
struct cc_aead_ctx {scalar_t__ auth_mode; TYPE_1__ auth_state; int * enckey; scalar_t__ enckey_dma_addr; int drvdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cc_aead_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,struct cc_aead_ctx*,...) ;
 int FUNC_3 (struct device*,int,int *,scalar_t__) ;
 struct device* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct crypto_aead *VAR_6)
{
 struct cc_aead_ctx *VAR_7 = FUNC_0(VAR_6);
 struct device *VAR_8 = FUNC_4(VAR_7->drvdata);

 FUNC_2(VAR_8, "Clearing context @%p for %s\n", FUNC_0(VAR_6),
  FUNC_1(&VAR_6->base));


 if (VAR_7->enckey) {
  FUNC_3(VAR_8, VAR_0, VAR_7->enckey,
      VAR_7->enckey_dma_addr);
  FUNC_2(VAR_8, "Freed enckey DMA buffer enckey_dma_addr=%pad\n",
   &VAR_7->enckey_dma_addr);
  VAR_7->enckey_dma_addr = 0;
  VAR_7->enckey = ((void*)0);
 }

 if (VAR_7->auth_mode == VAR_3) {
  struct cc_xcbc_s *VAR_9 = &VAR_7->auth_state.xcbc;

  if (VAR_9->xcbc_keys) {
   FUNC_3(VAR_8, VAR_1 * 3,
       VAR_9->xcbc_keys,
       VAR_9->xcbc_keys_dma_addr);
  }
  FUNC_2(VAR_8, "Freed xcbc_keys DMA buffer xcbc_keys_dma_addr=%pad\n",
   &VAR_9->xcbc_keys_dma_addr);
  VAR_9->xcbc_keys_dma_addr = 0;
  VAR_9->xcbc_keys = ((void*)0);
 } else if (VAR_7->auth_mode != VAR_2) {
  struct cc_hmac_s *VAR_10 = &VAR_7->auth_state.hmac;

  if (VAR_10->ipad_opad) {
   FUNC_3(VAR_8, 2 * VAR_5,
       VAR_10->ipad_opad,
       VAR_10->ipad_opad_dma_addr);
   FUNC_2(VAR_8, "Freed ipad_opad DMA buffer ipad_opad_dma_addr=%pad\n",
    &VAR_10->ipad_opad_dma_addr);
   VAR_10->ipad_opad_dma_addr = 0;
   VAR_10->ipad_opad = ((void*)0);
  }
  if (VAR_10->padded_authkey) {
   FUNC_3(VAR_8, VAR_4,
       VAR_10->padded_authkey,
       VAR_10->padded_authkey_dma_addr);
   FUNC_2(VAR_8, "Freed padded_authkey DMA buffer padded_authkey_dma_addr=%pad\n",
    &VAR_10->padded_authkey_dma_addr);
   VAR_10->padded_authkey_dma_addr = 0;
   VAR_10->padded_authkey = ((void*)0);
  }
 }
}
