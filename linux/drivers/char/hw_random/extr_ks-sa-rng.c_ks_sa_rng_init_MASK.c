
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ks_sa_rng {TYPE_1__* reg_rng; int regmap_cfg; } ;
struct hwrng {scalar_t__ priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int control; int intmask; int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct ks_sa_rng* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct hwrng *VAR_11)
{
 u32 VAR_12;
 struct device *VAR_13 = (struct device *)VAR_11->priv;
 struct ks_sa_rng *VAR_14 = FUNC_0(VAR_13);


 FUNC_2(VAR_14->regmap_cfg, VAR_0,
     VAR_1,
     VAR_1);


 FUNC_3(0, &VAR_14->reg_rng->control);
 VAR_12 = VAR_10 << VAR_5;
 FUNC_3(VAR_12, &VAR_14->reg_rng->control);

 VAR_12 = (VAR_9 <<
   VAR_3) |
  (VAR_8 <<
   VAR_2) |
  (VAR_7 <<
   VAR_4);

 FUNC_3(VAR_12, &VAR_14->reg_rng->config);


 FUNC_3(0, &VAR_14->reg_rng->intmask);


 VAR_12 = FUNC_1(&VAR_14->reg_rng->control);
 VAR_12 |= VAR_6;
 FUNC_3(VAR_12, &VAR_14->reg_rng->control);

 return 0;
}
