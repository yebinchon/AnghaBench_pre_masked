
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef scalar_t__ uintfptr_t ;
typedef int uint32_t ;
struct pmcstat_symbol {scalar_t__ ps_start; scalar_t__ ps_end; int ps_name; } ;
struct pmcstat_process {int dummy; } ;
struct pmcstat_pmcrecord {int dummy; } ;
struct pmcstat_pcmap {scalar_t__ ppm_lowpc; scalar_t__ ppm_highpc; struct pmcstat_image* ppm_image; } ;
struct pmcstat_image {scalar_t__ pi_vaddr; scalar_t__ pi_start; } ;
struct TYPE_4__ {int pa_graphfile; } ;
struct TYPE_3__ {int ps_samples_unknown_offset; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,void*,char*,int ,int ) ;
 struct pmcstat_process* VAR_1 ;
 struct pmcstat_pcmap* FUNC_2 (struct pmcstat_process*,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 char* FUNC_3 (int ) ;
 struct pmcstat_symbol* FUNC_4 (struct pmcstat_image*,scalar_t__) ;

void
FUNC_5(struct pmcstat_process *VAR_3, struct pmcstat_pmcrecord *VAR_4,
    uint32_t VAR_5, uintfptr_t *VAR_6, int VAR_7, uint32_t VAR_8)
{
 struct pmcstat_pcmap *VAR_9;
 struct pmcstat_symbol *VAR_10;
 uintfptr_t VAR_11;
 struct pmcstat_image *VAR_12;

 (void) VAR_4; (void) VAR_5; (void) VAR_7; (void) VAR_8;

 VAR_9 = FUNC_2(VAR_7 ? VAR_3 : VAR_1, VAR_6[0]);
 if (VAR_9 == ((void*)0)) {

  VAR_2.ps_samples_unknown_offset++;
  return;
 }

 FUNC_0(VAR_6[0] >= VAR_9->ppm_lowpc && VAR_6[0] < VAR_9->ppm_highpc);

 VAR_12 = VAR_9->ppm_image;
 VAR_11 = VAR_6[0] - (VAR_9->ppm_lowpc +
  (VAR_12->pi_vaddr - VAR_12->pi_start));
 VAR_10 = FUNC_4(VAR_12, VAR_11);
 if (VAR_10 == ((void*)0))
  return;

 FUNC_1(VAR_0.pa_graphfile, "%p %s 0x%jd 0x%jd\n",
  (void *)VAR_6[0],
  FUNC_3(VAR_10->ps_name),
  (uintmax_t)(VAR_10->ps_start +
  VAR_12->pi_vaddr), (uintmax_t)(VAR_10->ps_end +
  VAR_12->pi_vaddr));
}
