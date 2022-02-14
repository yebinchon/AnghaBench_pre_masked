
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rawarc {int raw_count; scalar_t__ raw_selfpc; scalar_t__ raw_frompc; } ;
struct pmcstat_image {scalar_t__ pi_vaddr; } ;
struct pmcstat_gmonfile {int * pgf_file; int pgf_name; } ;
typedef int pmc_id_t ;
typedef int arc ;


 int * FUNC_0 (char const*,char*) ;
 int FUNC_1 (struct rawarc*,int,int,int *) ;
 struct pmcstat_gmonfile* FUNC_2 (struct pmcstat_image*,int ) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct pmcstat_image *VAR_0, pmc_id_t VAR_1,
    uintptr_t VAR_2, uintptr_t VAR_3, uint32_t VAR_4)
{
 struct rawarc VAR_5;
 const char *VAR_6;
 struct pmcstat_gmonfile *VAR_7;

 if ((VAR_7 = FUNC_2(VAR_0, VAR_1)) == ((void*)0))
  return;

 if (VAR_7->pgf_file == ((void*)0)) {
  VAR_6 = FUNC_3(VAR_7->pgf_name);
  if ((VAR_7->pgf_file = FUNC_0(VAR_6, "a")) == ((void*)0))
   return;
 }

 VAR_5.raw_frompc = VAR_2 + VAR_0->pi_vaddr;
 VAR_5.raw_selfpc = VAR_3 + VAR_0->pi_vaddr;
 VAR_5.raw_count = VAR_4;

 (void) FUNC_1(&VAR_5, sizeof(VAR_5), 1, VAR_7->pgf_file);

}
