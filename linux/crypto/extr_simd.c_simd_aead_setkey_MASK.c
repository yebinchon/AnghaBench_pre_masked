
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct simd_aead_ctx {TYPE_1__* cryptd_tfm; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {struct crypto_aead base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct crypto_aead*,int) ;
 struct simd_aead_ctx* FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*,int) ;
 int FUNC_4 (struct crypto_aead*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct crypto_aead *VAR_2, const u8 *VAR_3,
    unsigned int VAR_4)
{
 struct simd_aead_ctx *VAR_5 = FUNC_1(VAR_2);
 struct crypto_aead *VAR_6 = &VAR_5->cryptd_tfm->base;
 int VAR_7;

 FUNC_0(VAR_6, VAR_0);
 FUNC_3(VAR_6, FUNC_2(VAR_2) &
         VAR_0);
 VAR_7 = FUNC_4(VAR_6, VAR_3, VAR_4);
 FUNC_3(VAR_2, FUNC_2(VAR_6) &
       VAR_1);
 return VAR_7;
}
