
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cc_hw_desc {int dummy; } ;
struct cc_hmac_s {scalar_t__ ipad_opad_dma_addr; int padded_authkey_dma_addr; } ;
struct TYPE_2__ {struct cc_hmac_s hmac; } ;
struct cc_aead_ctx {scalar_t__ auth_mode; int hash_len; int drvdata; TYPE_1__ auth_state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct cc_hw_desc*) ;
 int FUNC_2 (struct cc_hw_desc*,int ) ;
 int FUNC_3 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_4 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_5 (struct cc_hw_desc*,int ,unsigned int) ;
 int FUNC_6 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_7 (struct cc_hw_desc*,scalar_t__,unsigned int,int ,int ) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;
 int FUNC_9 (struct cc_hw_desc*,int ) ;
 int FUNC_10 (struct cc_hw_desc*) ;
 int FUNC_11 (struct cc_hw_desc*,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct cc_hw_desc *VAR_18, struct cc_aead_ctx *VAR_19)
{
 unsigned int VAR_20[2] = { VAR_8, VAR_9 };
 unsigned int VAR_21 = 0;
 unsigned int VAR_22 = (VAR_19->auth_mode == VAR_6) ?
   VAR_4 : VAR_5;
 unsigned int VAR_23 = (VAR_19->auth_mode == VAR_6) ?
   VAR_0 : VAR_1;
 struct cc_hmac_s *VAR_24 = &VAR_19->auth_state.hmac;

 unsigned int VAR_25 = 0;
 int VAR_26;


 for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {

  FUNC_1(&VAR_18[VAR_25]);
  FUNC_3(&VAR_18[VAR_25], VAR_22);
  FUNC_5(&VAR_18[VAR_25],
        FUNC_0(VAR_19->drvdata,
         VAR_19->auth_mode),
        VAR_23);
  FUNC_8(&VAR_18[VAR_25], VAR_16);
  FUNC_9(&VAR_18[VAR_25], VAR_12);
  VAR_25++;


  FUNC_1(&VAR_18[VAR_25]);
  FUNC_3(&VAR_18[VAR_25], VAR_22);
  FUNC_4(&VAR_18[VAR_25], 0, VAR_19->hash_len);
  FUNC_8(&VAR_18[VAR_25], VAR_16);
  FUNC_9(&VAR_18[VAR_25], VAR_11);
  VAR_25++;


  FUNC_1(&VAR_18[VAR_25]);
  FUNC_11(&VAR_18[VAR_25], VAR_20[VAR_26]);
  FUNC_3(&VAR_18[VAR_25], VAR_22);
  FUNC_8(&VAR_18[VAR_25], VAR_16);
  FUNC_9(&VAR_18[VAR_25], VAR_13);
  VAR_25++;


  FUNC_1(&VAR_18[VAR_25]);
  FUNC_6(&VAR_18[VAR_25], VAR_3,
        VAR_24->padded_authkey_dma_addr,
        VAR_15, VAR_10);
  FUNC_3(&VAR_18[VAR_25], VAR_22);
  FUNC_10(&VAR_18[VAR_25]);
  FUNC_8(&VAR_18[VAR_25], VAR_2);
  VAR_25++;


  FUNC_1(&VAR_18[VAR_25]);
  FUNC_3(&VAR_18[VAR_25], VAR_22);
  FUNC_7(&VAR_18[VAR_25],
         (VAR_24->ipad_opad_dma_addr + VAR_21),
         VAR_23, VAR_10, 0);
  FUNC_8(&VAR_18[VAR_25], VAR_17);
  FUNC_9(&VAR_18[VAR_25], VAR_14);
  FUNC_2(&VAR_18[VAR_25], VAR_7);
  VAR_25++;

  VAR_21 += VAR_23;
 }

 return VAR_25;
}
