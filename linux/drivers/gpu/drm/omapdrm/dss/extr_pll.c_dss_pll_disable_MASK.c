
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_pll {int cinfo; int clkin; scalar_t__ regulator; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* disable ) (struct dss_pll*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct dss_pll*) ;

void FUNC_4(struct dss_pll *VAR_0)
{
 VAR_0->ops->disable(VAR_0);

 if (VAR_0->regulator)
  FUNC_2(VAR_0->regulator);

 FUNC_0(VAR_0->clkin);

 FUNC_1(&VAR_0->cinfo, 0, sizeof(VAR_0->cinfo));
}
