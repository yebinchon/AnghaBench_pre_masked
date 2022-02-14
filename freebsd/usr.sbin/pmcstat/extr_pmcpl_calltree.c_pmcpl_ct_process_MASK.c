
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
typedef scalar_t__ uint32_t ;
struct pmcstat_symbol {scalar_t__ ps_start; } ;
struct pmcstat_process {int dummy; } ;
struct pmcstat_pmcrecord {int pr_pmcin; int pr_dubious_frames; } ;
struct pmcstat_pcmap {struct pmcstat_image* ppm_image; scalar_t__ ppm_lowpc; } ;
struct pmcstat_image {scalar_t__ pi_start; scalar_t__ pi_vaddr; } ;
struct TYPE_6__ {int * sb; } ;
struct pmcpl_ct_node {TYPE_2__ pct_samples; } ;
struct TYPE_7__ {scalar_t__ pa_ctdumpinstr; } ;
struct TYPE_5__ {int ps_callchain_dubious_frames; int ps_samples_unknown_function; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (struct pmcpl_ct_node*,int,scalar_t__,int) ;
 struct pmcpl_ct_node* FUNC_2 (struct pmcstat_image*,scalar_t__,struct pmcstat_symbol*,int *,int *) ;
 int FUNC_3 (struct pmcpl_ct_node*,struct pmcpl_ct_node*,int,int,int) ;
 struct pmcpl_ct_node* VAR_3 ;
 int FUNC_4 (TYPE_2__*) ;
 struct pmcstat_process* VAR_4 ;
 struct pmcstat_pcmap* FUNC_5 (struct pmcstat_process*,scalar_t__) ;
 TYPE_1__ VAR_5 ;
 struct pmcstat_symbol* FUNC_6 (struct pmcstat_image*,scalar_t__) ;

void
FUNC_7(struct pmcstat_process *VAR_6, struct pmcstat_pmcrecord *VAR_7,
    uint32_t VAR_8, uintfptr_t *VAR_9, int VAR_10, uint32_t VAR_11)
{
 int VAR_12, VAR_13, VAR_14;
 uintfptr_t VAR_15, VAR_16;
 struct pmcstat_image *VAR_17;
 struct pmcstat_symbol *VAR_18;
 struct pmcstat_pcmap *VAR_19[VAR_0];
 struct pmcstat_process *VAR_20;
 struct pmcpl_ct_node *VAR_21;
 struct pmcpl_ct_node *VAR_22[VAR_0+1];

 (void) VAR_11;

 FUNC_0(VAR_8>0 && VAR_8<=VAR_0);


 VAR_14 = VAR_7->pr_pmcin;





 VAR_20 = VAR_4;
 for (VAR_13 = 0; VAR_13 < (int)VAR_8; VAR_13++) {
  VAR_19[VAR_13] = FUNC_5(VAR_10 ?
      VAR_6 : VAR_20, VAR_9[VAR_13]);
  if (VAR_19[VAR_13] == ((void*)0)) {

   if (!VAR_10) {
    VAR_19[VAR_13] = FUNC_5(VAR_6, VAR_9[VAR_13]);
    if (VAR_19[VAR_13] != ((void*)0))
     VAR_20 = VAR_6;
   }
  }
  if (VAR_19[VAR_13] == ((void*)0))
   break;
 }
 if (VAR_13-- == 0) {
  VAR_5.ps_callchain_dubious_frames++;
  VAR_7->pr_dubious_frames++;
  return;
 }


 FUNC_4(&VAR_2);
 VAR_2.sb[VAR_14]++;




 VAR_22[0] = VAR_3;
 for (VAR_12 = 1; VAR_13 >= 0; VAR_13--) {
  VAR_17 = VAR_19[VAR_13]->ppm_image;
  VAR_16 = VAR_19[VAR_13]->ppm_lowpc +
      VAR_17->pi_vaddr - VAR_17->pi_start;

  VAR_15 = VAR_9[VAR_13] - VAR_16;




  if ((VAR_18 = FUNC_6(VAR_17, VAR_15)) != ((void*)0))
   VAR_15 = VAR_18->ps_start;
  else
   VAR_5.ps_samples_unknown_function++;

  VAR_21 = FUNC_2(VAR_17, VAR_15, VAR_18, ((void*)0), ((void*)0));
  if (VAR_21 == ((void*)0)) {
   VAR_5.ps_callchain_dubious_frames++;
   continue;
  }
  VAR_22[VAR_12++] = VAR_21;
 }

 if (VAR_12 == 1)
  return;
 VAR_13 = VAR_12;

 VAR_21 = VAR_22[0];
 for (VAR_12 = 1; VAR_12 < VAR_13; VAR_12++)
  FUNC_3(VAR_22[VAR_12-1], VAR_22[VAR_12], VAR_14, 1, 1);




 FUNC_4(&VAR_22[VAR_13-1]->pct_samples);
 VAR_22[VAR_13-1]->pct_samples.sb[VAR_14]++;


 if (VAR_1.pa_ctdumpinstr)
  FUNC_1(VAR_22[VAR_13-1], VAR_14, VAR_9[0] -
      (VAR_19[0]->ppm_lowpc + VAR_19[0]->ppm_image->pi_vaddr -
       VAR_19[0]->ppm_image->pi_start), 1);
}
