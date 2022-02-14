
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int crt_flags; } ;
struct crypto_skcipher {TYPE_1__ base; } ;
struct cast6_xts_ctx {int tweak_ctx; int crypt_ctx; } ;


 int FUNC_0 (int *,int const*,unsigned int,int *) ;
 struct cast6_xts_ctx* FUNC_1 (struct crypto_skcipher*) ;
 int FUNC_2 (struct crypto_skcipher*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct crypto_skcipher *VAR_0, const u8 *VAR_1,
       unsigned int VAR_2)
{
 struct cast6_xts_ctx *VAR_3 = FUNC_1(VAR_0);
 u32 *VAR_4 = &VAR_0->base.crt_flags;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_0(&VAR_3->crypt_ctx, VAR_1, VAR_2 / 2, VAR_4);
 if (VAR_5)
  return VAR_5;


 return FUNC_0(&VAR_3->tweak_ctx, VAR_1 + VAR_2 / 2, VAR_2 / 2,
         VAR_4);
}
