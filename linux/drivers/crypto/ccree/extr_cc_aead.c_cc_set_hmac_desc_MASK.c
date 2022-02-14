
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct TYPE_3__ {int ipad_opad_dma_addr; } ;
struct TYPE_4__ {TYPE_1__ hmac; } ;
struct cc_aead_ctx {scalar_t__ auth_mode; int hash_len; int drvdata; TYPE_2__ auth_state; } ;
struct aead_request {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,unsigned int) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct cc_hw_desc*) ;
 int FUNC_4 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_5 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_6 (struct cc_hw_desc*,int ,int ,unsigned int,int ) ;
 int FUNC_7 (struct cc_hw_desc*,int ) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_9(struct aead_request *VAR_10, struct cc_hw_desc VAR_11[],
        unsigned int *VAR_12)
{
 struct crypto_aead *VAR_13 = FUNC_2(VAR_10);
 struct cc_aead_ctx *VAR_14 = FUNC_1(VAR_13);
 unsigned int VAR_15 = (VAR_14->auth_mode == VAR_5) ?
    VAR_3 : VAR_4;
 unsigned int VAR_16 = (VAR_14->auth_mode == VAR_5) ?
    VAR_0 : VAR_1;
 unsigned int VAR_17 = *VAR_12;


 FUNC_3(&VAR_11[VAR_17]);
 FUNC_4(&VAR_11[VAR_17], VAR_15);
 FUNC_6(&VAR_11[VAR_17], VAR_2,
       VAR_14->auth_state.hmac.ipad_opad_dma_addr, VAR_16,
       VAR_6);
 FUNC_7(&VAR_11[VAR_17], VAR_9);
 FUNC_8(&VAR_11[VAR_17], VAR_8);
 VAR_17++;


 FUNC_3(&VAR_11[VAR_17]);
 FUNC_4(&VAR_11[VAR_17], VAR_15);
 FUNC_5(&VAR_11[VAR_17], FUNC_0(VAR_14->drvdata, VAR_15),
       VAR_14->hash_len);
 FUNC_7(&VAR_11[VAR_17], VAR_9);
 FUNC_8(&VAR_11[VAR_17], VAR_7);
 VAR_17++;

 *VAR_12 = VAR_17;
}
