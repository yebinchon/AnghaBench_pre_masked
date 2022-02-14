
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr {int val; struct attr* next; struct attr* first; } ;
typedef struct attr uiprivAttrList ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct attr*) ;

void FUNC_2(uiprivAttrList *VAR_0)
{
 struct attr *VAR_1, *VAR_2;

 VAR_1 = VAR_0->first;
 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1->val);
  FUNC_1(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_1(VAR_0);
}
