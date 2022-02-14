
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
typedef scalar_t__ uint32_t ;
struct pmcstat_symbol {int dummy; } ;
struct pmcstat_process {int dummy; } ;
struct pmcstat_pmcrecord {int dummy; } ;
struct pmcstat_pcmap {scalar_t__ ppm_lowpc; scalar_t__ ppm_highpc; struct pmcstat_image* ppm_image; } ;
struct pmcstat_image {scalar_t__ pi_vaddr; scalar_t__ pi_start; } ;
typedef int funcname ;
typedef int filename ;
struct TYPE_2__ {int pa_graphfile; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct pmcstat_image*,scalar_t__,char*,int,unsigned int*,char*,int) ;
 struct pmcstat_process* VAR_2 ;
 struct pmcstat_pcmap* FUNC_3 (struct pmcstat_process*,scalar_t__) ;
 struct pmcstat_symbol* FUNC_4 (struct pmcstat_image*,scalar_t__) ;

void
FUNC_5(struct pmcstat_process *VAR_3, struct pmcstat_pmcrecord *VAR_4,
    uint32_t VAR_5, uintfptr_t *VAR_6, int VAR_7, uint32_t VAR_8)
{
 struct pmcstat_pcmap *VAR_9;
 struct pmcstat_symbol *VAR_10;
 uintfptr_t VAR_11;
 struct pmcstat_image *VAR_12;
 int VAR_13;
 char VAR_14[VAR_0], VAR_15[VAR_0];
 unsigned VAR_16;

 (void) VAR_4; (void) VAR_5; (void) VAR_7; (void) VAR_8;

 for (VAR_13 = 0; VAR_13 < (int) VAR_5; VAR_13++) {
  VAR_9 = ((void*)0);
  VAR_10 = ((void*)0);
  VAR_12 = ((void*)0);
  VAR_14[0] = '\0';
  VAR_15[0] = '\0';
  VAR_16 = 0;

  VAR_9 = FUNC_3(VAR_7 ? VAR_3 : VAR_2, VAR_6[VAR_13]);
  if (VAR_9 != ((void*)0)) {
   FUNC_0(VAR_6[VAR_13] >= VAR_9->ppm_lowpc && VAR_6[VAR_13] < VAR_9->ppm_highpc);
   VAR_12 = VAR_9->ppm_image;
   VAR_11 = VAR_6[VAR_13] - (VAR_9->ppm_lowpc +
    (VAR_12->pi_vaddr - VAR_12->pi_start));
   VAR_10 = FUNC_4(VAR_12, VAR_11);
  }

  if (VAR_9 != ((void*)0) && VAR_12 != ((void*)0) && VAR_10 != ((void*)0)) {
   (void) FUNC_2(VAR_12, VAR_6[VAR_13],
       VAR_14, sizeof(VAR_14), &VAR_16, VAR_15, sizeof(VAR_15));
  }

  if (VAR_9 != ((void*)0) && VAR_10 != ((void*)0)) {
   FUNC_1(VAR_1.pa_graphfile, "%p %s %s:%d\n",
       (void *)VAR_6[VAR_13],
       VAR_15,
       VAR_14,
       VAR_16);
  } else {
   FUNC_1(VAR_1.pa_graphfile, "%p <unknown> ??:0\n",
       (void *) VAR_6[VAR_13]);
  }
 }
 FUNC_1(VAR_1.pa_graphfile, "--\n");
}
