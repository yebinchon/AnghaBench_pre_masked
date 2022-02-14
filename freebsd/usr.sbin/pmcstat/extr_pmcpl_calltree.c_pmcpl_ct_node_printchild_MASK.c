
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
struct pmcpl_ct_node {int pct_narc; scalar_t__ pct_type; TYPE_2__* pct_arc; TYPE_1__* pct_sym; TYPE_3__* pct_image; int pct_ifn; int pct_ifl; scalar_t__ pct_func; } ;
typedef int sourcefile ;
typedef int funcname ;
struct TYPE_8__ {int pa_graphfile; } ;
struct TYPE_7__ {scalar_t__ pi_vaddr; int pi_fullpath; } ;
struct TYPE_6__ {int pcta_call; int pcta_samples; struct pmcpl_ct_node* pcta_child; } ;
struct TYPE_5__ {int ps_name; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__,char*,int,int*,char*,int) ;
 int VAR_3 ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct pmcpl_ct_node *VAR_4, uintfptr_t VAR_5,
    int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 uintfptr_t VAR_10;
 struct pmcpl_ct_node *VAR_11;
 char VAR_12[VAR_0];
 char VAR_13[VAR_0];






 for (VAR_7=0 ; VAR_7<VAR_4->pct_narc; VAR_7++) {
  VAR_11 = VAR_4->pct_arc[VAR_7].pcta_child;

  FUNC_1(VAR_2.pa_graphfile, "cob=%s\n",
      FUNC_3(VAR_11->pct_image->pi_fullpath));

  VAR_10 = VAR_11->pct_image->pi_vaddr + VAR_11->pct_func;
  VAR_9 = 0;

  if (VAR_11->pct_type == VAR_1) {
   FUNC_1(VAR_2.pa_graphfile, "cfi=%s\ncfn=%s\n",
       FUNC_3(VAR_11->pct_ifl),
       FUNC_3(VAR_11->pct_ifn));
  } else if (FUNC_2(VAR_11->pct_image, VAR_10,
      VAR_12, sizeof(VAR_12), &VAR_9,
      VAR_13, sizeof(VAR_13))) {
   FUNC_1(VAR_2.pa_graphfile, "cfi=%s\ncfn=%s\n",
    VAR_12, VAR_13);
  } else {
   if (VAR_11->pct_sym != ((void*)0))
    FUNC_1(VAR_2.pa_graphfile,
        "cfi=???\ncfn=%s\n",
        FUNC_3(
            VAR_11->pct_sym->ps_name));
   else
    FUNC_1(VAR_2.pa_graphfile,
        "cfi=???\ncfn=%p\n", (void *)VAR_10);
  }


  FUNC_1(VAR_2.pa_graphfile, "calls=%u %p %u\n",
      VAR_4->pct_arc[VAR_7].pcta_call, (void *)VAR_10, VAR_9);





  FUNC_1(VAR_2.pa_graphfile, "%p %u", (void *)VAR_5, VAR_6);
  for (VAR_8 = 0; VAR_8<VAR_3; VAR_8++)
   FUNC_1(VAR_2.pa_graphfile, " %u",
       FUNC_0(VAR_8, &VAR_4->pct_arc[VAR_7].pcta_samples));
  FUNC_1(VAR_2.pa_graphfile, "\n");
 }
}
