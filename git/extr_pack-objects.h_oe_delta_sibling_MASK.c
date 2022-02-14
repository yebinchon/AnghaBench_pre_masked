
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {struct object_entry* objects; } ;
struct object_entry {int delta_sibling_idx; } ;



__attribute__((used)) static inline struct object_entry *FUNC_0(
  const struct packing_data *VAR_0,
  const struct object_entry *VAR_1)
{
 if (VAR_1->delta_sibling_idx)
  return &VAR_0->objects[VAR_1->delta_sibling_idx - 1];
 return ((void*)0);
}
