
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hwrng {int dummy; } ;
struct bcm2835_rng_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct bcm2835_rng_priv*,int ) ;
 struct bcm2835_rng_priv* FUNC_2 (struct hwrng*) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_2, void *VAR_3, size_t VAR_4,
          bool VAR_5)
{
 struct bcm2835_rng_priv *VAR_6 = FUNC_2(VAR_2);
 u32 VAR_7 = VAR_4 / sizeof(u32);
 u32 VAR_8, VAR_9;

 while ((FUNC_1(VAR_6, VAR_1) >> 24) == 0) {
  if (!VAR_5)
   return 0;
  FUNC_0();
 }

 VAR_8 = FUNC_1(VAR_6, VAR_1) >> 24;
 if (VAR_8 > VAR_7)
  VAR_8 = VAR_7;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  ((u32 *)VAR_3)[VAR_9] = FUNC_1(VAR_6, VAR_0);

 return VAR_8 * sizeof(u32);
}
