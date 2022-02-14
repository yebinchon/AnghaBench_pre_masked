
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list_item {struct bwstring* str; int ka; } ;
struct bwstring {int dummy; } ;


 int FUNC_0 (struct bwstring*) ;
 int FUNC_1 (struct bwstring*,int *) ;
 int FUNC_2 (struct sort_list_item*) ;

void
FUNC_3(struct sort_list_item *VAR_0, struct bwstring *VAR_1)
{

 if (VAR_0) {
  FUNC_1(VAR_0->str, &(VAR_0->ka));
  if (VAR_0->str) {
   if (VAR_0->str == VAR_1) {

    return;
   } else {
    FUNC_0(VAR_0->str);
    VAR_0->str = ((void*)0);
   }
  }
  VAR_0->str = VAR_1;
  FUNC_2(VAR_0);
 }
}
