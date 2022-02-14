
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct TYPE_3__ {int keylen; int key_inline; int key_dma; int key_virt; } ;
struct caam_ctx {int authsize; TYPE_1__ cdata; int sh_desc_dec; int key_dma; int key; int sh_desc_enc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,unsigned int,int ,int) ;
 int FUNC_1 (int ,TYPE_1__*,unsigned int,int ,int) ;
 struct caam_ctx* FUNC_2 (struct crypto_aead*) ;
 unsigned int FUNC_3 (struct crypto_aead*) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_4)
{
 struct caam_ctx *VAR_5 = FUNC_2(VAR_4);
 unsigned int VAR_6 = FUNC_3(VAR_4);
 int VAR_7 = VAR_0 - VAR_1 -
   VAR_5->cdata.keylen;

 if (!VAR_5->cdata.keylen || !VAR_5->authsize)
  return 0;





 if (VAR_7 >= VAR_3) {
  VAR_5->cdata.key_inline = 1;
  VAR_5->cdata.key_virt = VAR_5->key;
 } else {
  VAR_5->cdata.key_inline = 0;
  VAR_5->cdata.key_dma = VAR_5->key_dma;
 }

 FUNC_1(VAR_5->sh_desc_enc, &VAR_5->cdata, VAR_6,
         VAR_5->authsize, 1);





 if (VAR_7 >= VAR_2) {
  VAR_5->cdata.key_inline = 1;
  VAR_5->cdata.key_virt = VAR_5->key;
 } else {
  VAR_5->cdata.key_inline = 0;
  VAR_5->cdata.key_dma = VAR_5->key_dma;
 }

 FUNC_0(VAR_5->sh_desc_dec, &VAR_5->cdata, VAR_6,
         VAR_5->authsize, 1);

 return 0;
}
