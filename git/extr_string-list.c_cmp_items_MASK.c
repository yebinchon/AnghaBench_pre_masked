
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_sort_ctx {int (* cmp ) (int ,int ) ;} ;
struct string_list_item {int string; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1, void *VAR_2)
{
 struct string_list_sort_ctx *VAR_3 = VAR_2;
 const struct string_list_item *VAR_4 = VAR_0;
 const struct string_list_item *VAR_5 = VAR_1;
 return VAR_3->cmp(VAR_4->string, VAR_5->string);
}
