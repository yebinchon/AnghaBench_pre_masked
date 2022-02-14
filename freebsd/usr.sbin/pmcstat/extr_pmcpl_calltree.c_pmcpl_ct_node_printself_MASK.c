
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
struct pmcpl_ct_node {scalar_t__ pct_type; int pct_ninstr; int pct_samples; TYPE_2__* pct_instr; TYPE_3__* pct_image; scalar_t__ pct_func; TYPE_1__* pct_sym; int pct_ifn; int pct_ifl; } ;
typedef int sourcefile ;
typedef int funcname ;
struct TYPE_8__ {int pa_graphfile; } ;
struct TYPE_7__ {scalar_t__ pi_vaddr; int pi_fullpath; } ;
struct TYPE_6__ {int pctf_samples; scalar_t__ pctf_func; } ;
struct TYPE_5__ {int ps_name; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct pmcpl_ct_node*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__,char*,int,int*,char*,int) ;
 int VAR_3 ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct pmcpl_ct_node *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 uintfptr_t VAR_9, VAR_10;
 char VAR_11[VAR_0];
 char VAR_12[VAR_0];




 FUNC_1(VAR_2.pa_graphfile, "ob=%s\n",
     FUNC_4(VAR_4->pct_image->pi_fullpath));




 VAR_9 = VAR_4->pct_image->pi_vaddr + VAR_4->pct_func;
 VAR_7 = 0;
 if (VAR_4->pct_type == VAR_1) {
  FUNC_1(VAR_2.pa_graphfile, "fl=%s\nfn=%s\n",
      FUNC_4(VAR_4->pct_ifl),
      FUNC_4(VAR_4->pct_ifn));
 } else if (FUNC_3(VAR_4->pct_image, VAR_9,
     VAR_11, sizeof(VAR_11), &VAR_7,
     VAR_12, sizeof(VAR_12))) {
  FUNC_1(VAR_2.pa_graphfile, "fl=%s\nfn=%s\n",
      VAR_11, VAR_12);
 } else {
  if (VAR_4->pct_sym != ((void*)0))
   FUNC_1(VAR_2.pa_graphfile, "fl=???\nfn=%s\n",
       FUNC_4(VAR_4->pct_sym->ps_name));
  else
   FUNC_1(VAR_2.pa_graphfile, "fl=???\nfn=%p\n",
       (void *)(VAR_4->pct_image->pi_vaddr + VAR_4->pct_func));
 }




 if (VAR_4->pct_ninstr > 0) {



  for (VAR_5 = 0; VAR_5 < VAR_4->pct_ninstr; VAR_5++) {
   VAR_10 = VAR_4->pct_image->pi_vaddr +
       VAR_4->pct_instr[VAR_5].pctf_func;
   VAR_8 = 0;
   FUNC_3(VAR_4->pct_image, VAR_10,
       VAR_11, sizeof(VAR_11), &VAR_8,
       VAR_12, sizeof(VAR_12));
   FUNC_1(VAR_2.pa_graphfile, "%p %u",
       (void *)VAR_10, VAR_8);
   for (VAR_6 = 0; VAR_6<VAR_3; VAR_6++)
    FUNC_1(VAR_2.pa_graphfile, " %u",
        FUNC_0(VAR_6,
        &VAR_4->pct_instr[VAR_5].pctf_samples));
   FUNC_1(VAR_2.pa_graphfile, "\n");
  }
 } else {

  FUNC_1(VAR_2.pa_graphfile, "%p %u", (void *)VAR_9, VAR_7);
  for (VAR_5 = 0; VAR_5<VAR_3 ; VAR_5++)
   FUNC_1(VAR_2.pa_graphfile, " %u",
       FUNC_0(VAR_5, &VAR_4->pct_samples));
  FUNC_1(VAR_2.pa_graphfile, "\n");
 }

 FUNC_2(VAR_4, VAR_9, VAR_7);
}
