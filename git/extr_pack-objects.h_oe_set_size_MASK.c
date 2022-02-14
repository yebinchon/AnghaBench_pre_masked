
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {unsigned long oe_size_limit; } ;
struct object_entry {unsigned long size_; int size_valid; } ;


 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (struct packing_data*,struct object_entry*) ;

__attribute__((used)) static inline void FUNC_2(struct packing_data *VAR_0,
          struct object_entry *VAR_1,
          unsigned long VAR_2)
{
 if (VAR_2 < VAR_0->oe_size_limit) {
  VAR_1->size_ = VAR_2;
  VAR_1->size_valid = 1;
 } else {
  VAR_1->size_valid = 0;
  if (FUNC_1(VAR_0, VAR_1) != VAR_2)
   FUNC_0("'size' is supposed to be the object size!");
 }
}
