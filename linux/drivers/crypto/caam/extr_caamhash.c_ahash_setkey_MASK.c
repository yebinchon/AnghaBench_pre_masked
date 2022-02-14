
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device {int parent; } ;
struct crypto_ahash {int base; } ;
struct TYPE_2__ {int key_inline; unsigned int keylen; unsigned int keylen_pad; int algtype; int key_dma; } ;
struct caam_hash_ctx {TYPE_1__ adata; int key; struct device* jrdev; } ;
struct caam_drv_private {int era; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct crypto_ahash*) ;
 struct caam_hash_ctx* FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 (struct crypto_ahash*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*,char*,unsigned int) ;
 struct caam_drv_private* FUNC_6 (int ) ;
 int FUNC_7 (struct device*,int ,unsigned int,int ) ;
 int FUNC_8 (struct device*,int ,TYPE_1__*,int const*,unsigned int,unsigned int) ;
 int FUNC_9 (struct caam_hash_ctx*,unsigned int*,int *,int) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int const*,unsigned int,int) ;
 int FUNC_12 (int ,int const*,unsigned int) ;
 unsigned int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct crypto_ahash *VAR_8,
   const u8 *VAR_9, unsigned int VAR_10)
{
 struct caam_hash_ctx *VAR_11 = FUNC_1(VAR_8);
 struct device *VAR_12 = VAR_11->jrdev;
 int VAR_13 = FUNC_4(&VAR_8->base);
 int VAR_14 = FUNC_2(VAR_8);
 struct caam_drv_private *VAR_15 = FUNC_6(VAR_11->jrdev->parent);
 int VAR_16;
 u8 *VAR_17 = ((void*)0);

 FUNC_5(VAR_12, "keylen %d\n", VAR_10);

 if (VAR_10 > VAR_13) {
  VAR_17 = FUNC_11(VAR_9, VAR_10, VAR_6 | VAR_5);
  if (!VAR_17)
   return -VAR_4;
  VAR_16 = FUNC_9(VAR_11, &VAR_10, VAR_17, VAR_14);
  if (VAR_16)
   goto bad_free_key;
  VAR_9 = VAR_17;
 }





 if (VAR_15->era >= 6) {
  VAR_11->adata.key_inline = 1;
  VAR_11->adata.keylen = VAR_10;
  VAR_11->adata.keylen_pad = FUNC_13(VAR_11->adata.algtype &
            VAR_7);

  if (VAR_11->adata.keylen_pad > VAR_0)
   goto bad_free_key;

  FUNC_12(VAR_11->key, VAR_9, VAR_10);







  if (VAR_10 > VAR_11->adata.keylen_pad)
   FUNC_7(VAR_11->jrdev,
         VAR_11->adata.key_dma,
         VAR_11->adata.keylen_pad,
         VAR_2);
 } else {
  VAR_16 = FUNC_8(VAR_11->jrdev, VAR_11->key, &VAR_11->adata, VAR_9,
        VAR_10, VAR_0);
  if (VAR_16)
   goto bad_free_key;
 }

 FUNC_10(VAR_17);
 return FUNC_0(VAR_8);
 bad_free_key:
 FUNC_10(VAR_17);
 FUNC_3(VAR_8, VAR_1);
 return -VAR_3;
}
