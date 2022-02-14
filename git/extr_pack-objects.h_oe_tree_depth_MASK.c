
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {unsigned int* tree_depth; struct object_entry* objects; } ;
struct object_entry {int dummy; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct packing_data *VAR_0,
      struct object_entry *VAR_1)
{
 if (!VAR_0->tree_depth)
  return 0;
 return VAR_0->tree_depth[VAR_1 - VAR_0->objects];
}
