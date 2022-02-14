
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* pmc_count_shift; unsigned long* pmc_count_mask; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*,int,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned long FUNC_5 (int ,int ) ;

void FUNC_6(void)
{
 unsigned long VAR_2;
 unsigned long VAR_3;
 int VAR_4, VAR_5;
 int VAR_6;

 if (!FUNC_4())
  return;

 FUNC_1(VAR_2);

 VAR_6 = FUNC_3();

 VAR_3 = FUNC_5(VAR_0, 0);
 VAR_4 = (VAR_3 >> VAR_1->pmc_count_shift[0]) & VAR_1->pmc_count_mask[0];
 VAR_5 = (VAR_3 >> VAR_1->pmc_count_shift[1]) & VAR_1->pmc_count_mask[1];

 FUNC_2("CPU#%d: PCTR0[%06x] PCTR1[%06x]\n", VAR_6, VAR_4, VAR_5);

 FUNC_0(VAR_2);
}
