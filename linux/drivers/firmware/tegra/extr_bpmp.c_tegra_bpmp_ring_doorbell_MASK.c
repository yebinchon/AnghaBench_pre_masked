
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_bpmp {TYPE_2__* soc; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* ring_doorbell ) (struct tegra_bpmp*) ;} ;


 int FUNC_0 (struct tegra_bpmp*) ;

__attribute__((used)) static int FUNC_1(struct tegra_bpmp *VAR_0)
{
 return VAR_0->soc->ops->ring_doorbell(VAR_0);
}
