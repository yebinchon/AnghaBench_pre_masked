
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct caam_flc {void** flc; int * sh_desc; } ;
struct TYPE_3__ {int keylen; int key_inline; int key_dma; int key_virt; } ;
struct caam_ctx {int dir; int * flc_dma; int authsize; TYPE_1__ cdata; struct caam_flc* flc; int key_dma; int key; struct device* dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*,unsigned int,int ,int) ;
 int FUNC_1 (int *,TYPE_1__*,unsigned int,int ,int) ;
 void* FUNC_2 (int ) ;
 struct caam_ctx* FUNC_3 (struct crypto_aead*) ;
 unsigned int FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*,int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct crypto_aead *VAR_6)
{
 struct caam_ctx *VAR_7 = FUNC_3(VAR_6);
 struct device *VAR_8 = VAR_7->dev;
 unsigned int VAR_9 = FUNC_4(VAR_6);
 struct caam_flc *VAR_10;
 u32 *VAR_11;
 int VAR_12 = VAR_0 - VAR_2 -
   VAR_7->cdata.keylen;

 if (!VAR_7->cdata.keylen || !VAR_7->authsize)
  return 0;






 if (VAR_12 >= VAR_4) {
  VAR_7->cdata.key_inline = 1;
  VAR_7->cdata.key_virt = VAR_7->key;
 } else {
  VAR_7->cdata.key_inline = 0;
  VAR_7->cdata.key_dma = VAR_7->key_dma;
 }

 VAR_10 = &VAR_7->flc[VAR_5];
 VAR_11 = VAR_10->sh_desc;
 FUNC_1(VAR_11, &VAR_7->cdata, VAR_9, VAR_7->authsize, 1);
 VAR_10->flc[1] = FUNC_2(FUNC_6(VAR_11));
 FUNC_7(VAR_8, VAR_7->flc_dma[VAR_5],
       sizeof(VAR_10->flc) + FUNC_5(VAR_11),
       VAR_7->dir);





 if (VAR_12 >= VAR_3) {
  VAR_7->cdata.key_inline = 1;
  VAR_7->cdata.key_virt = VAR_7->key;
 } else {
  VAR_7->cdata.key_inline = 0;
  VAR_7->cdata.key_dma = VAR_7->key_dma;
 }

 VAR_10 = &VAR_7->flc[VAR_1];
 VAR_11 = VAR_10->sh_desc;
 FUNC_0(VAR_11, &VAR_7->cdata, VAR_9, VAR_7->authsize, 1);
 VAR_10->flc[1] = FUNC_2(FUNC_6(VAR_11));
 FUNC_7(VAR_8, VAR_7->flc_dma[VAR_1],
       sizeof(VAR_10->flc) + FUNC_5(VAR_11),
       VAR_7->dir);

 return 0;
}
