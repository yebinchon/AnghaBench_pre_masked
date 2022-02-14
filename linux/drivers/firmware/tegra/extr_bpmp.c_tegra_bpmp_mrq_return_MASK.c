
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_bpmp_channel {TYPE_1__* ob; struct tegra_bpmp* bpmp; TYPE_2__* ib; } ;
struct tegra_bpmp {int dummy; } ;
struct TYPE_4__ {unsigned long flags; } ;
struct TYPE_3__ {int code; int data; } ;


 unsigned long VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,void const*,size_t) ;
 int FUNC_2 (struct tegra_bpmp_channel*) ;
 int FUNC_3 (struct tegra_bpmp_channel*) ;
 int FUNC_4 (struct tegra_bpmp_channel*) ;
 int FUNC_5 (struct tegra_bpmp*) ;

void FUNC_6(struct tegra_bpmp_channel *VAR_3, int VAR_4,
      const void *VAR_5, size_t VAR_6)
{
 unsigned long VAR_7 = VAR_3->ib->flags;
 struct tegra_bpmp *VAR_8 = VAR_3->bpmp;
 int VAR_9;

 if (FUNC_0(VAR_6 > VAR_1))
  return;

 VAR_9 = FUNC_2(VAR_3);
 if (FUNC_0(VAR_9 < 0))
  return;

 if ((VAR_7 & VAR_0) == 0)
  return;

 if (FUNC_0(!FUNC_3(VAR_3)))
  return;

 VAR_3->ob->code = VAR_4;

 if (VAR_5 && VAR_6 > 0)
  FUNC_1(VAR_3->ob->data, VAR_5, VAR_6);

 VAR_9 = FUNC_4(VAR_3);
 if (FUNC_0(VAR_9 < 0))
  return;

 if (VAR_7 & VAR_2) {
  VAR_9 = FUNC_5(VAR_8);
  if (FUNC_0(VAR_9 < 0))
   return;
 }
}
