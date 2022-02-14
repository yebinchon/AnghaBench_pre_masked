
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {scalar_t__ string; void* util; } ;
struct string_list {int dummy; } ;


 struct string_list_item* FUNC_0 (struct string_list*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct string_list_item *VAR_0, void *VAR_1)
{
 struct string_list *VAR_2 = VAR_1;
 struct string_list_item *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0->string);
 if (VAR_3)
  VAR_3->util = (void *)VAR_0->string;
 return !VAR_3;
}
