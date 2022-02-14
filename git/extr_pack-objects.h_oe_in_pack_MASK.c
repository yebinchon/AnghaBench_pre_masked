
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {struct object_entry const* objects; struct packed_git** in_pack; struct packed_git** in_pack_by_idx; } ;
struct packed_git {int dummy; } ;
struct object_entry {size_t in_pack_idx; } ;



__attribute__((used)) static inline struct packed_git *FUNC_0(const struct packing_data *VAR_0,
         const struct object_entry *VAR_1)
{
 if (VAR_0->in_pack_by_idx)
  return VAR_0->in_pack_by_idx[VAR_1->in_pack_idx];
 else
  return VAR_0->in_pack[VAR_1 - VAR_0->objects];
}
