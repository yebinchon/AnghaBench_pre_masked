
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {scalar_t__ orig_r28; scalar_t__ kpc; scalar_t__ ksp; int ior; int isr; int iir; int sar; int * iaoq; int * iasq; int * sr; int * fr; int * gr; } ;
struct pdc_hpmc_pim_20 {int * cr; int iaoq_back; int iasq_back; int * sr; int * fr; int * gr; } ;
struct pdc_hpmc_pim_11 {int * cr; int iaoq_back; int iasq_back; int * sr; int * fr; int * gr; } ;
struct TYPE_2__ {scalar_t__ cpu_type; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(struct pt_regs *VAR_2)
{
    register int VAR_3;
    extern unsigned int VAR_4[];
    struct pdc_hpmc_pim_11 *VAR_5;
    struct pdc_hpmc_pim_20 *VAR_6;

    if (VAR_0.cpu_type >= VAR_1) {

 VAR_6 = (struct pdc_hpmc_pim_20 *)VAR_4;
 VAR_2->gr[0] = VAR_6->cr[22];

 for (VAR_3 = 1; VAR_3 < 32; VAR_3++)
     VAR_2->gr[VAR_3] = VAR_6->gr[VAR_3];

 for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
     VAR_2->fr[VAR_3] = VAR_6->fr[VAR_3];

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
     VAR_2->sr[VAR_3] = VAR_6->sr[VAR_3];

 VAR_2->iasq[0] = VAR_6->cr[17];
 VAR_2->iasq[1] = VAR_6->iasq_back;
 VAR_2->iaoq[0] = VAR_6->cr[18];
 VAR_2->iaoq[1] = VAR_6->iaoq_back;

 VAR_2->sar = VAR_6->cr[11];
 VAR_2->iir = VAR_6->cr[19];
 VAR_2->isr = VAR_6->cr[20];
 VAR_2->ior = VAR_6->cr[21];
    }
    else {
 VAR_5 = (struct pdc_hpmc_pim_11 *)VAR_4;

 VAR_2->gr[0] = VAR_5->cr[22];

 for (VAR_3 = 1; VAR_3 < 32; VAR_3++)
     VAR_2->gr[VAR_3] = VAR_5->gr[VAR_3];

 for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
     VAR_2->fr[VAR_3] = VAR_5->fr[VAR_3];

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
     VAR_2->sr[VAR_3] = VAR_5->sr[VAR_3];

 VAR_2->iasq[0] = VAR_5->cr[17];
 VAR_2->iasq[1] = VAR_5->iasq_back;
 VAR_2->iaoq[0] = VAR_5->cr[18];
 VAR_2->iaoq[1] = VAR_5->iaoq_back;

 VAR_2->sar = VAR_5->cr[11];
 VAR_2->iir = VAR_5->cr[19];
 VAR_2->isr = VAR_5->cr[20];
 VAR_2->ior = VAR_5->cr[21];
    }






    VAR_2->ksp = 0;
    VAR_2->kpc = 0;
    VAR_2->orig_r28 = 0;
}
