
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct attr_item {int mode; struct attr_item* next; int time; int fname; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;

void FUNC_3(struct attr_item **VAR_0,char *VAR_1,int VAR_2,time_t VAR_3)
{
  struct attr_item *VAR_4;

  VAR_4 = (struct attr_item *)FUNC_1(sizeof(struct attr_item));
  if (VAR_4 == ((void*)0))
    FUNC_0("Out of memory");
  VAR_4->fname = FUNC_2(VAR_1);
  VAR_4->mode = VAR_2;
  VAR_4->time = VAR_3;
  VAR_4->next = *VAR_0;
  *VAR_0 = VAR_4;
}
