
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
typedef int uint32_t ;
struct pmcstat_process {int dummy; } ;
struct pmcstat_pmcrecord {int pr_pmcid; } ;
struct pmcstat_pcmap {scalar_t__ ppm_lowpc; scalar_t__ ppm_highpc; struct pmcstat_image* ppm_image; } ;
struct pmcstat_image {scalar_t__ pi_type; scalar_t__ pi_end; scalar_t__ pi_start; int pi_gmlist; } ;
struct pmcstat_gmonfile {int pgf_nbuckets; int pgf_ndatabytes; int pgf_overflow; scalar_t__ pgf_nsamples; int * pgf_gmondata; int * pgf_file; int pgf_pmcid; int pgf_name; } ;
struct gmonhdr {int dummy; } ;
typedef int pmc_id_t ;
typedef scalar_t__ WIDEHISTCOUNTER ;
struct TYPE_5__ {int pa_flags; int pa_samplesdir; } ;
struct TYPE_4__ {int ps_samples_indeterminable; int ps_samples_unknown_offset; } ;
typedef scalar_t__ HISTCOUNTER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,struct pmcstat_gmonfile*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_1 (int) ;
 struct pmcstat_gmonfile* FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int VAR_9 ;
 int FUNC_5 (struct pmcstat_gmonfile*,struct pmcstat_image*) ;
 int FUNC_6 (int ,struct pmcstat_image*,int ) ;
 int FUNC_7 (struct pmcstat_gmonfile*) ;
 int FUNC_8 (struct pmcstat_image*,TYPE_2__*) ;
 struct pmcstat_gmonfile* FUNC_9 (struct pmcstat_image*,int ) ;
 struct pmcstat_process* VAR_10 ;
 struct pmcstat_pcmap* FUNC_10 (struct pmcstat_process*,scalar_t__) ;
 TYPE_1__ VAR_11 ;

void
FUNC_11(struct pmcstat_process *VAR_12, struct pmcstat_pmcrecord *VAR_13,
    uint32_t VAR_14, uintfptr_t *VAR_15, int VAR_16, uint32_t VAR_17)
{
 struct pmcstat_pcmap *VAR_18;
 struct pmcstat_image *VAR_19;
 struct pmcstat_gmonfile *VAR_20;
 uintfptr_t VAR_21;
 HISTCOUNTER *VAR_22;
 WIDEHISTCOUNTER *VAR_23;
 pmc_id_t VAR_24;

 (void) VAR_14; (void) VAR_16; (void) VAR_17;

 VAR_18 = FUNC_10(VAR_16 ? VAR_12 : VAR_10, VAR_15[0]);
 if (VAR_18 == ((void*)0)) {

  VAR_11.ps_samples_unknown_offset++;
  return;
 }

 FUNC_1(VAR_15[0] >= VAR_18->ppm_lowpc && VAR_15[0] < VAR_18->ppm_highpc);

 VAR_19 = VAR_18->ppm_image;
 VAR_24 = VAR_13->pr_pmcid;





 if (VAR_19->pi_type == VAR_5)
  FUNC_8(VAR_19, &VAR_7);

 FUNC_1(VAR_19->pi_type != VAR_5);


 if (VAR_19->pi_type == VAR_4) {
  VAR_11.ps_samples_indeterminable++;
  return;
 }





 VAR_20 = FUNC_9(VAR_19, VAR_24);
 if (VAR_20 == ((void*)0)) {
  if (VAR_8 == 0) {

   if (VAR_7.pa_flags & VAR_1)
    VAR_8 = sizeof(WIDEHISTCOUNTER);
   else
    VAR_8 = sizeof(HISTCOUNTER);
  }

  if ((VAR_20 = FUNC_2(1, sizeof(*VAR_20))) == ((void*)0))
   FUNC_3(VAR_0, "ERROR:");

  VAR_20->pgf_gmondata = ((void*)0);
  VAR_20->pgf_name = FUNC_6(VAR_7.pa_samplesdir,
      VAR_19, VAR_24);
  VAR_20->pgf_pmcid = VAR_24;
  FUNC_1(VAR_19->pi_end > VAR_19->pi_start);
  VAR_20->pgf_nbuckets = FUNC_4(VAR_19->pi_end - VAR_19->pi_start,
      VAR_2);
  VAR_20->pgf_ndatabytes = sizeof(struct gmonhdr) +
      VAR_20->pgf_nbuckets * VAR_8;
  VAR_20->pgf_nsamples = 0;
  VAR_20->pgf_file = ((void*)0);

  FUNC_5(VAR_20, VAR_19);

  FUNC_0(&VAR_19->pi_gmlist, VAR_20, VAR_9);
 }





 if (VAR_20->pgf_gmondata == ((void*)0))
  FUNC_7(VAR_20);

 FUNC_1(VAR_20->pgf_gmondata != ((void*)0));





 VAR_21 = (VAR_15[0] - VAR_18->ppm_lowpc) / VAR_2;

 FUNC_1(VAR_21 < VAR_20->pgf_nbuckets);

 if (VAR_7.pa_flags & VAR_1) {
  VAR_23 = (WIDEHISTCOUNTER *) ((uintptr_t) VAR_20->pgf_gmondata +
      sizeof(struct gmonhdr));


  if (VAR_23[VAR_21] < VAR_6)
   VAR_23[VAR_21]++;
  else
   VAR_20->pgf_overflow = 1;
 } else {
  VAR_22 = (HISTCOUNTER *) ((uintptr_t) VAR_20->pgf_gmondata +
      sizeof(struct gmonhdr));


  if (VAR_22[VAR_21] < VAR_3)
   VAR_22[VAR_21]++;
  else
   VAR_20->pgf_overflow = 1;
 }

 VAR_20->pgf_nsamples++;
}
