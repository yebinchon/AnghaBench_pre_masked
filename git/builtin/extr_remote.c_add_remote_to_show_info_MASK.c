
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {int string; } ;
struct show_info {int width; int list; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct string_list_item *VAR_0, void *VAR_1)
{
 struct show_info *VAR_2 = VAR_1;
 int VAR_3 = FUNC_1(VAR_0->string);
 if (VAR_3 > VAR_2->width)
  VAR_2->width = VAR_3;
 FUNC_0(VAR_2->list, VAR_0->string);
 return 0;
}
