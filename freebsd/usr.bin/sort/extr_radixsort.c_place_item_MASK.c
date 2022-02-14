
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list_item {int dummy; } ;
struct sort_level {int level; struct sort_list_item** tosort; } ;


 int FUNC_0 (struct sort_level*,struct sort_list_item*) ;
 int FUNC_1 (struct sort_level*,struct sort_list_item*,int) ;
 int FUNC_2 (struct sort_list_item*,int ) ;

__attribute__((used)) static void
FUNC_3(struct sort_level *VAR_0, size_t VAR_1)
{
 struct sort_list_item *VAR_2;
 int VAR_3;

 VAR_2 = VAR_0->tosort[VAR_1];
 VAR_3 = FUNC_2(VAR_2, VAR_0->level);

 if (VAR_3 == -1)
  FUNC_0(VAR_0, VAR_2);
 else
  FUNC_1(VAR_0, VAR_2, VAR_3);
}
