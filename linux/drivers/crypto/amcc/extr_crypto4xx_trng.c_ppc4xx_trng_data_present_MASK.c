
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {scalar_t__ priv; } ;
struct crypto4xx_device {scalar_t__ trng_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hwrng *VAR_2, int VAR_3)
{
 struct crypto4xx_device *VAR_4 = (void *)VAR_2->priv;
 int VAR_5, VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < 20; VAR_6++) {
  VAR_5 = (FUNC_0(VAR_4->trng_base + VAR_0) &
   VAR_1);
  if (!VAR_5 || !VAR_3) {
   VAR_7 = 1;
   break;
  }
  FUNC_1(10);
 }
 return VAR_7;
}
