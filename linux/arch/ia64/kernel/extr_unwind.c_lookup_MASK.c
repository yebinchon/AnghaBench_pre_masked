
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_table_entry {unsigned long start_offset; unsigned long end_offset; } ;
struct unw_table {unsigned long length; struct unw_table_entry* array; } ;



__attribute__((used)) static inline const struct unw_table_entry *
FUNC_0 (struct unw_table *VAR_0, unsigned long VAR_1)
{
 const struct unw_table_entry *VAR_2 = ((void*)0);
 unsigned long VAR_3, VAR_4, VAR_5;


 for (VAR_3 = 0, VAR_4 = VAR_0->length; VAR_3 < VAR_4; ) {
  VAR_5 = (VAR_3 + VAR_4) / 2;
  VAR_2 = &VAR_0->array[VAR_5];
  if (VAR_1 < VAR_2->start_offset)
   VAR_4 = VAR_5;
  else if (VAR_1 >= VAR_2->end_offset)
   VAR_3 = VAR_5 + 1;
  else
   break;
 }
 if (VAR_1 < VAR_2->start_offset || VAR_1 >= VAR_2->end_offset)
  return ((void*)0);
 return VAR_2;
}
