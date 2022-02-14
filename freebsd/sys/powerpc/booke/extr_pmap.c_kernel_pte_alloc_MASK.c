
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int pte_t ;
struct TYPE_2__ {int** pm_pdir; } ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_3(vm_offset_t VAR_14, vm_offset_t VAR_15, vm_offset_t VAR_16)
{
 int VAR_17;
 vm_offset_t VAR_18;
 pte_t *VAR_19;


 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++)
  VAR_9->pm_pdir[VAR_13 + VAR_17] =
      (pte_t *)(VAR_16 + (VAR_17 * VAR_0 * VAR_1));







 for (VAR_18 = VAR_15; VAR_18 < VAR_14; VAR_18 += VAR_0) {
  VAR_19 = &(VAR_9->pm_pdir[FUNC_0(VAR_18)][FUNC_1(VAR_18)]);
  *VAR_19 = FUNC_2(VAR_11 + (VAR_18 - VAR_12));
  *VAR_19 |= VAR_2 | VAR_4 | VAR_5 | VAR_6 | VAR_8 |
      VAR_7 | VAR_3;
 }
}
