
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_ahash {int base; } ;
struct TYPE_2__ {unsigned int keylen; unsigned int keylen_pad; int algtype; int key_inline; int key_dma; int const* key_virt; } ;
struct caam_hash_ctx {TYPE_1__ adata; int dev; int key; } ;


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
 unsigned int FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 (struct crypto_ahash*,int ) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,unsigned int,int ) ;
 int FUNC_7 (struct caam_hash_ctx*,unsigned int*,int *,unsigned int) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int const*,unsigned int,int) ;
 int FUNC_10 (int ,int const*,unsigned int) ;
 unsigned int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct crypto_ahash *VAR_8, const u8 *VAR_9,
   unsigned int VAR_10)
{
 struct caam_hash_ctx *VAR_11 = FUNC_1(VAR_8);
 unsigned int VAR_12 = FUNC_4(&VAR_8->base);
 unsigned int VAR_13 = FUNC_2(VAR_8);
 int VAR_14;
 u8 *VAR_15 = ((void*)0);

 FUNC_5(VAR_11->dev, "keylen %d blocksize %d\n", VAR_10, VAR_12);

 if (VAR_10 > VAR_12) {
  VAR_15 = FUNC_9(VAR_9, VAR_10, VAR_6 | VAR_5);
  if (!VAR_15)
   return -VAR_4;
  VAR_14 = FUNC_7(VAR_11, &VAR_10, VAR_15, VAR_13);
  if (VAR_14)
   goto bad_free_key;
  VAR_9 = VAR_15;
 }

 VAR_11->adata.keylen = VAR_10;
 VAR_11->adata.keylen_pad = FUNC_11(VAR_11->adata.algtype &
           VAR_7);
 if (VAR_11->adata.keylen_pad > VAR_0)
  goto bad_free_key;

 VAR_11->adata.key_virt = VAR_9;
 VAR_11->adata.key_inline = 1;







 if (VAR_10 > VAR_11->adata.keylen_pad) {
  FUNC_10(VAR_11->key, VAR_9, VAR_10);
  FUNC_6(VAR_11->dev, VAR_11->adata.key_dma,
        VAR_11->adata.keylen_pad,
        VAR_2);
 }

 VAR_14 = FUNC_0(VAR_8);
 FUNC_8(VAR_15);
 return VAR_14;
bad_free_key:
 FUNC_8(VAR_15);
 FUNC_3(VAR_8, VAR_1);
 return -VAR_3;
}
