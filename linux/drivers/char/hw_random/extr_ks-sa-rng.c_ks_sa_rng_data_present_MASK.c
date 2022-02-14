
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ks_sa_rng {TYPE_1__* reg_rng; } ;
struct hwrng {scalar_t__ priv; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ks_sa_rng* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hwrng *VAR_3, int VAR_4)
{
 struct device *VAR_5 = (struct device *)VAR_3->priv;
 struct ks_sa_rng *VAR_6 = FUNC_0(VAR_5);

 u32 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_7 = FUNC_1(&VAR_6->reg_rng->status);
  VAR_7 &= VAR_2;

  if (VAR_7 || !VAR_4)
   break;

  FUNC_2(VAR_1);
 }

 return VAR_7;
}
