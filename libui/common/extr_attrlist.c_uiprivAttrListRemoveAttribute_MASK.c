
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct attr* first; } ;
typedef TYPE_1__ uiprivAttrList ;
typedef scalar_t__ uiAttributeType ;
struct attr {size_t start; struct attr* next; int val; } ;


 struct attr* FUNC_0 (TYPE_1__*,struct attr*,size_t,size_t,struct attr**) ;
 int FUNC_1 (TYPE_1__*,struct attr*,struct attr*) ;
 int FUNC_2 (struct attr*,size_t*,size_t*) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(uiprivAttrList *VAR_0, uiAttributeType VAR_1, size_t VAR_2, size_t VAR_3)
{
 struct attr *VAR_4;
 struct attr *VAR_5 = ((void*)0);
 struct attr *VAR_6 = ((void*)0);

 VAR_4 = VAR_0->first;
 while (VAR_4 != ((void*)0)) {
  size_t VAR_7, VAR_8;
  struct attr *VAR_9;



  if (VAR_4->start >= VAR_3) {
   VAR_6 = VAR_4;

   break;
  }
  if (FUNC_3(VAR_4->val) != VAR_1)
   goto next;
  VAR_7 = VAR_2;
  VAR_8 = VAR_3;
  if (!FUNC_2(VAR_4, &VAR_7, &VAR_8))
   goto next;
  VAR_4 = FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3, &VAR_9);
  if (VAR_9 != ((void*)0)) {
   VAR_9->next = VAR_5;
   VAR_5 = VAR_9;
  }
  continue;

 next:
  VAR_4 = VAR_4->next;
 }

 while (VAR_5 != ((void*)0)) {
  struct attr *VAR_10;


  VAR_10 = VAR_5->next;
  VAR_5->next = ((void*)0);
  FUNC_1(VAR_0, VAR_5, VAR_4);
  VAR_5 = VAR_10;
 }
}
