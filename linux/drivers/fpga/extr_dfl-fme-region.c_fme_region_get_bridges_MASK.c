
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_region {int bridge_list; int info; struct dfl_fme_region_pdata* priv; } ;
struct dfl_fme_region_pdata {TYPE_1__* br; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct fpga_region *VAR_0)
{
 struct dfl_fme_region_pdata *VAR_1 = VAR_0->priv;
 struct device *VAR_2 = &VAR_1->br->dev;

 return FUNC_0(VAR_2, VAR_0->info, &VAR_0->bridge_list);
}
