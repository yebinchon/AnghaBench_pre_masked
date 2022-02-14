
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct attr* first; } ;
typedef TYPE_1__ uiprivAttrList ;
typedef scalar_t__ uiForEach ;
typedef scalar_t__ (* uiAttributedStringForEachAttributeFunc ) (int const*,int ,int ,int ,void*) ;
typedef int uiAttributedString ;
struct attr {int end; int start; int val; struct attr* next; } ;


 scalar_t__ FUNC_0 (int const*,int ,int ,int ,void*) ;
 scalar_t__ VAR_0 ;

void FUNC_1(const uiprivAttrList *VAR_1, const uiAttributedString *VAR_2, uiAttributedStringForEachAttributeFunc VAR_3, void *VAR_4)
{
 struct attr *VAR_5;
 uiForEach VAR_6;

 for (VAR_5 = VAR_1->first; VAR_5 != ((void*)0); VAR_5 = VAR_5->next) {
  VAR_6 = (*VAR_3)(VAR_2, VAR_5->val, VAR_5->start, VAR_5->end, VAR_4);
  if (VAR_6 == VAR_0)

   break;
 }
}
