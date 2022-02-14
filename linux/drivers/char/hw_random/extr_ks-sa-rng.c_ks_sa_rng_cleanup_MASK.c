
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ks_sa_rng {int regmap_cfg; TYPE_1__* reg_rng; } ;
struct hwrng {scalar_t__ priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ks_sa_rng* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct hwrng *VAR_2)
{
 struct device *VAR_3 = (struct device *)VAR_2->priv;
 struct ks_sa_rng *VAR_4 = FUNC_0(VAR_3);


 FUNC_2(0, &VAR_4->reg_rng->control);
 FUNC_1(VAR_4->regmap_cfg, VAR_0,
     VAR_1, 0);
}
