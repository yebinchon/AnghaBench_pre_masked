
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packing_data {unsigned int* in_pack_pos; struct object_entry const* objects; } ;
struct object_entry {int dummy; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct packing_data *VAR_0,
       const struct object_entry *VAR_1)
{
 return VAR_0->in_pack_pos[VAR_1 - VAR_0->objects];
}
