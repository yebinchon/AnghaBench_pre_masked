
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct crypto_tfm {int dummy; } ;
struct crypto_sparc64_aes_ctx {int * key; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* decrypt ) (int *,int const*,int *) ;} ;


 struct crypto_sparc64_aes_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int *,int const*,int *) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0, u8 *VAR_1, const u8 *VAR_2)
{
 struct crypto_sparc64_aes_ctx *VAR_3 = FUNC_0(VAR_0);

 VAR_3->ops->decrypt(&VAR_3->key[0], (const u32 *) VAR_2, (u32 *) VAR_1);
}
