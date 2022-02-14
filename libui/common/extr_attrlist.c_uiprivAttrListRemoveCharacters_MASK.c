
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct attr* first; } ;
typedef TYPE_1__ uiprivAttrList ;
struct attr {int dummy; } ;


 struct attr* FUNC_0 (TYPE_1__*,struct attr*,size_t,size_t) ;

void FUNC_1(uiprivAttrList *VAR_0, size_t VAR_1, size_t VAR_2)
{
 struct attr *VAR_3;

 VAR_3 = VAR_0->first;
 while (VAR_3 != ((void*)0))
  VAR_3 = FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2);
}
