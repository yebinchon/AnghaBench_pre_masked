
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct configuration_entry {int dummy; } ;
struct configuration {size_t entries_size; struct configuration_entry** entries; } ;


 int FUNC_0 (struct configuration_entry* (*) (struct configuration*,size_t)) ;
 int FUNC_1 (struct configuration_entry* (*) (struct configuration*,size_t)) ;
 int FUNC_2 (int) ;

struct configuration_entry *
FUNC_3(struct configuration *VAR_0, size_t VAR_1)
{
 FUNC_0(FUNC_3);
 FUNC_2(VAR_0 != ((void*)0));
 FUNC_2(VAR_1 < VAR_0->entries_size);
 FUNC_1(FUNC_3);
 return (VAR_0->entries[VAR_1]);
}
