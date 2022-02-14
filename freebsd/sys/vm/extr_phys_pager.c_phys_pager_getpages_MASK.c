
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_object_t ;
struct TYPE_7__ {int flags; scalar_t__ dirty; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(vm_object_t VAR_2, vm_page_t *VAR_3, int VAR_4, int *VAR_5,
    int *VAR_6)
{
 int VAR_7;

 FUNC_1(VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (FUNC_4(VAR_3[VAR_7])) {
   if ((VAR_3[VAR_7]->flags & VAR_0) == 0)
    FUNC_2(VAR_3[VAR_7]);
   FUNC_5(VAR_3[VAR_7]);
  }
  FUNC_0(FUNC_3(VAR_3[VAR_7]),
      ("phys_pager_getpages: partially valid page %p", VAR_3[VAR_7]));
  FUNC_0(VAR_3[VAR_7]->dirty == 0,
      ("phys_pager_getpages: dirty page %p", VAR_3[VAR_7]));
 }
 if (VAR_5)
  *VAR_5 = 0;
 if (VAR_6)
  *VAR_6 = 0;
 return (VAR_1);
}
