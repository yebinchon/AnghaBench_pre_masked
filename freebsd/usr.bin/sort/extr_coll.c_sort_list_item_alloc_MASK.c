
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list_item {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sort_list_item*,int ,size_t) ;
 struct sort_list_item* FUNC_2 (size_t) ;

struct sort_list_item *
FUNC_3(void)
{
 struct sort_list_item *VAR_0;
 size_t VAR_1;

 VAR_1 = sizeof(struct sort_list_item) + FUNC_0();
 VAR_0 = FUNC_2(VAR_1);
 FUNC_1(VAR_0, 0, VAR_1);

 return (VAR_0);
}
