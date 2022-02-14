
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_gmonfile {int pgf_gmondata; int pgf_ndatabytes; int pgf_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int *,int ,int,int,int,int ) ;
 int FUNC_3 (char const*,int,int ) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct pmcstat_gmonfile *VAR_8)
{
 int VAR_9;
 const char *VAR_10;

 VAR_10 = FUNC_4(VAR_8->pgf_name);


 if ((VAR_9 = FUNC_3(VAR_10, VAR_5 | VAR_4, 0)) < 0)
  FUNC_1(VAR_0, "ERROR: cannot open \"%s\"", VAR_10);

 VAR_8->pgf_gmondata = FUNC_2(((void*)0), VAR_8->pgf_ndatabytes,
     VAR_6|VAR_7, VAR_2|VAR_3, VAR_9, 0);

 if (VAR_8->pgf_gmondata == VAR_1)
  FUNC_1(VAR_0, "ERROR: cannot map \"%s\"", VAR_10);

 (void) FUNC_0(VAR_9);
}
