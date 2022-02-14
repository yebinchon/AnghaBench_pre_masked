
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef uintptr_t uint64_t ;
struct slb {int dummy; } ;
typedef TYPE_1__* pmap_t ;
struct TYPE_8__ {int pm_slb_len; struct slb** pm_slb; } ;


 uintptr_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,uintptr_t,int ) ;
 int FUNC_3 (TYPE_1__*,struct slb*) ;
 struct slb* FUNC_4 (TYPE_1__*,scalar_t__) ;

int
FUNC_5(pmap_t VAR_1, vm_offset_t VAR_2)
{
 struct slb *VAR_3;
 uint64_t VAR_4;
 int VAR_5;

 if (VAR_1->pm_slb == ((void*)0))
  return (-1);

 VAR_4 = (uintptr_t)VAR_2 >> VAR_0;

 FUNC_0(VAR_1);
 VAR_3 = FUNC_4(VAR_1, VAR_2);

 if (VAR_3 == ((void*)0)) {

  (void)FUNC_2(VAR_1, VAR_4, 0);
 } else {




  for (VAR_5 = 0; VAR_5 < VAR_1->pm_slb_len; VAR_5++)
   if (VAR_1->pm_slb[VAR_5] == VAR_3)
    break;

  if (VAR_5 == VAR_1->pm_slb_len)
   FUNC_3(VAR_1, VAR_3);
 }
 FUNC_1(VAR_1);

 return (0);
}
