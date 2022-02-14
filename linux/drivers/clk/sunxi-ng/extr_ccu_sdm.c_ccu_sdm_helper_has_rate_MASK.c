
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccu_sdm_internal {unsigned int table_size; TYPE_1__* table; } ;
struct ccu_common {int features; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int VAR_0 ;

bool FUNC_0(struct ccu_common *VAR_1,
        struct ccu_sdm_internal *VAR_2,
        unsigned long VAR_3)
{
 unsigned int VAR_4;

 if (!(VAR_1->features & VAR_0))
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->table_size; VAR_4++)
  if (VAR_2->table[VAR_4].rate == VAR_3)
   return 1;

 return 0;
}
