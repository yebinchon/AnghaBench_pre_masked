
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
struct tte {int dummy; } ;
typedef TYPE_1__* pmap_t ;
struct TYPE_12__ {int * pm_context; } ;


 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_3 (TYPE_1__*,int *,struct tte*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int *,scalar_t__,scalar_t__,int (*) (TYPE_1__*,int *,struct tte*,scalar_t__)) ;
 struct tte* FUNC_8 (TYPE_1__*,scalar_t__) ;

void
FUNC_9(pmap_t VAR_7, vm_offset_t VAR_8, vm_offset_t VAR_9, vm_prot_t VAR_10)
{
 vm_offset_t VAR_11;
 struct tte *VAR_12;

 FUNC_0(VAR_0, "pmap_protect: ctx=%#lx sva=%#lx eva=%#lx prot=%#lx",
     VAR_7->pm_context[VAR_6], VAR_8, VAR_9, VAR_10);

 if ((VAR_10 & VAR_4) == VAR_3) {
  FUNC_4(VAR_7, VAR_8, VAR_9);
  return;
 }

 if (VAR_10 & VAR_5)
  return;

 FUNC_1(VAR_7);
 if (VAR_9 - VAR_8 > VAR_2) {
  FUNC_7(VAR_7, ((void*)0), VAR_8, VAR_9, FUNC_3);
  FUNC_5(VAR_7);
 } else {
  for (VAR_11 = VAR_8; VAR_11 < VAR_9; VAR_11 += VAR_1)
   if ((VAR_12 = FUNC_8(VAR_7, VAR_11)) != ((void*)0))
    FUNC_3(VAR_7, ((void*)0), VAR_12, VAR_11);
  FUNC_6(VAR_7, VAR_8, VAR_9 - 1);
 }
 FUNC_2(VAR_7);
}
