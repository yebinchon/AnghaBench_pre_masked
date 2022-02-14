
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct device {int dummy; } ;
struct crypto_skcipher {int dummy; } ;
struct caam_flc {void** flc; int * sh_desc; } ;
struct TYPE_3__ {unsigned int keylen; int key_inline; int const* key_virt; } ;
struct caam_ctx {int dir; int * flc_dma; TYPE_1__ cdata; struct caam_flc* flc; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 void* FUNC_2 (int ) ;
 struct caam_ctx* FUNC_3 (struct crypto_skcipher*) ;
 int FUNC_4 (struct crypto_skcipher*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct device*,int ,int,int ) ;

__attribute__((used)) static int FUNC_9(struct crypto_skcipher *VAR_6, const u8 *VAR_7,
          unsigned int VAR_8)
{
 struct caam_ctx *VAR_9 = FUNC_3(VAR_6);
 struct device *VAR_10 = VAR_9->dev;
 struct caam_flc *VAR_11;
 u32 *VAR_12;

 if (VAR_8 != 2 * VAR_1 && VAR_8 != 2 * VAR_0) {
  FUNC_7(VAR_10, "key size mismatch\n");
  FUNC_4(VAR_6, VAR_2);
  return -VAR_4;
 }

 VAR_9->cdata.keylen = VAR_8;
 VAR_9->cdata.key_virt = VAR_7;
 VAR_9->cdata.key_inline = 1;


 VAR_11 = &VAR_9->flc[VAR_5];
 VAR_12 = VAR_11->sh_desc;
 FUNC_1(VAR_12, &VAR_9->cdata);
 VAR_11->flc[1] = FUNC_2(FUNC_6(VAR_12));
 FUNC_8(VAR_10, VAR_9->flc_dma[VAR_5],
       sizeof(VAR_11->flc) + FUNC_5(VAR_12),
       VAR_9->dir);


 VAR_11 = &VAR_9->flc[VAR_3];
 VAR_12 = VAR_11->sh_desc;
 FUNC_0(VAR_12, &VAR_9->cdata);
 VAR_11->flc[1] = FUNC_2(FUNC_6(VAR_12));
 FUNC_8(VAR_10, VAR_9->flc_dma[VAR_3],
       sizeof(VAR_11->flc) + FUNC_5(VAR_12),
       VAR_9->dir);

 return 0;
}
