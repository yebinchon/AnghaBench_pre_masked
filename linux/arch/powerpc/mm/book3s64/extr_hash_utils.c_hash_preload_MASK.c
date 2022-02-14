
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int context; int * pgd; } ;
typedef int pte_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,struct mm_struct*,int *,unsigned long,unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_3 (unsigned long,unsigned long,unsigned long,int *,unsigned long,int,int,int ) ;
 int FUNC_4 (unsigned long,unsigned long,unsigned long,int *,unsigned long,int,int) ;
 int * FUNC_5 (int *,unsigned long,int *,int*) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 (int *,unsigned long,int) ;
 int FUNC_8 (unsigned long,unsigned long,unsigned long,unsigned long,int,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (unsigned long) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct mm_struct*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct mm_struct*,unsigned long) ;
 int FUNC_16 (struct mm_struct*,unsigned long) ;
 int FUNC_17 (unsigned long) ;

__attribute__((used)) static void FUNC_18(struct mm_struct *VAR_7, unsigned long VAR_8,
    bool VAR_9, unsigned long VAR_10)
{
 int VAR_11;
 unsigned long VAR_12;
 pgd_t *VAR_13;
 pte_t *VAR_14;
 unsigned long VAR_15;
 int VAR_16, VAR_17, VAR_18 = 0;
 unsigned long VAR_19 = VAR_5 | VAR_6 | (VAR_9 ? VAR_4 : 0);

 FUNC_0(FUNC_6(VAR_8) != VAR_3);

 if (!FUNC_15(VAR_7, VAR_8))
  return;

 FUNC_1("hash_preload(mm=%p, mm->pgdir=%p, ea=%016lx, access=%lx,"
  " trap=%lx\n", VAR_7, VAR_7->pgd, VAR_8, VAR_19, VAR_10);


 VAR_13 = VAR_7->pgd;
 if (VAR_13 == ((void*)0))
  return;


 VAR_17 = FUNC_17(VAR_8);
 VAR_12 = FUNC_7(&VAR_7->context, VAR_8, VAR_17);
 if (!VAR_12)
  return;




 FUNC_10(VAR_15);





 VAR_14 = FUNC_5(VAR_13, VAR_8, ((void*)0), &VAR_11);
 if (!VAR_14)
  goto out_exit;

 FUNC_2(VAR_11);
 if (FUNC_12(VAR_7))
  VAR_18 |= VAR_0;
  VAR_16 = FUNC_3(VAR_8, VAR_19, VAR_12, VAR_14, VAR_10, VAR_18,
        VAR_17, FUNC_16(VAR_7, VAR_8));




 if (VAR_16 == -1)
  FUNC_8(VAR_8, VAR_19, VAR_12, VAR_10, VAR_17,
       FUNC_11(&VAR_7->context),
       FUNC_11(&VAR_7->context),
       FUNC_14(*VAR_14));
out_exit:
 FUNC_9(VAR_15);
}
