
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* string; int * util; } ;
struct string_list {scalar_t__ nr; struct string_list_item* items; int alloc; } ;


 int FUNC_0 (struct string_list_item*,scalar_t__,int ) ;

struct string_list_item *FUNC_1(struct string_list *VAR_0,
        char *VAR_1)
{
 struct string_list_item *VAR_2;
 FUNC_0(VAR_0->items, VAR_0->nr + 1, VAR_0->alloc);
 VAR_2 = &VAR_0->items[VAR_0->nr++];
 VAR_2->string = VAR_1;
 VAR_2->util = ((void*)0);
 return VAR_2;
}
