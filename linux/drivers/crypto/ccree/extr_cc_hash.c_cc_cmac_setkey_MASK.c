
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_2__ {unsigned int keylen; } ;
struct cc_hash_ctx {int is_hmac; TYPE_1__ key_params; int opad_tmp_keys_dma_addr; scalar_t__ opad_tmp_keys_buff; int drvdata; } ;





 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cc_hash_ctx* FUNC_0 (struct crypto_ahash*) ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 int FUNC_2 (struct device*,int ,unsigned int,int ) ;
 int FUNC_3 (struct device*,int ,unsigned int,int ) ;
 struct device* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int const*,unsigned int) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct crypto_ahash *VAR_3,
     const u8 *VAR_4, unsigned int VAR_5)
{
 struct cc_hash_ctx *VAR_6 = FUNC_0(VAR_3);
 struct device *VAR_7 = FUNC_4(VAR_6->drvdata);

 FUNC_1(VAR_7, "===== setkey (%d) ====\n", VAR_5);

 VAR_6->is_hmac = 1;

 switch (VAR_5) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  return -VAR_2;
 }

 VAR_6->key_params.keylen = VAR_5;



 FUNC_2(VAR_7, VAR_6->opad_tmp_keys_dma_addr,
    VAR_5, VAR_1);

 FUNC_5(VAR_6->opad_tmp_keys_buff, VAR_4, VAR_5);
 if (VAR_5 == 24) {
  FUNC_6(VAR_6->opad_tmp_keys_buff + 24, 0,
         VAR_0 - 24);
 }

 FUNC_3(VAR_7, VAR_6->opad_tmp_keys_dma_addr,
       VAR_5, VAR_1);

 VAR_6->key_params.keylen = VAR_5;

 return 0;
}
