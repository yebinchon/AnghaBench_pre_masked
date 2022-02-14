
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_aead_ctx {scalar_t__ auth_mode; int drvdata; int authsize; } ;
struct aead_request {int dummy; } ;
struct TYPE_2__ {int op_type; } ;
struct aead_req_ctx {int mac_buf_dma_addr; int icv_dma_addr; TYPE_1__ gen_ctx; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 struct cc_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct cc_hw_desc*) ;
 int FUNC_4 (struct cc_hw_desc*) ;
 int FUNC_5 (struct cc_hw_desc*,int ) ;
 int FUNC_6 (struct cc_hw_desc*,int ) ;
 int FUNC_7 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_8 (struct cc_hw_desc*,int ,int ,int ,int) ;
 int FUNC_9 (struct cc_hw_desc*,int ) ;
 int FUNC_10 (int ,struct cc_hw_desc*) ;
 int FUNC_11 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_12(struct aead_request *VAR_11,
    struct cc_hw_desc VAR_12[],
    unsigned int *VAR_13)
{
 struct crypto_aead *VAR_14 = FUNC_2(VAR_11);
 struct cc_aead_ctx *VAR_15 = FUNC_1(VAR_14);
 struct aead_req_ctx *VAR_16 = FUNC_0(VAR_11);
 unsigned int VAR_17 = *VAR_13;
 unsigned int VAR_18 = (VAR_15->auth_mode == VAR_4) ?
    VAR_2 : VAR_3;
 int VAR_19 = VAR_16->gen_ctx.op_type;


 if (VAR_19 == VAR_1) {
  FUNC_3(&VAR_12[VAR_17]);
  FUNC_9(&VAR_12[VAR_17], VAR_10);
  FUNC_11(&VAR_12[VAR_17], VAR_9);
  FUNC_8(&VAR_12[VAR_17], VAR_16->icv_dma_addr, VAR_15->authsize,
         VAR_8, 1);
  FUNC_10(VAR_15->drvdata, &VAR_12[VAR_17]);
  if (VAR_15->auth_mode == VAR_5) {
   FUNC_4(&VAR_12[VAR_17]);
   FUNC_7(&VAR_12[VAR_17], VAR_0);
  } else {
   FUNC_5(&VAR_12[VAR_17],
        VAR_6);
   FUNC_7(&VAR_12[VAR_17], VAR_18);
  }
 } else {

  FUNC_3(&VAR_12[VAR_17]);
  FUNC_11(&VAR_12[VAR_17], VAR_9);
  FUNC_9(&VAR_12[VAR_17], VAR_10);
  FUNC_8(&VAR_12[VAR_17], VAR_16->mac_buf_dma_addr,
         VAR_15->authsize, VAR_8, 1);
  FUNC_10(VAR_15->drvdata, &VAR_12[VAR_17]);
  FUNC_5(&VAR_12[VAR_17],
       VAR_6);
  FUNC_6(&VAR_12[VAR_17], VAR_7);
  if (VAR_15->auth_mode == VAR_5) {
   FUNC_7(&VAR_12[VAR_17], VAR_0);
   FUNC_4(&VAR_12[VAR_17]);
  } else {
   FUNC_7(&VAR_12[VAR_17], VAR_18);
  }
 }

 *VAR_13 = (++VAR_17);
}
