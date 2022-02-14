
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* vm_map_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_15__ {int pmap; } ;
struct TYPE_14__ {scalar_t__ dirty; } ;
struct TYPE_13__ {int td_pflags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_12__* VAR_10 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__,int,int ,TYPE_1__**) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;

int
FUNC_10(vm_map_t VAR_11, vm_offset_t VAR_12, vm_size_t VAR_13,
    vm_prot_t VAR_14, vm_page_t *VAR_15, int VAR_16)
{
 vm_offset_t VAR_17, VAR_18;
 vm_page_t *VAR_19;
 int VAR_20;
 boolean_t VAR_21;

 if (VAR_13 == 0)
  return (0);
 VAR_17 = FUNC_3(VAR_12 + VAR_13);
 VAR_12 = FUNC_4(VAR_12);




 if (VAR_12 < FUNC_7(VAR_11) || VAR_12 > VAR_17 || VAR_17 > FUNC_6(VAR_11))
  return (-1);

 if (FUNC_0(VAR_17 - VAR_12) > VAR_16)
  FUNC_1("vm_fault_quick_hold_pages: count > max_count");
 VAR_20 = FUNC_0(VAR_17 - VAR_12);





 VAR_21 = VAR_0;
 for (VAR_19 = VAR_15, VAR_18 = VAR_12; VAR_18 < VAR_17; VAR_19++, VAR_18 += VAR_2) {
  *VAR_19 = FUNC_2(VAR_11->pmap, VAR_18, VAR_14);
  if (*VAR_19 == ((void*)0))
   VAR_21 = VAR_5;
  else if ((VAR_14 & VAR_9) != 0 &&
      (*VAR_19)->dirty != VAR_7) {
   FUNC_8(*VAR_19);
  }
 }
 if (VAR_21) {
  if ((VAR_14 & VAR_8) != 0 &&
      (VAR_10->td_pflags & VAR_4) != 0)
   goto error;
  for (VAR_19 = VAR_15, VAR_18 = VAR_12; VAR_18 < VAR_17; VAR_19++, VAR_18 += VAR_2)
   if (*VAR_19 == ((void*)0) && FUNC_5(VAR_11, VAR_18, VAR_14,
       VAR_6, VAR_19) != VAR_1)
    goto error;
 }
 return (VAR_20);
error:
 for (VAR_19 = VAR_15; VAR_19 < VAR_15 + VAR_20; VAR_19++)
  if (*VAR_19 != ((void*)0))
   FUNC_9(*VAR_19, VAR_3);
 return (-1);
}
