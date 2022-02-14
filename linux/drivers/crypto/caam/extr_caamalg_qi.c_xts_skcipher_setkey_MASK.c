
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct device {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_3__ {unsigned int keylen; int key_inline; int const* key_virt; } ;
struct caam_ctx {int sh_desc_dec; scalar_t__* drv_ctx; int sh_desc_enc; TYPE_1__ cdata; struct device* jrdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 struct caam_ctx* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct crypto_skcipher*,int ) ;
 int FUNC_5 (struct device*,char*) ;

__attribute__((used)) static int FUNC_6(struct crypto_skcipher *VAR_6, const u8 *VAR_7,
          unsigned int VAR_8)
{
 struct caam_ctx *VAR_9 = FUNC_3(VAR_6);
 struct device *VAR_10 = VAR_9->jrdev;
 int VAR_11 = 0;

 if (VAR_8 != 2 * VAR_1 && VAR_8 != 2 * VAR_0) {
  FUNC_5(VAR_10, "key size mismatch\n");
  goto badkey;
 }

 VAR_9->cdata.keylen = VAR_8;
 VAR_9->cdata.key_virt = VAR_7;
 VAR_9->cdata.key_inline = 1;


 FUNC_2(VAR_9->sh_desc_enc, &VAR_9->cdata);
 FUNC_1(VAR_9->sh_desc_dec, &VAR_9->cdata);


 if (VAR_9->drv_ctx[VAR_5]) {
  VAR_11 = FUNC_0(VAR_9->drv_ctx[VAR_5],
       VAR_9->sh_desc_enc);
  if (VAR_11) {
   FUNC_5(VAR_10, "driver enc context update failed\n");
   goto badkey;
  }
 }

 if (VAR_9->drv_ctx[VAR_3]) {
  VAR_11 = FUNC_0(VAR_9->drv_ctx[VAR_3],
       VAR_9->sh_desc_dec);
  if (VAR_11) {
   FUNC_5(VAR_10, "driver dec context update failed\n");
   goto badkey;
  }
 }

 return VAR_11;
badkey:
 FUNC_4(VAR_6, VAR_2);
 return -VAR_4;
}
