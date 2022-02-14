
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int nr; int * items; } ;
typedef int (* string_list_each_func_t ) (int *,void*) ;



int FUNC_0(struct string_list *VAR_0,
    string_list_each_func_t VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->nr; VAR_3++)
  if ((VAR_4 = VAR_1(&VAR_0->items[VAR_3], VAR_2)))
   break;
 return VAR_4;
}
