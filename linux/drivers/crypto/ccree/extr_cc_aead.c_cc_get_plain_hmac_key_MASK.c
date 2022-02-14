
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_crypto_req {int dummy; } ;
struct TYPE_3__ {scalar_t__ padded_authkey_dma_addr; } ;
struct TYPE_4__ {TYPE_1__ hmac; } ;
struct cc_aead_ctx {int auth_mode; unsigned int hash_len; int drvdata; TYPE_2__ auth_state; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;


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
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,struct cc_crypto_req*,struct cc_hw_desc*,unsigned int) ;
 struct cc_aead_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct device*,char*,int,...) ;
 scalar_t__ FUNC_4 (struct device*,void*,unsigned int,int ) ;
 scalar_t__ FUNC_5 (struct device*,scalar_t__) ;
 int FUNC_6 (struct device*,scalar_t__,unsigned int,int ) ;
 struct device* FUNC_7 (int ) ;
 int FUNC_8 (struct cc_hw_desc*) ;
 int * FUNC_9 (int const*,unsigned int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct cc_hw_desc*,int ) ;
 int FUNC_12 (struct cc_hw_desc*,int ) ;
 int FUNC_13 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_14 (struct cc_hw_desc*,int ,unsigned int) ;
 int FUNC_15 (struct cc_hw_desc*,int ,unsigned int) ;
 int FUNC_16 (struct cc_hw_desc*,int ,scalar_t__,unsigned int,int ) ;
 int FUNC_17 (struct cc_hw_desc*,scalar_t__,unsigned int,int ,int ) ;
 int FUNC_18 (struct cc_hw_desc*,int ) ;
 int FUNC_19 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_20(struct crypto_aead *VAR_22, const u8 *VAR_23,
     unsigned int VAR_24)
{
 dma_addr_t VAR_25 = 0;
 struct cc_aead_ctx *VAR_26 = FUNC_2(VAR_22);
 struct device *VAR_27 = FUNC_7(VAR_26->drvdata);
 u32 VAR_28 = FUNC_0(VAR_26->drvdata, VAR_26->auth_mode);
 struct cc_crypto_req VAR_29 = {};
 unsigned int VAR_30;
 unsigned int VAR_31;
 unsigned int VAR_32;
 unsigned int VAR_33 = 0;
 int VAR_34 = 0;
 u8 *VAR_35 = ((void*)0);
 struct cc_hw_desc VAR_36[VAR_11];
 dma_addr_t VAR_37 =
  VAR_26->auth_state.hmac.padded_authkey_dma_addr;

 switch (VAR_26->auth_mode) {
 case 129:
  VAR_30 = VAR_16;
  VAR_31 = VAR_17;
  VAR_32 = VAR_4;
  break;
 case 128:
 default:
  VAR_30 = VAR_18;
  VAR_31 = VAR_19;
  VAR_32 = VAR_5;
 }

 if (VAR_24 != 0) {

  VAR_35 = FUNC_9(VAR_23, VAR_24, VAR_7);
  if (!VAR_35)
   return -VAR_6;

  VAR_25 = FUNC_4(VAR_27, (void *)VAR_35, VAR_24,
           VAR_3);
  if (FUNC_5(VAR_27, VAR_25)) {
   FUNC_3(VAR_27, "Mapping key va=0x%p len=%u for DMA failed\n",
    *VAR_35, VAR_24);
   FUNC_10(VAR_35);
   return -VAR_6;
  }
  if (VAR_24 > VAR_30) {

   FUNC_8(&VAR_36[VAR_33]);
   FUNC_13(&VAR_36[VAR_33], VAR_32);
   FUNC_15(&VAR_36[VAR_33], VAR_28, VAR_31);
   FUNC_18(&VAR_36[VAR_33], VAR_20);
   FUNC_19(&VAR_36[VAR_33], VAR_14);
   VAR_33++;


   FUNC_8(&VAR_36[VAR_33]);
   FUNC_13(&VAR_36[VAR_33], VAR_32);
   FUNC_14(&VAR_36[VAR_33], 0, VAR_26->hash_len);
   FUNC_12(&VAR_36[VAR_33], VAR_10);
   FUNC_18(&VAR_36[VAR_33], VAR_20);
   FUNC_19(&VAR_36[VAR_33], VAR_13);
   VAR_33++;

   FUNC_8(&VAR_36[VAR_33]);
   FUNC_16(&VAR_36[VAR_33], VAR_2,
         VAR_25, VAR_24, VAR_12);
   FUNC_18(&VAR_36[VAR_33], VAR_1);
   VAR_33++;


   FUNC_8(&VAR_36[VAR_33]);
   FUNC_13(&VAR_36[VAR_33], VAR_32);
   FUNC_17(&VAR_36[VAR_33], VAR_37,
          VAR_31, VAR_12, 0);
   FUNC_18(&VAR_36[VAR_33], VAR_21);
   FUNC_19(&VAR_36[VAR_33], VAR_15);
   FUNC_12(&VAR_36[VAR_33], VAR_9);
   FUNC_11(&VAR_36[VAR_33],
        VAR_8);
   VAR_33++;

   FUNC_8(&VAR_36[VAR_33]);
   FUNC_14(&VAR_36[VAR_33], 0, (VAR_30 - VAR_31));
   FUNC_18(&VAR_36[VAR_33], VAR_0);
   FUNC_17(&VAR_36[VAR_33], (VAR_37 +
          VAR_31), (VAR_30 - VAR_31),
          VAR_12, 0);
   VAR_33++;
  } else {
   FUNC_8(&VAR_36[VAR_33]);
   FUNC_16(&VAR_36[VAR_33], VAR_2, VAR_25,
         VAR_24, VAR_12);
   FUNC_18(&VAR_36[VAR_33], VAR_0);
   FUNC_17(&VAR_36[VAR_33], VAR_37,
          VAR_24, VAR_12, 0);
   VAR_33++;

   if ((VAR_30 - VAR_24) != 0) {
    FUNC_8(&VAR_36[VAR_33]);
    FUNC_14(&VAR_36[VAR_33], 0,
           (VAR_30 - VAR_24));
    FUNC_18(&VAR_36[VAR_33], VAR_0);
    FUNC_17(&VAR_36[VAR_33],
           (VAR_37 +
            VAR_24),
           (VAR_30 - VAR_24), VAR_12, 0);
    VAR_33++;
   }
  }
 } else {
  FUNC_8(&VAR_36[VAR_33]);
  FUNC_14(&VAR_36[VAR_33], 0, (VAR_30 - VAR_24));
  FUNC_18(&VAR_36[VAR_33], VAR_0);
  FUNC_17(&VAR_36[VAR_33], VAR_37,
         VAR_30, VAR_12, 0);
  VAR_33++;
 }

 VAR_34 = FUNC_1(VAR_26->drvdata, &VAR_29, VAR_36, VAR_33);
 if (VAR_34)
  FUNC_3(VAR_27, "send_request() failed (rc=%d)\n", VAR_34);

 if (VAR_25)
  FUNC_6(VAR_27, VAR_25, VAR_24, VAR_3);

 FUNC_10(VAR_35);

 return VAR_34;
}
