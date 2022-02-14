
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_kbc {scalar_t__ mmio; TYPE_1__* hw_support; int wakeup; } ;
struct TYPE_2__ {int max_rows; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct tegra_kbc *VAR_1, bool VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;


 VAR_4 = (VAR_2 && !VAR_1->wakeup) ? ~0 : 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->hw_support->max_rows; VAR_3++)
  FUNC_0(VAR_4, VAR_1->mmio + VAR_0 + VAR_3 * 4);
}
