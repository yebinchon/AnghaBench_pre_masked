
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct crypto_tfm {int dummy; } ;
struct TYPE_2__ {int op_type; int iv_dma_addr; } ;
struct cipher_req_ctx {TYPE_1__ gen_ctx; } ;
struct cc_hw_desc {int dummy; } ;
struct cc_cipher_ctx {int cipher_mode; scalar_t__ key_type; int drvdata; } ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cc_cipher_ctx*) ;
 struct cc_cipher_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (struct cc_hw_desc*) ;
 int FUNC_5 (struct cc_hw_desc*,int) ;
 int FUNC_6 (struct cc_hw_desc*,int) ;
 int FUNC_7 (struct cc_hw_desc*,int ,unsigned int,int ,int) ;
 int FUNC_8 (struct cc_hw_desc*,int) ;
 int FUNC_9 (int ,struct cc_hw_desc*) ;
 int FUNC_10 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static void FUNC_11(struct crypto_tfm *VAR_5,
     struct cipher_req_ctx *VAR_6,
     unsigned int VAR_7, struct cc_hw_desc VAR_8[],
     unsigned int *VAR_9)
{
 struct cc_cipher_ctx *VAR_10 = FUNC_1(VAR_5);
 struct device *VAR_11 = FUNC_3(VAR_10->drvdata);
 int VAR_12 = VAR_10->cipher_mode;
 int VAR_13 = FUNC_0(VAR_10);
 int VAR_14 = VAR_6->gen_ctx.op_type;
 dma_addr_t VAR_15 = VAR_6->gen_ctx.iv_dma_addr;

 if (VAR_10->key_type == VAR_1)
  return;

 switch (VAR_12) {
 case 131:
  break;
 case 134:
 case 133:
 case 132:
 case 129:

  FUNC_4(&VAR_8[*VAR_9]);
  FUNC_7(&VAR_8[*VAR_9], VAR_15, VAR_7, VAR_2, 1);
  FUNC_5(&VAR_8[*VAR_9], VAR_14);
  FUNC_8(&VAR_8[*VAR_9], VAR_13);
  FUNC_6(&VAR_8[*VAR_9], VAR_12);
  if (VAR_12 == 132 ||
      VAR_12 == 129) {
   FUNC_10(&VAR_8[*VAR_9], VAR_4);
  } else {
   FUNC_10(&VAR_8[*VAR_9], VAR_3);
  }
  FUNC_9(VAR_10->drvdata, &VAR_8[*VAR_9]);
  (*VAR_9)++;
  break;
 case 128:
 case 130:
 case 135:

  FUNC_4(&VAR_8[*VAR_9]);
  FUNC_10(&VAR_8[*VAR_9], VAR_4);
  FUNC_6(&VAR_8[*VAR_9], VAR_12);
  FUNC_5(&VAR_8[*VAR_9], VAR_14);
  FUNC_8(&VAR_8[*VAR_9], VAR_13);
  FUNC_7(&VAR_8[*VAR_9], VAR_15, VAR_0,
        VAR_2, 1);
  FUNC_9(VAR_10->drvdata, &VAR_8[*VAR_9]);
  (*VAR_9)++;
  break;
 default:
  FUNC_2(VAR_11, "Unsupported cipher mode (%d)\n", VAR_12);
 }
}
