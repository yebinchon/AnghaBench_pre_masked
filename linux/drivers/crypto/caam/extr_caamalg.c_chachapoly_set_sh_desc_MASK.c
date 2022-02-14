
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int keylen; } ;
struct caam_ctx {int dir; int sh_desc_dec_dma; int authsize; int adata; TYPE_1__ cdata; int * sh_desc_dec; int sh_desc_enc_dma; int * sh_desc_enc; struct device* jrdev; } ;


 int FUNC_0 (int *,TYPE_1__*,int *,unsigned int,int ,int,int) ;
 struct caam_ctx* FUNC_1 (struct crypto_aead*) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct crypto_aead *VAR_0)
{
 struct caam_ctx *VAR_1 = FUNC_1(VAR_0);
 struct device *VAR_2 = VAR_1->jrdev;
 unsigned int VAR_3 = FUNC_2(VAR_0);
 u32 *VAR_4;

 if (!VAR_1->cdata.keylen || !VAR_1->authsize)
  return 0;

 VAR_4 = VAR_1->sh_desc_enc;
 FUNC_0(VAR_4, &VAR_1->cdata, &VAR_1->adata, VAR_3,
          VAR_1->authsize, 1, 0);
 FUNC_4(VAR_2, VAR_1->sh_desc_enc_dma,
       FUNC_3(VAR_4), VAR_1->dir);

 VAR_4 = VAR_1->sh_desc_dec;
 FUNC_0(VAR_4, &VAR_1->cdata, &VAR_1->adata, VAR_3,
          VAR_1->authsize, 0, 0);
 FUNC_4(VAR_2, VAR_1->sh_desc_dec_dma,
       FUNC_3(VAR_4), VAR_1->dir);

 return 0;
}
