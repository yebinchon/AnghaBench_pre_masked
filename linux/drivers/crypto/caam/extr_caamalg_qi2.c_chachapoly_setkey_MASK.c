
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {unsigned int keylen; int const* key_virt; } ;
struct caam_ctx {TYPE_1__ cdata; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct crypto_aead*) ;
 struct caam_ctx* FUNC_1 (struct crypto_aead*) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_aead *VAR_4, const u8 *VAR_5,
        unsigned int VAR_6)
{
 struct caam_ctx *VAR_7 = FUNC_1(VAR_4);
 unsigned int VAR_8 = FUNC_2(VAR_4);
 unsigned int VAR_9 = VAR_0 - VAR_8;

 if (VAR_6 != VAR_1 + VAR_9) {
  FUNC_3(VAR_4, VAR_2);
  return -VAR_3;
 }

 VAR_7->cdata.key_virt = VAR_5;
 VAR_7->cdata.keylen = VAR_6 - VAR_9;

 return FUNC_0(VAR_4);
}
