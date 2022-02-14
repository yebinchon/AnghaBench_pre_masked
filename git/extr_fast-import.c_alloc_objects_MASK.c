
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_entry_pool {scalar_t__ entries; scalar_t__ end; scalar_t__ next_free; struct object_entry_pool* next_pool; } ;
struct object_entry {int dummy; } ;


 unsigned int VAR_0 ;
 struct object_entry_pool* VAR_1 ;
 struct object_entry_pool* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2)
{
 struct object_entry_pool *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct object_entry_pool)
  + VAR_2 * sizeof(struct object_entry));
 VAR_3->next_pool = VAR_1;
 VAR_3->next_free = VAR_3->entries;
 VAR_3->end = VAR_3->entries + VAR_2;
 VAR_1 = VAR_3;
 VAR_0 += VAR_2;
}
