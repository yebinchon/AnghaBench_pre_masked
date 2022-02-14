
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {unsigned long oe_delta_size_limit; unsigned long* delta_size; struct object_entry* objects; int nr_alloc; } ;
struct object_entry {unsigned long delta_size_; int delta_size_valid; } ;


 int FUNC_0 (unsigned long*,int ) ;
 int FUNC_1 (struct packing_data*) ;
 int FUNC_2 (struct packing_data*) ;

__attribute__((used)) static inline void FUNC_3(struct packing_data *VAR_0,
         struct object_entry *VAR_1,
         unsigned long VAR_2)
{
 if (VAR_2 < VAR_0->oe_delta_size_limit) {
  VAR_1->delta_size_ = VAR_2;
  VAR_1->delta_size_valid = 1;
 } else {
  FUNC_1(VAR_0);
  if (!VAR_0->delta_size)
   FUNC_0(VAR_0->delta_size, VAR_0->nr_alloc);
  FUNC_2(VAR_0);

  VAR_0->delta_size[VAR_1 - VAR_0->objects] = VAR_2;
  VAR_1->delta_size_valid = 0;
 }
}
