
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct attr* last; struct attr* first; } ;
typedef TYPE_1__ uiprivAttrList ;
struct attr {struct attr* prev; struct attr* next; } ;



__attribute__((used)) static struct attr *FUNC_0(uiprivAttrList *VAR_0, struct attr *VAR_1)
{
 struct attr *VAR_2, *VAR_3;

 VAR_2 = VAR_1->prev;
 VAR_3 = VAR_1->next;
 VAR_1->prev = ((void*)0);
 VAR_1->next = ((void*)0);


 if (VAR_2 == ((void*)0) && VAR_3 == ((void*)0)) {
  VAR_0->first = ((void*)0);
  VAR_0->last = ((void*)0);
  return ((void*)0);
 }

 if (VAR_2 == ((void*)0)) {
  VAR_3->prev = ((void*)0);
  VAR_0->first = VAR_3;
  return VAR_3;
 }

 if (VAR_3 == ((void*)0)) {
  VAR_2->next = ((void*)0);
  VAR_0->last = VAR_2;
  return ((void*)0);
 }

 VAR_2->next = VAR_3;
 VAR_3->prev = VAR_2;
 return VAR_3;
}
