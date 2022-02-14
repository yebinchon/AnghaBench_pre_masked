
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {struct object_entry* objects; } ;
struct object_entry {int delta_sibling_idx; } ;



__attribute__((used)) static inline void FUNC_0(struct packing_data *VAR_0,
     struct object_entry *VAR_1,
     struct object_entry *VAR_2)
{
 if (VAR_2)
  VAR_1->delta_sibling_idx = (VAR_2 - VAR_0->objects) + 1;
 else
  VAR_1->delta_sibling_idx = 0;
}
