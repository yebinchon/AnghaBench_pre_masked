
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
struct TYPE_7__ {int npmcs; int * sb; } ;
struct pmcpl_ct_node {int pct_ninstr; TYPE_2__* pct_instr; TYPE_1__ pct_samples; int pct_sym; scalar_t__ pct_func; TYPE_3__* pct_image; } ;
typedef int sourcefile ;
typedef int funcname ;
typedef int ffuncname ;
typedef int buffer ;
struct TYPE_11__ {scalar_t__* sb; } ;
struct TYPE_10__ {int pa_verbosity; int pa_printfile; } ;
struct TYPE_9__ {scalar_t__ pi_vaddr; } ;
struct TYPE_8__ {TYPE_6__ pctf_samples; scalar_t__ pctf_func; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,TYPE_6__*) ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,void*,char*,char*) ;
 int FUNC_3 (struct pmcpl_ct_node*,int,scalar_t__,unsigned int) ;
 struct pmcpl_ct_node* FUNC_4 (TYPE_3__*,scalar_t__,int ,char*,char*) ;
 int FUNC_5 (struct pmcpl_ct_node*,struct pmcpl_ct_node*,int,unsigned int,int ) ;
 int FUNC_6 (TYPE_3__*,scalar_t__,char*,int,unsigned int*,char*,int) ;
 int VAR_2 ;
 int FUNC_7 (char*,int,char*,char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static void
FUNC_9(struct pmcpl_ct_node *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned VAR_6, VAR_7, VAR_8;
 uintfptr_t VAR_9, VAR_10, VAR_11;
 char VAR_12[VAR_0];
 char VAR_13[VAR_0], VAR_14[VAR_0];
 char VAR_15[VAR_0];
 struct pmcpl_ct_node *VAR_16;




 VAR_9 = VAR_3->pct_image->pi_vaddr + VAR_3->pct_func;
 VAR_6 = 0;
 if (!FUNC_6(VAR_3->pct_image, VAR_9,
     VAR_12, sizeof(VAR_12), &VAR_6,
     VAR_13, sizeof(VAR_13)))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->pct_ninstr; VAR_4++) {
  VAR_10 = VAR_3->pct_image->pi_vaddr +
      VAR_3->pct_instr[VAR_4].pctf_func;
  VAR_7 = 0;
  if (!FUNC_6(VAR_3->pct_image, VAR_10,
      VAR_12, sizeof(VAR_12), &VAR_7,
      VAR_14, sizeof(VAR_14)))
   continue;

  if (FUNC_8(VAR_14, VAR_13) == 0)
   continue;







  if (VAR_1.pa_verbosity >= 2)
   FUNC_2(VAR_1.pa_printfile,
       "WARNING: inlined function at %p %s in %s\n",
       (void *)VAR_10, VAR_14, VAR_13);

  FUNC_7(VAR_15, sizeof(VAR_15), "%s@%s",
   VAR_14, VAR_13);
  VAR_16 = FUNC_4(VAR_3->pct_image,
      VAR_3->pct_func, VAR_3->pct_sym, VAR_12, VAR_15);
  FUNC_1(VAR_16 != ((void*)0));
  VAR_11 = VAR_3->pct_instr[VAR_4].pctf_func;
  for (VAR_5 = 0; VAR_5<VAR_2; VAR_5++) {
   VAR_8 = FUNC_0(VAR_5,
       &VAR_3->pct_instr[VAR_4].pctf_samples);
   if (VAR_8 == 0)
    continue;
   FUNC_3(VAR_16, VAR_5, VAR_11, VAR_8);
   FUNC_5(VAR_3, VAR_16, VAR_5, VAR_8, 0);
   if (VAR_5 < VAR_3->pct_samples.npmcs)
    VAR_3->pct_samples.sb[VAR_5] -=
        VAR_3->pct_instr[VAR_4].pctf_samples.sb[VAR_5];
   VAR_3->pct_instr[VAR_4].pctf_samples.sb[VAR_5] = 0;
  }
 }
}
