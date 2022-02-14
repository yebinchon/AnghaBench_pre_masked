
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_bpmp_channel {struct tegra_bpmp* bpmp; } ;
struct tegra_bpmp {struct tegra_bpmp_channel* threaded_channels; TYPE_3__* soc; } ;
struct TYPE_4__ {unsigned int count; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;
struct TYPE_6__ {TYPE_2__ channels; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct tegra_bpmp_channel *VAR_1)
{
 struct tegra_bpmp *VAR_2 = VAR_1->bpmp;
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->soc->channels.thread.count;

 VAR_4 = VAR_1 - VAR_1->bpmp->threaded_channels;
 if (VAR_4 < 0 || VAR_4 >= VAR_3)
  return -VAR_0;

 return VAR_4;
}
