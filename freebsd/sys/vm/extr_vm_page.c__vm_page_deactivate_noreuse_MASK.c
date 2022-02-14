
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_8__ {int aflags; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_5(vm_page_t VAR_2)
{

 FUNC_1(VAR_2);

 if (!FUNC_3(VAR_2)) {
  FUNC_2(VAR_2);
  VAR_2->queue = VAR_1;
 }
 if ((VAR_2->aflags & VAR_0) == 0)
  FUNC_0(VAR_2, VAR_0);
 FUNC_4(VAR_2, VAR_1);
}
