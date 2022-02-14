
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mcs814x_rng_priv {scalar_t__ priv; } ;
struct hwrng {scalar_t__ priv; } ;


 int FUNC_0 (struct mcs814x_rng_priv*) ;
 int FUNC_1 (struct mcs814x_rng_priv*) ;
 struct mcs814x_rng_priv* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct hwrng *VAR_1 = FUNC_2(VAR_0);
 struct mcs814x_rng_priv *VAR_2 = (struct mcs814x_rng_priv *)VAR_1->priv;

 FUNC_0(VAR_1);
 FUNC_1(VAR_2);
 FUNC_1(VAR_1);
 FUNC_3(VAR_0, ((void*)0));

 return 0;
}
