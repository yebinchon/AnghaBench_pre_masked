
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_priv {TYPE_1__* inb_atmu_regs; } ;
struct TYPE_2__ {int riwar; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct rio_priv *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->inb_atmu_regs[VAR_2].riwar, 0);
}
