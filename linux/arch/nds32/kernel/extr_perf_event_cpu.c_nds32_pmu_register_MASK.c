
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nds32_pmu {int name; int pmu; int num_events; TYPE_1__* plat_device; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct nds32_pmu*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,int ) ;

int FUNC_4(struct nds32_pmu *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->plat_device->dev);
 FUNC_3("enabled with %s PMU driver, %d counters available\n",
  VAR_0->name, VAR_0->num_events);
 return FUNC_1(&VAR_0->pmu, VAR_0->name, VAR_1);
}
