
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_gmonfile {int * pgf_gmondata; int pgf_ndatabytes; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(struct pmcstat_gmonfile *VAR_1)
{
 (void) FUNC_0(VAR_1->pgf_gmondata, VAR_1->pgf_ndatabytes,
     VAR_0);
 (void) FUNC_1(VAR_1->pgf_gmondata, VAR_1->pgf_ndatabytes);
 VAR_1->pgf_gmondata = ((void*)0);
}
