
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct caam_flc {void** flc; int * sh_desc; } ;
struct TYPE_2__ {int keylen; } ;
struct caam_ctx {int dir; int * flc_dma; int authsize; int adata; TYPE_1__ cdata; struct caam_flc* flc; struct device* dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int *,unsigned int,int ,int,int) ;
 void* FUNC_1 (int ) ;
 struct caam_ctx* FUNC_2 (struct crypto_aead*) ;
 unsigned int FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(struct crypto_aead *VAR_2)
{
 struct caam_ctx *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4 = FUNC_3(VAR_2);
 struct device *VAR_5 = VAR_3->dev;
 struct caam_flc *VAR_6;
 u32 *VAR_7;

 if (!VAR_3->cdata.keylen || !VAR_3->authsize)
  return 0;

 VAR_6 = &VAR_3->flc[VAR_1];
 VAR_7 = VAR_6->sh_desc;
 FUNC_0(VAR_7, &VAR_3->cdata, &VAR_3->adata, VAR_4,
          VAR_3->authsize, 1, 1);
 VAR_6->flc[1] = FUNC_1(FUNC_5(VAR_7));
 FUNC_6(VAR_5, VAR_3->flc_dma[VAR_1],
       sizeof(VAR_6->flc) + FUNC_4(VAR_7),
       VAR_3->dir);

 VAR_6 = &VAR_3->flc[VAR_0];
 VAR_7 = VAR_6->sh_desc;
 FUNC_0(VAR_7, &VAR_3->cdata, &VAR_3->adata, VAR_4,
          VAR_3->authsize, 0, 1);
 VAR_6->flc[1] = FUNC_1(FUNC_5(VAR_7));
 FUNC_6(VAR_5, VAR_3->flc_dma[VAR_0],
       sizeof(VAR_6->flc) + FUNC_4(VAR_7),
       VAR_3->dir);

 return 0;
}
