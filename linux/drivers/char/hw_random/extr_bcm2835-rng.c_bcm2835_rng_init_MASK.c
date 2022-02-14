
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hwrng {int dummy; } ;
struct bcm2835_rng_priv {scalar_t__ mask_interrupts; int clk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bcm2835_rng_priv*,int ) ;
 int FUNC_3 (struct bcm2835_rng_priv*,int ,int ) ;
 struct bcm2835_rng_priv* FUNC_4 (struct hwrng*) ;

__attribute__((used)) static int FUNC_5(struct hwrng *VAR_6)
{
 struct bcm2835_rng_priv *VAR_7 = FUNC_4(VAR_6);
 int VAR_8 = 0;
 u32 VAR_9;

 if (!FUNC_0(VAR_7->clk)) {
  VAR_8 = FUNC_1(VAR_7->clk);
  if (VAR_8)
   return VAR_8;
 }

 if (VAR_7->mask_interrupts) {

  VAR_9 = FUNC_2(VAR_7, VAR_1);
  VAR_9 |= VAR_2;
  FUNC_3(VAR_7, VAR_9, VAR_1);
 }


 FUNC_3(VAR_7, VAR_5, VAR_4);
 FUNC_3(VAR_7, VAR_3, VAR_0);

 return VAR_8;
}
