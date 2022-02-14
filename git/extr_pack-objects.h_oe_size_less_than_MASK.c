
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {unsigned long oe_size_limit; } ;
struct object_entry {unsigned long size_; scalar_t__ size_valid; } ;


 unsigned long FUNC_0 (struct packing_data*,struct object_entry const*) ;

__attribute__((used)) static inline int FUNC_1(struct packing_data *VAR_0,
        const struct object_entry *VAR_1,
        unsigned long VAR_2)
{
 if (VAR_1->size_valid)
  return VAR_1->size_ < VAR_2;
 if (VAR_2 < VAR_0->oe_size_limit)
  return 0;
 return FUNC_0(VAR_0, VAR_1) < VAR_2;
}
