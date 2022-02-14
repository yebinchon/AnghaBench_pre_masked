
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct attr* first; } ;
typedef TYPE_1__ uiprivAttrList ;
struct attr {size_t start; size_t end; struct attr* next; } ;



void FUNC_0(uiprivAttrList *VAR_0, size_t VAR_1, size_t VAR_2)
{
 struct attr *VAR_3;

 for (VAR_3 = VAR_0->first; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  if (VAR_3->start < VAR_1)
   VAR_3->start += VAR_2;
  else if (VAR_3->start == VAR_1 && VAR_1 != 0)
   VAR_3->start += VAR_2;
  if (VAR_3->end <= VAR_1)
   VAR_3->end += VAR_2;
 }
}
