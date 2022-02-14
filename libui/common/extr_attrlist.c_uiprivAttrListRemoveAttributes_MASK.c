
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct attr* first; } ;
typedef TYPE_1__ uiprivAttrList ;
struct attr {size_t start; struct attr* next; } ;


 struct attr* FUNC_0 (TYPE_1__*,struct attr*,size_t,size_t,struct attr**) ;
 int FUNC_1 (TYPE_1__*,struct attr*,struct attr*) ;
 int FUNC_2 (struct attr*,size_t*,size_t*) ;

void FUNC_3(uiprivAttrList *VAR_0, size_t VAR_1, size_t VAR_2)
{
 struct attr *VAR_3;
 struct attr *VAR_4 = ((void*)0);
 struct attr *VAR_5 = ((void*)0);

 VAR_3 = VAR_0->first;
 while (VAR_3 != ((void*)0)) {
  size_t VAR_6, VAR_7;
  struct attr *VAR_8;



  if (VAR_3->start >= VAR_2) {
   VAR_5 = VAR_3;

   break;
  }
  VAR_6 = VAR_1;
  VAR_7 = VAR_2;
  if (!FUNC_2(VAR_3, &VAR_6, &VAR_7))
   goto next;
  VAR_3 = FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2, &VAR_8);
  if (VAR_8 != ((void*)0)) {
   VAR_8->next = VAR_4;
   VAR_4 = VAR_8;
  }
  continue;

 next:
  VAR_3 = VAR_3->next;
 }

 while (VAR_4 != ((void*)0)) {
  struct attr *VAR_9;


  VAR_9 = VAR_4->next;
  VAR_4->next = ((void*)0);
  FUNC_1(VAR_0, VAR_4, VAR_3);
  VAR_4 = VAR_9;
 }
}
