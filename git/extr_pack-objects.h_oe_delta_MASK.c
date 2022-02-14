
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {struct object_entry* objects; struct object_entry* ext_bases; } ;
struct object_entry {int delta_idx; scalar_t__ ext_base; } ;



__attribute__((used)) static inline struct object_entry *FUNC_0(
  const struct packing_data *VAR_0,
  const struct object_entry *VAR_1)
{
 if (!VAR_1->delta_idx)
  return ((void*)0);
 if (VAR_1->ext_base)
  return &VAR_0->ext_bases[VAR_1->delta_idx - 1];
 else
  return &VAR_0->objects[VAR_1->delta_idx - 1];
}
