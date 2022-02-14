
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {struct object_entry* objects; struct packed_git** in_pack; scalar_t__ in_pack_by_idx; } ;
struct packed_git {scalar_t__ index; } ;
struct object_entry {scalar_t__ in_pack_idx; } ;


 int FUNC_0 (struct packing_data*) ;

__attribute__((used)) static inline void FUNC_1(struct packing_data *VAR_0,
      struct object_entry *VAR_1,
      struct packed_git *VAR_2)
{
 if (!VAR_2->index)
  FUNC_0(VAR_0);
 if (VAR_0->in_pack_by_idx)
  VAR_1->in_pack_idx = VAR_2->index;
 else
  VAR_0->in_pack[VAR_1 - VAR_0->objects] = VAR_2;
}
