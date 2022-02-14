
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_long ;
struct pmap {int* pm_context; int pm_active; } ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (struct pmap*,scalar_t__,scalar_t__) ;
 int FUNC_9 (void*) ;
 struct pmap* VAR_9 ;
 int FUNC_10 (int,int ,int ) ;
 int VAR_10 ;

void
FUNC_11(struct pmap *VAR_11, vm_offset_t VAR_12, vm_offset_t VAR_13)
{
 vm_offset_t VAR_14;
 void *VAR_15;
 u_long VAR_16;
 register_t VAR_17;

 FUNC_3(VAR_10);
 VAR_15 = FUNC_8(VAR_11, VAR_12, VAR_13);
 VAR_17 = FUNC_6();
 if (FUNC_0(FUNC_2(VAR_7), &VAR_11->pm_active)) {
  FUNC_1(VAR_11->pm_context[VAR_8] != -1,
      ("tlb_range_demap: inactive pmap?"));
  if (VAR_11 == VAR_9)
   VAR_16 = VAR_4 | VAR_5;
  else
   VAR_16 = VAR_6 | VAR_5;

  for (VAR_14 = VAR_12; VAR_14 < VAR_13; VAR_14 += VAR_3) {
   FUNC_10(FUNC_4(VAR_14) | VAR_16, VAR_0, 0);
   FUNC_10(FUNC_4(VAR_14) | VAR_16, VAR_1, 0);
   FUNC_5(VAR_2);
  }
 }
 FUNC_7(VAR_17);
 FUNC_9(VAR_15);
}
