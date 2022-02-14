
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmcstat_image {int pi_samplename; } ;
typedef int pmcstat_interned_string ;
typedef int pmc_id_t ;
typedef int fullpath ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,int,char*,char const*,char const*,char*) ;

pmcstat_interned_string
FUNC_5(const char *VAR_2, struct pmcstat_image *VAR_3,
    pmc_id_t VAR_4)
{
 const char *VAR_5;
 char VAR_6[VAR_1];

 VAR_5 = FUNC_1(VAR_4);
 if (!VAR_5)
  FUNC_0(VAR_0, "ERROR: cannot find pmcid");

 (void) FUNC_4(VAR_6, sizeof(VAR_6),
     "%s/%s/%s", VAR_2, VAR_5,
     FUNC_3(VAR_3->pi_samplename));

 return (FUNC_2(VAR_6));
}
