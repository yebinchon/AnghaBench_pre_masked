
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,...) ;
 int * FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int * FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 () ;

__attribute__((used)) static void FUNC_22(unsigned long VAR_0)
{
 pgd_t *VAR_1 = FUNC_0(FUNC_21());
 pgd_t *VAR_2 = VAR_1 + FUNC_6(VAR_0);
 p4d_t *VAR_3;
 pud_t *VAR_4;
 pmd_t *VAR_5;
 pte_t *VAR_6;

 if (FUNC_1(VAR_2))
  goto bad;

 FUNC_14("PGD %lx ", FUNC_8(*VAR_2));

 if (!FUNC_7(*VAR_2))
  goto out;

 VAR_3 = FUNC_3(VAR_2, VAR_0);
 if (FUNC_1(VAR_3))
  goto bad;

 FUNC_13("P4D %lx ", FUNC_5(*VAR_3));
 if (!FUNC_4(*VAR_3) || FUNC_2(*VAR_3))
  goto out;

 VAR_4 = FUNC_18(VAR_3, VAR_0);
 if (FUNC_1(VAR_4))
  goto bad;

 FUNC_13("PUD %lx ", FUNC_20(*VAR_4));
 if (!FUNC_19(*VAR_4) || FUNC_17(*VAR_4))
  goto out;

 VAR_5 = FUNC_10(VAR_4, VAR_0);
 if (FUNC_1(VAR_5))
  goto bad;

 FUNC_13("PMD %lx ", FUNC_12(*VAR_5));
 if (!FUNC_11(*VAR_5) || FUNC_9(*VAR_5))
  goto out;

 VAR_6 = FUNC_15(VAR_5, VAR_0);
 if (FUNC_1(VAR_6))
  goto bad;

 FUNC_13("PTE %lx", FUNC_16(*VAR_6));
out:
 FUNC_13("\n");
 return;
bad:
 FUNC_14("BAD\n");
}
