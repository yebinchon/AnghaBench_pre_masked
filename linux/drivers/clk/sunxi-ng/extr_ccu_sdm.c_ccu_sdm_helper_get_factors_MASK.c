
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccu_sdm_internal {unsigned int table_size; TYPE_1__* table; } ;
struct ccu_common {int features; } ;
struct TYPE_2__ {unsigned long rate; unsigned long m; unsigned long n; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct ccu_common *VAR_2,
          struct ccu_sdm_internal *VAR_3,
          unsigned long VAR_4,
          unsigned long *VAR_5, unsigned long *VAR_6)
{
 unsigned int VAR_7;

 if (!(VAR_2->features & VAR_0))
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_3->table_size; VAR_7++)
  if (VAR_3->table[VAR_7].rate == VAR_4) {
   *VAR_5 = VAR_3->table[VAR_7].m;
   *VAR_6 = VAR_3->table[VAR_7].n;
   return 0;
  }


 return -VAR_1;
}
