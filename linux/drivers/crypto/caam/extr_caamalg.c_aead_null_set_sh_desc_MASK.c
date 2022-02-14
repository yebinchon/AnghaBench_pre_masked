
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {int parent; } ;
struct crypto_aead {int dummy; } ;
struct caam_drv_private {int era; } ;
struct TYPE_3__ {int keylen_pad; int key_inline; int key_dma; int key_virt; } ;
struct caam_ctx {int dir; int sh_desc_dec_dma; int authsize; TYPE_1__ adata; int * sh_desc_dec; int key_dma; int key; int sh_desc_enc_dma; int * sh_desc_enc; struct device* jrdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int ) ;
 struct caam_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (int *) ;
 struct caam_drv_private* FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct crypto_aead *VAR_4)
{
 struct caam_ctx *VAR_5 = FUNC_2(VAR_4);
 struct device *VAR_6 = VAR_5->jrdev;
 struct caam_drv_private *VAR_7 = FUNC_4(VAR_6->parent);
 u32 *VAR_8;
 int VAR_9 = VAR_1 - VAR_0 -
   VAR_5->adata.keylen_pad;





 if (VAR_9 >= VAR_3) {
  VAR_5->adata.key_inline = 1;
  VAR_5->adata.key_virt = VAR_5->key;
 } else {
  VAR_5->adata.key_inline = 0;
  VAR_5->adata.key_dma = VAR_5->key_dma;
 }


 VAR_8 = VAR_5->sh_desc_enc;
 FUNC_1(VAR_8, &VAR_5->adata, VAR_5->authsize,
        VAR_7->era);
 FUNC_5(VAR_6, VAR_5->sh_desc_enc_dma,
       FUNC_3(VAR_8), VAR_5->dir);





 if (VAR_9 >= VAR_2) {
  VAR_5->adata.key_inline = 1;
  VAR_5->adata.key_virt = VAR_5->key;
 } else {
  VAR_5->adata.key_inline = 0;
  VAR_5->adata.key_dma = VAR_5->key_dma;
 }


 VAR_8 = VAR_5->sh_desc_dec;
 FUNC_0(VAR_8, &VAR_5->adata, VAR_5->authsize,
        VAR_7->era);
 FUNC_5(VAR_6, VAR_5->sh_desc_dec_dma,
       FUNC_3(VAR_8), VAR_5->dir);

 return 0;
}
