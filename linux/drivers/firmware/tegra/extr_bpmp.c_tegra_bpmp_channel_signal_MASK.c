
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp_channel {int completion; TYPE_1__* ob; } ;
struct TYPE_2__ {unsigned long flags; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct tegra_bpmp_channel *VAR_1)
{
 unsigned long VAR_2 = VAR_1->ob->flags;

 if ((VAR_2 & VAR_0) == 0)
  return;

 FUNC_0(&VAR_1->completion);
}
