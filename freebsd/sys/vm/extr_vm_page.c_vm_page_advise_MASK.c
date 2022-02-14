
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_12__ {scalar_t__ dirty; int object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;

void
FUNC_10(vm_page_t VAR_4, int VAR_5)
{

 FUNC_4(VAR_4);
 FUNC_0(VAR_4->object);
 if (VAR_5 == VAR_1)






  FUNC_9(VAR_4);
 else if (VAR_5 != VAR_0) {
  if (VAR_5 == VAR_2)
   FUNC_2(VAR_4);
  return;
 }





 FUNC_3(VAR_4, VAR_3);

 if (VAR_5 != VAR_1 && VAR_4->dirty == 0 && FUNC_1(VAR_4))
  FUNC_6(VAR_4);







 if (VAR_4->dirty == 0)
  FUNC_5(VAR_4);
 else if (!FUNC_7(VAR_4))
  FUNC_8(VAR_4);
}
