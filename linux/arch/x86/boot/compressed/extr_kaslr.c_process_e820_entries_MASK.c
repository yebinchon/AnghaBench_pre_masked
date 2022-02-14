
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_vector {int size; int start; } ;
struct boot_e820_entry {scalar_t__ type; int size; int addr; } ;
struct TYPE_2__ {int e820_entries; struct boot_e820_entry* e820_table; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (struct mem_vector*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2,
     unsigned long VAR_3)
{
 int VAR_4;
 struct mem_vector VAR_5;
 struct boot_e820_entry *VAR_6;


 for (VAR_4 = 0; VAR_4 < VAR_1->e820_entries; VAR_4++) {
  VAR_6 = &VAR_1->e820_table[VAR_4];

  if (VAR_6->type != VAR_0)
   continue;
  VAR_5.start = VAR_6->addr;
  VAR_5.size = VAR_6->size;
  if (FUNC_0(&VAR_5, VAR_2, VAR_3))
   break;
 }
}
