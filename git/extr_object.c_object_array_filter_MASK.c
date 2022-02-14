
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_array_entry {int dummy; } ;
struct object_array {unsigned int nr; struct object_array_entry* objects; } ;
typedef scalar_t__ (* object_array_each_func_t ) (struct object_array_entry*,void*) ;


 int FUNC_0 (struct object_array_entry*) ;

void FUNC_1(struct object_array *VAR_0,
    object_array_each_func_t VAR_1, void *VAR_2)
{
 unsigned VAR_3 = VAR_0->nr, VAR_4, VAR_5;
 struct object_array_entry *VAR_6 = VAR_0->objects;

 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_1(&VAR_6[VAR_4], VAR_2)) {
   if (VAR_4 != VAR_5)
    VAR_6[VAR_5] = VAR_6[VAR_4];
   VAR_5++;
  } else {
   FUNC_0(&VAR_6[VAR_4]);
  }
 }
 VAR_0->nr = VAR_5;
}
