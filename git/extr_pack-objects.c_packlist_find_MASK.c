
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct packing_data {int* index; struct object_entry* objects; int index_size; } ;
struct object_id {int dummy; } ;
struct object_entry {int dummy; } ;


 size_t FUNC_0 (struct packing_data*,struct object_id const*,int*) ;

struct object_entry *FUNC_1(struct packing_data *VAR_0,
       const struct object_id *VAR_1)
{
 uint32_t VAR_2;
 int VAR_3;

 if (!VAR_0->index_size)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_0, VAR_1, &VAR_3);

 if (!VAR_3)
  return ((void*)0);

 return &VAR_0->objects[VAR_0->index[VAR_2] - 1];
}
