
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrng {scalar_t__ priv; } ;
struct exynos_trng_dev {scalar_t__ mem; int dev; int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_6)
{
 struct exynos_trng_dev *VAR_7 = (struct exynos_trng_dev *)VAR_6->priv;
 unsigned long VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_0(VAR_7->clk);





 VAR_9 = VAR_8 / (VAR_2 * 2);
 if (VAR_9 > 0x7fff) {
  FUNC_1(VAR_7->dev, "clock divider too large: %d", VAR_9);
  return -VAR_0;
 }
 VAR_9 = VAR_9 << 1;
 FUNC_2(VAR_9, VAR_7->mem + VAR_1);


 VAR_9 = VAR_4;
 FUNC_2(VAR_9, VAR_7->mem + VAR_3);





 FUNC_2(0, VAR_7->mem + VAR_5);

 return 0;
}
