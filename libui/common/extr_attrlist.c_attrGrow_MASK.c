
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct attr* first; } ;
typedef TYPE_1__ uiprivAttrList ;
struct attr {size_t end; size_t start; struct attr* next; } ;


 int FUNC_0 (TYPE_1__*,struct attr*,struct attr*) ;
 int FUNC_1 (TYPE_1__*,struct attr*) ;

__attribute__((used)) static void FUNC_2(uiprivAttrList *VAR_0, struct attr *VAR_1, size_t VAR_2, size_t VAR_3)
{
 struct attr *VAR_4;


 if (VAR_1->end < VAR_3)
  VAR_1->end = VAR_3;




 if (VAR_1->start <= VAR_2)
  return;
 VAR_1->start = VAR_2;
 FUNC_1(VAR_0, VAR_1);
 for (VAR_4 = VAR_0->first; VAR_4 != ((void*)0); VAR_4 = VAR_4->next)
  if (VAR_4->start > VAR_1->start)
   break;
 FUNC_0(VAR_0, VAR_1, VAR_4);
}
