
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_array {int nr; int alloc; int * objects; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct object_array *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->nr; VAR_1++)
  FUNC_1(&VAR_0->objects[VAR_1]);
 FUNC_0(VAR_0->objects);
 VAR_0->nr = VAR_0->alloc = 0;
}
