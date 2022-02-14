
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {unsigned long* delta_size; struct object_entry const* objects; } ;
struct object_entry {unsigned long delta_size_; scalar_t__ delta_size_valid; } ;



__attribute__((used)) static inline unsigned long FUNC_0(struct packing_data *VAR_0,
       const struct object_entry *VAR_1)
{
 if (VAR_1->delta_size_valid)
  return VAR_1->delta_size_;
 return VAR_0->delta_size[VAR_1 - VAR_0->objects];
}
