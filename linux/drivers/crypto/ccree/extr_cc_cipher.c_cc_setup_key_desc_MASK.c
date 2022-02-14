
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_5__ {int op_type; } ;
struct cipher_req_ctx {TYPE_1__ gen_ctx; } ;
struct cc_hw_desc {int dummy; } ;
struct TYPE_8__ {int key1_slot; } ;
struct TYPE_7__ {int slot; } ;
struct TYPE_6__ {int key_dma_addr; } ;
struct cc_cipher_ctx {int cipher_mode; int flow_mode; unsigned int keylen; TYPE_4__ hw; TYPE_3__ cpp; TYPE_2__ user; int drvdata; } ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct cc_cipher_ctx*) ;
 struct cc_cipher_ctx* FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (struct cc_hw_desc*) ;
 int FUNC_6 (struct cc_hw_desc*,int) ;
 int FUNC_7 (struct cc_hw_desc*,int) ;
 int FUNC_8 (struct cc_hw_desc*,int ) ;
 int FUNC_9 (struct cc_hw_desc*,int ,int ,unsigned int,int ) ;
 int FUNC_10 (struct cc_hw_desc*,int) ;
 int FUNC_11 (struct cc_hw_desc*,int ) ;
 int FUNC_12 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_13 (struct cc_hw_desc*,unsigned int) ;
 int FUNC_14 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_15(struct crypto_tfm *VAR_7,
         struct cipher_req_ctx *VAR_8,
         unsigned int VAR_9, struct cc_hw_desc VAR_10[],
         unsigned int *VAR_11)
{
 struct cc_cipher_ctx *VAR_12 = FUNC_2(VAR_7);
 struct device *VAR_13 = FUNC_4(VAR_12->drvdata);
 int VAR_14 = VAR_12->cipher_mode;
 int VAR_15 = VAR_12->flow_mode;
 int VAR_16 = VAR_8->gen_ctx.op_type;
 dma_addr_t VAR_17 = VAR_12->user.key_dma_addr;
 unsigned int VAR_18 = VAR_12->keylen;
 unsigned int VAR_19;

 switch (VAR_14) {
 case 134:
 case 133:
 case 132:
 case 129:
 case 131:

  FUNC_5(&VAR_10[*VAR_11]);
  FUNC_7(&VAR_10[*VAR_11], VAR_14);
  FUNC_6(&VAR_10[*VAR_11], VAR_16);

  if (FUNC_0(VAR_7) == VAR_2) {

   FUNC_12(&VAR_10[*VAR_11], VAR_18);
   FUNC_8(&VAR_10[*VAR_11], VAR_12->cpp.slot);
   VAR_15 = FUNC_1(VAR_12);
  } else {
   if (VAR_15 == VAR_6) {
    if (FUNC_0(VAR_7) == VAR_1) {
     FUNC_11(&VAR_10[*VAR_11],
         VAR_12->hw.key1_slot);
    } else {




     VAR_19 = (VAR_18 == 24) ?
      VAR_0 : VAR_18;

     FUNC_9(&VAR_10[*VAR_11], VAR_3,
           VAR_17, VAR_19,
           VAR_4);
    }
    FUNC_12(&VAR_10[*VAR_11], VAR_18);
   } else {

    FUNC_9(&VAR_10[*VAR_11], VAR_3,
          VAR_17, VAR_18, VAR_4);
    FUNC_13(&VAR_10[*VAR_11], VAR_18);
   }
   FUNC_14(&VAR_10[*VAR_11], VAR_5);
  }
  FUNC_10(&VAR_10[*VAR_11], VAR_15);
  (*VAR_11)++;
  break;
 case 128:
 case 130:
 case 135:

  FUNC_5(&VAR_10[*VAR_11]);
  FUNC_7(&VAR_10[*VAR_11], VAR_14);
  FUNC_6(&VAR_10[*VAR_11], VAR_16);
  if (FUNC_0(VAR_7) == VAR_1) {
   FUNC_11(&VAR_10[*VAR_11],
       VAR_12->hw.key1_slot);
  } else {
   FUNC_9(&VAR_10[*VAR_11], VAR_3, VAR_17,
         (VAR_18 / 2), VAR_4);
  }
  FUNC_12(&VAR_10[*VAR_11], (VAR_18 / 2));
  FUNC_10(&VAR_10[*VAR_11], VAR_15);
  FUNC_14(&VAR_10[*VAR_11], VAR_5);
  (*VAR_11)++;
  break;
 default:
  FUNC_3(VAR_13, "Unsupported cipher mode (%d)\n", VAR_14);
 }
}
