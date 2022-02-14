
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtablist {struct mtablist* mtab_next; } ;


 int FUNC_0 (struct mtablist*) ;
 struct mtablist* VAR_0 ;

void
FUNC_1(void)
{
 struct mtablist *VAR_1;

 while ((VAR_1 = VAR_0) != ((void*)0)) {
  VAR_0 = VAR_0->mtab_next;
  FUNC_0(VAR_1);
 }
}
