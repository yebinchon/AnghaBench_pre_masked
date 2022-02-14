
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ks_sa_rng {TYPE_1__* reg_rng; } ;
struct hwrng {scalar_t__ priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int intack; int output_h; int output_l; } ;


 int VAR_0 ;
 struct ks_sa_rng* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_1, u32 *VAR_2)
{
 struct device *VAR_3 = (struct device *)VAR_1->priv;
 struct ks_sa_rng *VAR_4 = FUNC_0(VAR_3);


 VAR_2[0] = FUNC_1(&VAR_4->reg_rng->output_l);
 VAR_2[1] = FUNC_1(&VAR_4->reg_rng->output_h);

 FUNC_2(VAR_0, &VAR_4->reg_rng->intack);

 return sizeof(u32) * 2;
}
