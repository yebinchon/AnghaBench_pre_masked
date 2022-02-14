
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gmbus {int gpio_reg; TYPE_1__* dev_priv; } ;
struct TYPE_2__ {struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_gmbus*) ;
 int FUNC_1 (struct intel_uncore*,int ) ;
 int FUNC_2 (struct intel_uncore*,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_2)
{
 struct intel_gmbus *VAR_3 = VAR_2;
 struct intel_uncore *VAR_4 = &VAR_3->dev_priv->uncore;
 u32 VAR_5 = FUNC_0(VAR_3);

 FUNC_2(VAR_4,
       VAR_3->gpio_reg,
       VAR_5 | VAR_0);
 FUNC_2(VAR_4, VAR_3->gpio_reg, VAR_5);

 return (FUNC_1(VAR_4, VAR_3->gpio_reg) &
  VAR_1) != 0;
}
