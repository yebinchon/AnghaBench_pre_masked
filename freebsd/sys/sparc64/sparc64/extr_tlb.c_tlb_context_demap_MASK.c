
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 size_t VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (struct pmap*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int,int ,int ) ;
 int VAR_7 ;

void
FUNC_10(struct pmap *VAR_8)
{
 void *VAR_9;
 register_t VAR_10;
 FUNC_3(VAR_7);
 VAR_9 = FUNC_7(VAR_8);
 VAR_10 = FUNC_5();
 if (FUNC_0(FUNC_2(VAR_5), &VAR_8->pm_active)) {
  FUNC_1(VAR_8->pm_context[VAR_6] != -1,
      ("tlb_context_demap: inactive pmap?"));
  FUNC_9(VAR_4 | VAR_3, VAR_0, 0);
  FUNC_9(VAR_4 | VAR_3, VAR_1, 0);
  FUNC_4(VAR_2);
 }
 FUNC_6(VAR_10);
 FUNC_8(VAR_9);
}
