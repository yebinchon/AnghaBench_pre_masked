
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct prng_context {int flags; } ;
struct crypto_rng {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct prng_context* FUNC_0 (struct crypto_rng*) ;
 int FUNC_1 (struct prng_context*,int const*,int,int const*,int const*) ;

__attribute__((used)) static int FUNC_2(struct crypto_rng *VAR_4,
         const u8 *VAR_5, unsigned int VAR_6)
{
 struct prng_context *VAR_7 = FUNC_0(VAR_4);
 const u8 *VAR_8 = VAR_5 + VAR_0;
 const u8 *VAR_9 = ((void*)0);

 if (VAR_6 < VAR_1 + VAR_0)
  return -VAR_2;

 if (VAR_6 >= (2 * VAR_0 + VAR_1))
  VAR_9 = VAR_8 + VAR_1;

 FUNC_1(VAR_7, VAR_8, VAR_1, VAR_5, VAR_9);

 if (VAR_7->flags & VAR_3)
  return -VAR_2;
 return 0;
}
