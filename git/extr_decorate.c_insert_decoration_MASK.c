
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object {int dummy; } ;
struct decoration_entry {void* decoration; struct object const* base; } ;
struct decoration {int size; int nr; struct decoration_entry* entries; } ;


 unsigned int FUNC_0 (struct object const*,int) ;

__attribute__((used)) static void *FUNC_1(struct decoration *VAR_0, const struct object *VAR_1, void *VAR_2)
{
 int VAR_3 = VAR_0->size;
 struct decoration_entry *VAR_4 = VAR_0->entries;
 unsigned int VAR_5 = FUNC_0(VAR_1, VAR_3);

 while (VAR_4[VAR_5].base) {
  if (VAR_4[VAR_5].base == VAR_1) {
   void *VAR_6 = VAR_4[VAR_5].decoration;
   VAR_4[VAR_5].decoration = VAR_2;
   return VAR_6;
  }
  if (++VAR_5 >= VAR_3)
   VAR_5 = 0;
 }
 VAR_4[VAR_5].base = VAR_1;
 VAR_4[VAR_5].decoration = VAR_2;
 VAR_0->nr++;
 return ((void*)0);
}
