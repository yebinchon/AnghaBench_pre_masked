
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct prng_context {int dummy; } ;
struct crypto_rng {int dummy; } ;


 struct prng_context* FUNC_0 (struct crypto_rng*) ;
 int FUNC_1 (int *,unsigned int,struct prng_context*,int ) ;

__attribute__((used)) static int FUNC_2(struct crypto_rng *VAR_0,
       const u8 *VAR_1, unsigned int VAR_2,
       u8 *VAR_3, unsigned int VAR_4)
{
 struct prng_context *VAR_5 = FUNC_0(VAR_0);

 return FUNC_1(VAR_3, VAR_4, VAR_5, 0);
}
