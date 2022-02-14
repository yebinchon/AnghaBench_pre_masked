
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct zram {TYPE_1__* table; } ;
struct TYPE_2__ {unsigned long flags; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static void FUNC_0(struct zram *VAR_1,
     u32 VAR_2, size_t VAR_3)
{
 unsigned long VAR_4 = VAR_1->table[VAR_2].flags >> VAR_0;

 VAR_1->table[VAR_2].flags = (VAR_4 << VAR_0) | VAR_3;
}
