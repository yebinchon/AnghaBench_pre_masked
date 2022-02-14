
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrng {scalar_t__ priv; } ;
struct crypto4xx_device {scalar_t__ trng_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct hwrng *VAR_1, u32 *VAR_2)
{
 struct crypto4xx_device *VAR_3 = (void *)VAR_1->priv;
 *VAR_2 = FUNC_0(VAR_3->trng_base + VAR_0);
 return 4;
}
