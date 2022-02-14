
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct attr* first; } ;
typedef TYPE_1__ uiprivAttrList ;
struct attr {size_t start; size_t end; struct attr* next; } ;


 int FUNC_0 (struct attr*,size_t) ;
 int FUNC_1 (TYPE_1__*,struct attr*,struct attr*) ;
 struct attr* FUNC_2 (TYPE_1__*,struct attr*,size_t) ;

void FUNC_3(uiprivAttrList *VAR_0, size_t VAR_1, size_t VAR_2)
{
 struct attr *VAR_3;
 struct attr *VAR_4 = ((void*)0);



 for (VAR_3 = VAR_0->first; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  struct attr *VAR_5;


  if (VAR_3->start >= VAR_1)
   break;

  if (!FUNC_0(VAR_3, VAR_1))
   continue;

  VAR_5 = FUNC_2(VAR_0, VAR_3, VAR_1);

  VAR_5->start += VAR_2;
  VAR_5->end += VAR_2;



  VAR_5->next = VAR_4;
  VAR_4 = VAR_5;
 }




 while (VAR_4 != ((void*)0)) {
  struct attr *VAR_6;


  VAR_6 = VAR_4->next;
  VAR_4->next = ((void*)0);
  FUNC_1(VAR_0, VAR_4, VAR_3);
  VAR_4 = VAR_6;
 }



 for (; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
  VAR_3->start += VAR_2;
  VAR_3->end += VAR_2;
 }
}
