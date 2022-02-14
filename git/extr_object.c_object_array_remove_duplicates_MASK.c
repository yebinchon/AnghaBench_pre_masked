
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_array_entry {int name; } ;
struct object_array {unsigned int nr; struct object_array_entry* objects; } ;


 int FUNC_0 (struct object_array*,int ) ;
 int FUNC_1 (struct object_array_entry*) ;

void FUNC_2(struct object_array *VAR_0)
{
 unsigned VAR_1 = VAR_0->nr, VAR_2;
 struct object_array_entry *VAR_3 = VAR_0->objects;

 VAR_0->nr = 0;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (!FUNC_0(VAR_0, VAR_3[VAR_2].name)) {
   if (VAR_2 != VAR_0->nr)
    VAR_3[VAR_0->nr] = VAR_3[VAR_2];
   VAR_0->nr++;
  } else {
   FUNC_1(&VAR_3[VAR_2]);
  }
 }
}
