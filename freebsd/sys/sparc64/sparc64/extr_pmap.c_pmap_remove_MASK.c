
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct tte {int dummy; } ;
typedef TYPE_1__* pmap_t ;
struct TYPE_12__ {int * pm_context; } ;


 int FUNC_0 (int ,char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 size_t VAR_3 ;
 int FUNC_4 (TYPE_1__*,int *,struct tte*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,int *,scalar_t__,scalar_t__,int (*) (TYPE_1__*,int *,struct tte*,scalar_t__)) ;
 struct tte* FUNC_10 (TYPE_1__*,scalar_t__) ;
 int VAR_4 ;

void
FUNC_11(pmap_t VAR_5, vm_offset_t VAR_6, vm_offset_t VAR_7)
{
 struct tte *VAR_8;
 vm_offset_t VAR_9;

 FUNC_0(VAR_0, "pmap_remove: ctx=%#lx start=%#lx end=%#lx",
     VAR_5->pm_context[VAR_3], VAR_6, VAR_7);
 if (FUNC_2(VAR_5))
  return;
 FUNC_5(&VAR_4);
 FUNC_1(VAR_5);
 if (VAR_7 - VAR_6 > VAR_2) {
  FUNC_9(VAR_5, ((void*)0), VAR_6, VAR_7, FUNC_4);
  FUNC_7(VAR_5);
 } else {
  for (VAR_9 = VAR_6; VAR_9 < VAR_7; VAR_9 += VAR_1)
   if ((VAR_8 = FUNC_10(VAR_5, VAR_9)) != ((void*)0) &&
       !FUNC_4(VAR_5, ((void*)0), VAR_8, VAR_9))
    break;
  FUNC_8(VAR_5, VAR_6, VAR_7 - 1);
 }
 FUNC_3(VAR_5);
 FUNC_6(&VAR_4);
}
