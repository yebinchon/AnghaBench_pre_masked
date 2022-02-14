
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {struct ref* util; } ;
struct string_list {int dummy; } ;
struct ref {int name; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (struct string_list*,int ) ;
 struct string_list_item* FUNC_1 (struct string_list*,int ) ;

__attribute__((used)) static int FUNC_2(struct ref **VAR_1, int VAR_2)
{
 struct string_list VAR_3 = VAR_0;
 int VAR_4, VAR_5;

 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_2; VAR_4++) {
  struct string_list_item *VAR_6;
  VAR_6 = FUNC_1(&VAR_3, VAR_1[VAR_4]->name);
  if (VAR_6->util)
   continue;
  VAR_6->util = VAR_1[VAR_4];
  if (VAR_4 != VAR_5)
   VAR_1[VAR_5] = VAR_1[VAR_4];
  VAR_5++;
 }
 for (VAR_4 = VAR_5; VAR_4 < VAR_2; VAR_4++)
  VAR_1[VAR_4] = ((void*)0);
 FUNC_0(&VAR_3, 0);
 return VAR_5;
}
