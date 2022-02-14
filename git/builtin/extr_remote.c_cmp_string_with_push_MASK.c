
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int string; struct push_info* util; } ;
struct push_info {int dest; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct string_list_item *VAR_2 = VAR_0;
 const struct string_list_item *VAR_3 = VAR_1;
 const struct push_info *VAR_4 = VAR_2->util;
 const struct push_info *VAR_5 = VAR_3->util;
 int VAR_6 = FUNC_0(VAR_2->string, VAR_3->string);
 return VAR_6 ? VAR_6 : FUNC_0(VAR_4->dest, VAR_5->dest);
}
