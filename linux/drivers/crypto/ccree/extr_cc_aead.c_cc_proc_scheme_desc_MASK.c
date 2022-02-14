
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_handle {int sram_workspace_addr; } ;
struct TYPE_4__ {scalar_t__ ipad_opad_dma_addr; } ;
struct TYPE_5__ {TYPE_1__ hmac; } ;
struct cc_aead_ctx {scalar_t__ auth_mode; unsigned int hash_len; TYPE_3__* drvdata; TYPE_2__ auth_state; } ;
struct aead_request {int dummy; } ;
struct TYPE_6__ {struct cc_aead_handle* aead_handle; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (TYPE_3__*,unsigned int) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct cc_hw_desc*) ;
 int FUNC_4 (struct cc_hw_desc*,int ) ;
 int FUNC_5 (struct cc_hw_desc*,int ) ;
 int FUNC_6 (struct cc_hw_desc*,int ) ;
 int FUNC_7 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_8 (struct cc_hw_desc*,int ,unsigned int) ;
 int FUNC_9 (struct cc_hw_desc*,int ,scalar_t__,unsigned int,int ) ;
 int FUNC_10 (struct cc_hw_desc*,int ,unsigned int) ;
 int FUNC_11 (struct cc_hw_desc*,int ) ;
 int FUNC_12 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_13(struct aead_request *VAR_17,
    struct cc_hw_desc VAR_18[],
    unsigned int *VAR_19)
{
 struct crypto_aead *VAR_20 = FUNC_2(VAR_17);
 struct cc_aead_ctx *VAR_21 = FUNC_1(VAR_20);
 struct cc_aead_handle *VAR_22 = VAR_21->drvdata->aead_handle;
 unsigned int VAR_23 = (VAR_21->auth_mode == VAR_7) ?
    VAR_5 : VAR_6;
 unsigned int VAR_24 = (VAR_21->auth_mode == VAR_7) ?
    VAR_0 : VAR_1;
 unsigned int VAR_25 = *VAR_19;

 FUNC_3(&VAR_18[VAR_25]);
 FUNC_7(&VAR_18[VAR_25], VAR_23);
 FUNC_10(&VAR_18[VAR_25], VAR_22->sram_workspace_addr,
        VAR_21->hash_len);
 FUNC_11(&VAR_18[VAR_25], VAR_16);
 FUNC_12(&VAR_18[VAR_25], VAR_14);
 FUNC_6(&VAR_18[VAR_25], VAR_4);
 VAR_25++;


 FUNC_3(&VAR_18[VAR_25]);
 FUNC_10(&VAR_18[VAR_25], VAR_22->sram_workspace_addr,
        VAR_24);
 FUNC_11(&VAR_18[VAR_25], VAR_16);
 FUNC_12(&VAR_18[VAR_25], VAR_13);
 FUNC_4(&VAR_18[VAR_25], VAR_8);
 FUNC_7(&VAR_18[VAR_25], VAR_23);
 VAR_25++;


 FUNC_3(&VAR_18[VAR_25]);
 FUNC_7(&VAR_18[VAR_25], VAR_23);
 FUNC_9(&VAR_18[VAR_25], VAR_3,
       (VAR_21->auth_state.hmac.ipad_opad_dma_addr + VAR_24),
       VAR_24, VAR_10);
 FUNC_11(&VAR_18[VAR_25], VAR_15);
 FUNC_12(&VAR_18[VAR_25], VAR_12);
 VAR_25++;


 FUNC_3(&VAR_18[VAR_25]);
 FUNC_7(&VAR_18[VAR_25], VAR_23);
 FUNC_8(&VAR_18[VAR_25], FUNC_0(VAR_21->drvdata, VAR_23),
       VAR_21->hash_len);
 FUNC_5(&VAR_18[VAR_25], VAR_9);
 FUNC_11(&VAR_18[VAR_25], VAR_15);
 FUNC_12(&VAR_18[VAR_25], VAR_11);
 VAR_25++;


 FUNC_3(&VAR_18[VAR_25]);
 FUNC_8(&VAR_18[VAR_25], VAR_22->sram_workspace_addr,
       VAR_24);
 FUNC_11(&VAR_18[VAR_25], VAR_2);
 VAR_25++;

 *VAR_19 = VAR_25;
}
