
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uintfptr_t ;
struct pmcpl_ct_node {int pct_ninstr; struct pmcpl_ct_instr* pct_instr; int pct_instr_c; } ;
struct TYPE_3__ {unsigned int* sb; } ;
struct pmcpl_ct_instr {scalar_t__ pctf_func; TYPE_1__ pctf_samples; } ;


 int FUNC_0 (int,int *,struct pmcpl_ct_instr**) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct pmcpl_ct_node *VAR_0, int VAR_1,
    uintfptr_t VAR_2, unsigned VAR_3)
{
 int VAR_4;
 struct pmcpl_ct_instr *VAR_5;

 for (VAR_4 = 0; VAR_4<VAR_0->pct_ninstr; VAR_4++) {
  if (VAR_0->pct_instr[VAR_4].pctf_func == VAR_2) {
   VAR_5 = &VAR_0->pct_instr[VAR_4];
   FUNC_1(&VAR_5->pctf_samples);
   VAR_5->pctf_samples.sb[VAR_1] += VAR_3;
   return;
  }
 }

 FUNC_0(VAR_0->pct_ninstr, &VAR_0->pct_instr_c, &VAR_0->pct_instr);
 VAR_5 = &VAR_0->pct_instr[VAR_0->pct_ninstr];
 VAR_5->pctf_func = VAR_2;
 FUNC_2(&VAR_5->pctf_samples);
 FUNC_1(&VAR_5->pctf_samples);
 VAR_5->pctf_samples.sb[VAR_1] = VAR_3;
 VAR_0->pct_ninstr++;
}
