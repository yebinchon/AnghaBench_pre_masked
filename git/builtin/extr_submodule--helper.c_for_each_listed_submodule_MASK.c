
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_list {int nr; int * entries; } ;
typedef int (* each_submodule_fn ) (int ,void*) ;



__attribute__((used)) static void FUNC_0(const struct module_list *VAR_0,
          each_submodule_fn VAR_1, void *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++)
  VAR_1(VAR_0->entries[VAR_3], VAR_2);
}
