
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_pmcrecord {struct pmcstat_pmcrecord* pr_merge; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct pmcstat_pmcrecord* FUNC_0 (int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_3;
 struct pmcstat_pmcrecord *VAR_4;




 if (VAR_0) {
  VAR_3 = VAR_2;

  do {
   VAR_4 = FUNC_0(VAR_2);
   if (VAR_4 == ((void*)0) || VAR_4 == VAR_4->pr_merge)
    break;

   VAR_2++;
   if (VAR_2 >= VAR_1)
    VAR_2 = 0;

  } while (VAR_2 != VAR_3);
 }
}
