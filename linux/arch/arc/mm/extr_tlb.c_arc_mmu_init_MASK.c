
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpuinfo_arc_mmu {scalar_t__ ver; scalar_t__ pg_sz_k; scalar_t__ s_pg_sz_m; int pae; } ;
typedef int str ;
struct TYPE_2__ {struct cpuinfo_arc_mmu mmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 TYPE_1__* VAR_12 ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int ) ;
 size_t FUNC_11 () ;
 int VAR_13 ;
 int FUNC_12 (int ,int ) ;

void FUNC_13(void)
{
 struct cpuinfo_arc_mmu *VAR_14 = &VAR_12[FUNC_11()].mmu;
 char VAR_15[256];
 int VAR_16 = 0;

 FUNC_10("%s", FUNC_5(0, VAR_15, sizeof(VAR_15)));




 FUNC_0(!FUNC_1((VAR_4 << 20), VAR_10));





 FUNC_0(!FUNC_1(VAR_11, VAR_10));
 if (FUNC_6() && VAR_14->ver == VAR_5)
  VAR_16 = 1;
 else if (FUNC_7() && VAR_14->ver >= VAR_5)
  VAR_16 = 1;

 if (!VAR_16) {
  FUNC_9("MMU ver %d doesn't match kernel built for %d...\n",
        VAR_14->ver, VAR_5);
 }

 if (VAR_14->pg_sz_k != FUNC_3(VAR_9))
  FUNC_9("MMU pg size != PAGE_SIZE (%luk)\n", FUNC_3(VAR_9));

 if (FUNC_2(VAR_6) &&
     VAR_14->s_pg_sz_m != FUNC_4(VAR_7))
  FUNC_9("MMU Super pg size != Linux HPAGE_PMD_SIZE (%luM)\n",
        (unsigned long)FUNC_4(VAR_7));

 if (FUNC_2(VAR_3) && !VAR_14->pae)
  FUNC_9("Hardware doesn't support PAE40\n");


 FUNC_12(VAR_0, VAR_8);




 FUNC_12(VAR_1, VAR_13);


 if (FUNC_8())
  FUNC_12(VAR_2, 0);
}
