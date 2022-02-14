
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct device {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct TYPE_3__ {unsigned int keylen; int key_inline; int const* key_virt; } ;
struct caam_ctx {int dir; int sh_desc_dec_dma; TYPE_1__ cdata; int * sh_desc_dec; int sh_desc_enc_dma; int * sh_desc_enc; struct device* jrdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 struct caam_ctx* FUNC_2 (struct crypto_skcipher*) ;
 int FUNC_3 (struct crypto_skcipher*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct crypto_skcipher *VAR_4, const u8 *VAR_5,
          unsigned int VAR_6)
{
 struct caam_ctx *VAR_7 = FUNC_2(VAR_4);
 struct device *VAR_8 = VAR_7->jrdev;
 u32 *VAR_9;

 if (VAR_6 != 2 * VAR_1 && VAR_6 != 2 * VAR_0) {
  FUNC_3(VAR_4, VAR_2);
  FUNC_5(VAR_8, "key size mismatch\n");
  return -VAR_3;
 }

 VAR_7->cdata.keylen = VAR_6;
 VAR_7->cdata.key_virt = VAR_5;
 VAR_7->cdata.key_inline = 1;


 VAR_9 = VAR_7->sh_desc_enc;
 FUNC_1(VAR_9, &VAR_7->cdata);
 FUNC_6(VAR_8, VAR_7->sh_desc_enc_dma,
       FUNC_4(VAR_9), VAR_7->dir);


 VAR_9 = VAR_7->sh_desc_dec;
 FUNC_0(VAR_9, &VAR_7->cdata);
 FUNC_6(VAR_8, VAR_7->sh_desc_dec_dma,
       FUNC_4(VAR_9), VAR_7->dir);

 return 0;
}
