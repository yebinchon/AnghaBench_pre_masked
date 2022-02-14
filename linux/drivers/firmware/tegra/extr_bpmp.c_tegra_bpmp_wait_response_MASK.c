
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tegra_bpmp_channel {TYPE_4__* bpmp; } ;
typedef int ktime_t ;
struct TYPE_8__ {TYPE_3__* soc; } ;
struct TYPE_5__ {unsigned long timeout; } ;
struct TYPE_6__ {TYPE_1__ cpu_tx; } ;
struct TYPE_7__ {TYPE_2__ channels; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct tegra_bpmp_channel*) ;

__attribute__((used)) static int FUNC_4(struct tegra_bpmp_channel *VAR_1)
{
 unsigned long VAR_2 = VAR_1->bpmp->soc->channels.cpu_tx.timeout;
 ktime_t VAR_3;

 VAR_3 = FUNC_0(FUNC_2(), VAR_2);

 do {
  if (FUNC_3(VAR_1))
   return 0;
 } while (FUNC_1(FUNC_2(), VAR_3));

 return -VAR_0;
}
