
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {int dummy; } ;
struct object_entry {unsigned long size_; scalar_t__ size_valid; } ;


 unsigned long FUNC_0 (struct packing_data*,struct object_entry const*) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct packing_data *VAR_0,
        const struct object_entry *VAR_1)
{
 if (VAR_1->size_valid)
  return VAR_1->size_;

 return FUNC_0(VAR_0, VAR_1);
}
