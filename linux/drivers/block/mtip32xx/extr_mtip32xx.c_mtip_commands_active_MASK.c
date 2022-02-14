
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtip_port {int * s_active; TYPE_1__* dd; } ;
struct TYPE_2__ {unsigned int slot_groups; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct mtip_port *VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2;





 VAR_1 = FUNC_0(VAR_0->s_active[0]) & 0xFFFFFFFE;
 for (VAR_2 = 1; VAR_2 < VAR_0->dd->slot_groups; VAR_2++)
  VAR_1 |= FUNC_0(VAR_0->s_active[VAR_2]);

 return VAR_1 != 0;
}
