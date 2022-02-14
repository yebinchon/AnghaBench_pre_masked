
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrng {int dummy; } ;
struct bcm2835_rng_priv {int clk; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bcm2835_rng_priv*,int ,int ) ;
 struct bcm2835_rng_priv* FUNC_3 (struct hwrng*) ;

__attribute__((used)) static void FUNC_4(struct hwrng *VAR_1)
{
 struct bcm2835_rng_priv *VAR_2 = FUNC_3(VAR_1);


 FUNC_2(VAR_2, 0, VAR_0);

 if (!FUNC_0(VAR_2->clk))
  FUNC_1(VAR_2->clk);
}
