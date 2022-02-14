
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {struct push_info* util; int string; } ;
struct show_info {int width; int width2; int list; } ;
struct push_info {int dest; } ;


 struct string_list_item* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct string_list_item *VAR_0, void *VAR_1)
{
 struct show_info *VAR_2 = VAR_1;
 struct push_info *VAR_3 = VAR_0->util;
 struct string_list_item *VAR_4;
 int VAR_5;
 if ((VAR_5 = FUNC_1(VAR_0->string)) > VAR_2->width)
  VAR_2->width = VAR_5;
 if ((VAR_5 = FUNC_1(VAR_3->dest)) > VAR_2->width2)
  VAR_2->width2 = VAR_5;
 VAR_4 = FUNC_0(VAR_2->list, VAR_0->string);
 VAR_4->util = VAR_0->util;
 return 0;
}
