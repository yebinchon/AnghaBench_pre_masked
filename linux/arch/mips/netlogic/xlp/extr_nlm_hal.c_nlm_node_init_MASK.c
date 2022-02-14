
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_soc_info {int coremask; int ebase; int piclock; scalar_t__ socbus; int picbase; int sysbase; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 struct nlm_soc_info* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(int VAR_1)
{
 struct nlm_soc_info *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_1 == 0)
  VAR_2->coremask = 1;
 VAR_2->sysbase = FUNC_3(VAR_1);
 VAR_2->picbase = FUNC_2(VAR_1);
 VAR_2->ebase = FUNC_4() & VAR_0;
 if (FUNC_0())
  VAR_2->socbus = FUNC_6(VAR_1);
 else
  VAR_2->socbus = 0;
 FUNC_5(&VAR_2->piclock);
}
