
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_ops {int dummy; } ;
struct tegra_bpmp_channel {struct tegra_bpmp* bpmp; } ;
struct tegra_bpmp {TYPE_1__* soc; } ;
struct TYPE_2__ {struct tegra_bpmp_ops const* ops; } ;



__attribute__((used)) static inline const struct tegra_bpmp_ops *
FUNC_0(struct tegra_bpmp_channel *VAR_0)
{
 struct tegra_bpmp *VAR_1 = VAR_0->bpmp;

 return VAR_1->soc->ops;
}
