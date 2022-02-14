
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_long ;
struct TYPE_7__ {size_t setcnt; int * set; } ;
typedef TYPE_1__ INPUT ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_2(INPUT *VAR_0, INPUT *VAR_1)
{
 u_long VAR_2, VAR_3;






 if (VAR_1 == ((void*)0)) {
  for (VAR_2 = 0; VAR_2 < VAR_0->setcnt; ++VAR_2)
   FUNC_0(VAR_0, &VAR_0->set[VAR_2]);
  return;
 }
 for (VAR_2 = 0; VAR_2 < VAR_0->setcnt; ++VAR_2)
  for (VAR_3 = 0; VAR_3 < VAR_1->setcnt; ++VAR_3)
   FUNC_1(VAR_0, &VAR_0->set[VAR_2], VAR_1, &VAR_1->set[VAR_3]);
}
