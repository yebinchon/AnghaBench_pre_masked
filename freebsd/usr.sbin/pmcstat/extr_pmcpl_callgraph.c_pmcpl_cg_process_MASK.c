
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
typedef size_t uint32_t ;
struct pmcstat_symbol {scalar_t__ ps_start; } ;
struct pmcstat_process {int dummy; } ;
struct pmcstat_pmcrecord {int pr_dubious_frames; int pr_pmcid; } ;
struct pmcstat_pcmap {scalar_t__ ppm_lowpc; struct pmcstat_image* ppm_image; } ;
struct pmcstat_image {scalar_t__ pi_start; scalar_t__ pi_vaddr; } ;
struct pmcstat_cgnode {int pcg_count; } ;
typedef int pmc_id_t ;
struct TYPE_4__ {scalar_t__ pa_graphdepth; } ;
struct TYPE_3__ {int ps_callchain_dubious_frames; } ;


 TYPE_2__ VAR_0 ;
 struct pmcstat_cgnode* FUNC_0 (struct pmcstat_cgnode*,struct pmcstat_image*,scalar_t__) ;
 struct pmcstat_cgnode* FUNC_1 (struct pmcstat_process*,int ,scalar_t__,int) ;
 struct pmcstat_process* VAR_1 ;
 struct pmcstat_pcmap* FUNC_2 (struct pmcstat_process*,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 struct pmcstat_symbol* FUNC_3 (struct pmcstat_image*,scalar_t__) ;

void
FUNC_4(struct pmcstat_process *VAR_3, struct pmcstat_pmcrecord *VAR_4,
    uint32_t VAR_5, uintfptr_t *VAR_6, int VAR_7, uint32_t VAR_8)
{
 uintfptr_t VAR_9, VAR_10;
 uint32_t VAR_11;
 struct pmcstat_image *VAR_12;
 struct pmcstat_pcmap *VAR_13;
 struct pmcstat_symbol *VAR_14;
 struct pmcstat_cgnode *VAR_15, *VAR_16;
 struct pmcstat_process *VAR_17;
 pmc_id_t VAR_18;

 (void) VAR_8;






 VAR_9 = VAR_6[0];
 VAR_18 = VAR_4->pr_pmcid;
 VAR_16 = VAR_15 = FUNC_1(VAR_3, VAR_18, VAR_9, VAR_7);
 if (VAR_15 == ((void*)0)) {
  VAR_2.ps_callchain_dubious_frames++;
  VAR_4->pr_dubious_frames++;
  return;
 }

 VAR_15->pcg_count++;
 VAR_17 = VAR_1;

 for (VAR_11 = 1; VAR_11 < (uint32_t) VAR_0.pa_graphdepth && VAR_11 < VAR_5; VAR_11++,
     VAR_15 = VAR_16) {
  VAR_9 = VAR_6[VAR_11];

  VAR_13 = FUNC_2(VAR_7 ? VAR_3 : VAR_17, VAR_9);
  if (VAR_13 == ((void*)0)) {

   if (!VAR_7) {
    VAR_13 = FUNC_2(VAR_3, VAR_9);
    if (VAR_13 != ((void*)0))
     VAR_17 = VAR_3;
   }
  }
  if (VAR_13 == ((void*)0))
   continue;

  VAR_12 = VAR_13->ppm_image;
  VAR_10 = VAR_13->ppm_lowpc + VAR_12->pi_vaddr -
      VAR_12->pi_start;
  VAR_9 -= VAR_10;

  if ((VAR_14 = FUNC_3(VAR_12, VAR_9)) != ((void*)0))
   VAR_9 = VAR_14->ps_start;

  VAR_16 = FUNC_0(VAR_15, VAR_12, VAR_9);
  VAR_16->pcg_count++;
 }
}
