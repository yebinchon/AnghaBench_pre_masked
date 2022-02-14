
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct decoration_entry {void* decoration; struct object const* base; } ;
struct decoration {unsigned int size; struct decoration_entry* entries; } ;


 unsigned int FUNC_0 (struct object const*,unsigned int) ;

void *FUNC_1(struct decoration *VAR_0, const struct object *VAR_1)
{
 unsigned int VAR_2;


 if (!VAR_0->size)
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_1, VAR_0->size);
 for (;;) {
  struct decoration_entry *VAR_3 = VAR_0->entries + VAR_2;
  if (VAR_3->base == VAR_1)
   return VAR_3->decoration;
  if (!VAR_3->base)
   return ((void*)0);
  if (++VAR_2 == VAR_0->size)
   VAR_2 = 0;
 }
}
