
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct fsl_edma_hw_tcd {int csr; int dlast_sga; int doff; int biter; int citer; int slast; int nbytes; int soff; int attr; int daddr; int saddr; } ;
struct edma_regs {TYPE_3__* tcd; } ;
struct fsl_edma_engine {struct edma_regs regs; } ;
struct TYPE_4__ {size_t chan_id; } ;
struct TYPE_5__ {TYPE_1__ chan; } ;
struct fsl_edma_chan {TYPE_2__ vchan; struct fsl_edma_engine* edma; } ;
struct TYPE_6__ {int csr; int dlast_sga; int doff; int biter; int citer; int slast; int nbytes; int soff; int attr; int daddr; int saddr; } ;


 int FUNC_0 (struct fsl_edma_engine*,int ,int *) ;
 int FUNC_1 (struct fsl_edma_engine*,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct fsl_edma_chan *VAR_0,
      struct fsl_edma_hw_tcd *VAR_1)
{
 struct fsl_edma_engine *VAR_2 = VAR_0->edma;
 struct edma_regs *VAR_3 = &VAR_0->edma->regs;
 u32 VAR_4 = VAR_0->vchan.chan.chan_id;






 FUNC_1(VAR_2, 0, &VAR_3->tcd[VAR_4].csr);
 FUNC_0(VAR_2, FUNC_3(VAR_1->saddr), &VAR_3->tcd[VAR_4].saddr);
 FUNC_0(VAR_2, FUNC_3(VAR_1->daddr), &VAR_3->tcd[VAR_4].daddr);

 FUNC_1(VAR_2, FUNC_2(VAR_1->attr), &VAR_3->tcd[VAR_4].attr);
 FUNC_1(VAR_2, FUNC_2(VAR_1->soff), &VAR_3->tcd[VAR_4].soff);

 FUNC_0(VAR_2, FUNC_3(VAR_1->nbytes), &VAR_3->tcd[VAR_4].nbytes);
 FUNC_0(VAR_2, FUNC_3(VAR_1->slast), &VAR_3->tcd[VAR_4].slast);

 FUNC_1(VAR_2, FUNC_2(VAR_1->citer), &VAR_3->tcd[VAR_4].citer);
 FUNC_1(VAR_2, FUNC_2(VAR_1->biter), &VAR_3->tcd[VAR_4].biter);
 FUNC_1(VAR_2, FUNC_2(VAR_1->doff), &VAR_3->tcd[VAR_4].doff);

 FUNC_0(VAR_2, FUNC_3(VAR_1->dlast_sga),
   &VAR_3->tcd[VAR_4].dlast_sga);

 FUNC_1(VAR_2, FUNC_2(VAR_1->csr), &VAR_3->tcd[VAR_4].csr);
}
