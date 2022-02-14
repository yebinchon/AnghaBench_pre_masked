
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ ref_count; int aflags; int queue; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(vm_page_t VAR_2)
{
 uint8_t VAR_3;

 FUNC_0(VAR_2->ref_count == 0, ("page %p has references", VAR_2));

 for (;;) {
  if ((VAR_2->aflags & VAR_0) != 0)
   return;
  FUNC_2();
  if ((VAR_3 = FUNC_1(&VAR_2->queue)) == VAR_1)
   return;
  if (FUNC_4(VAR_2, VAR_3, VAR_3, VAR_0,
      VAR_0)) {
   FUNC_3(VAR_2, VAR_3);
   break;
  }
 }
}
