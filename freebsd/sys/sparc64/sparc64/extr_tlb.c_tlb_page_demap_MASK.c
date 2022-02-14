
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_long ;
struct pmap {int* pm_context; int pm_active; } ;
typedef int register_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (struct pmap*,int ) ;
 int FUNC_9 (void*) ;
 struct pmap* VAR_8 ;
 int FUNC_10 (int,int ,int ) ;
 int VAR_9 ;

void
FUNC_11(struct pmap *VAR_10, vm_offset_t VAR_11)
{
 u_long VAR_12;
 void *VAR_13;
 register_t VAR_14;

 FUNC_3(VAR_9);
 VAR_13 = FUNC_8(VAR_10, VAR_11);
 VAR_14 = FUNC_6();
 if (FUNC_0(FUNC_2(VAR_6), &VAR_10->pm_active)) {
  FUNC_1(VAR_10->pm_context[VAR_7] != -1,
      ("tlb_page_demap: inactive pmap?"));
  if (VAR_10 == VAR_8)
   VAR_12 = VAR_3 | VAR_4;
  else
   VAR_12 = VAR_5 | VAR_4;

  FUNC_10(FUNC_4(VAR_11) | VAR_12, VAR_0, 0);
  FUNC_10(FUNC_4(VAR_11) | VAR_12, VAR_1, 0);
  FUNC_5(VAR_2);
 }
 FUNC_7(VAR_14);
 FUNC_9(VAR_13);
}
