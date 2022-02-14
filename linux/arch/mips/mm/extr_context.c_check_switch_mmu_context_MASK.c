
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mm_struct {int pgd; } ;
struct TYPE_2__ {int asid_cache; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (unsigned int,struct mm_struct*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (unsigned int,struct mm_struct*) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_10 (unsigned int,int *) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 scalar_t__ FUNC_12 (unsigned int,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (struct mm_struct*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int VAR_7 ;
 int FUNC_17 () ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 unsigned int FUNC_20 () ;
 int FUNC_21 () ;
 int VAR_8 ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int) ;

void FUNC_24(struct mm_struct *VAR_9)
{
 unsigned int VAR_10 = FUNC_20();
 u64 VAR_11, VAR_12;
 unsigned long VAR_13;

 if (!VAR_2) {
  FUNC_5(VAR_9);
  FUNC_22(FUNC_7(VAR_10, VAR_9));
  goto setup_pgd;
 }
 VAR_11 = FUNC_9(VAR_10, VAR_9);
 VAR_12 = FUNC_0(VAR_1[VAR_10].asid_cache);
 if (!VAR_12 ||
     !FUNC_3(VAR_10, VAR_11, FUNC_4(&VAR_7)) ||
     !FUNC_6(&VAR_1[VAR_10].asid_cache, VAR_12, VAR_11)) {
  FUNC_18(&VAR_5, VAR_13);

  VAR_11 = FUNC_9(VAR_10, VAR_9);
  if (!FUNC_3(VAR_10, VAR_11, FUNC_4(&VAR_7)))
   VAR_11 = FUNC_14(VAR_9);

  FUNC_2(VAR_1[VAR_10].asid_cache, VAR_11);
  FUNC_19(&VAR_5, VAR_13);
 }






 if (FUNC_12(VAR_10, &VAR_8)) {
  if (VAR_4)
   FUNC_13();
  FUNC_16();
  FUNC_10(VAR_10, &VAR_8);
 }

 FUNC_23(VAR_11 & FUNC_8(&VAR_0));
setup_pgd:
 FUNC_1(VAR_9->pgd);
}
