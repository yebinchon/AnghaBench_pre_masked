
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct attr* first; struct attr* last; } ;
typedef TYPE_1__ uiprivAttrList ;
struct attr {struct attr* next; struct attr* prev; } ;



__attribute__((used)) static void FUNC_0(uiprivAttrList *VAR_0, struct attr *VAR_1, struct attr *VAR_2)
{

 if (VAR_0->first == ((void*)0)) {
  VAR_0->first = VAR_1;
  VAR_0->last = VAR_1;
  return;
 }


 if (VAR_2 == ((void*)0)) {
  struct attr *VAR_3;

  VAR_3 = VAR_0->last;
  VAR_0->last = VAR_1;
  VAR_1->prev = VAR_3;
  VAR_3->next = VAR_1;
  return;
 }


 if (VAR_2 == VAR_0->first) {
  struct attr *VAR_4;

  VAR_4 = VAR_0->first;
  VAR_0->first = VAR_1;
  VAR_4->prev = VAR_1;
  VAR_1->next = VAR_4;
  return;
 }


 VAR_1->prev = VAR_2->prev;
 VAR_1->next = VAR_2;
 VAR_2->prev = VAR_1;
 VAR_1->prev->next = VAR_1;
}
