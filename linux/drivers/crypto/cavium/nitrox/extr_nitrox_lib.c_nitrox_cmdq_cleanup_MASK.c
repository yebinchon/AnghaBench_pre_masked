
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_device {int dummy; } ;
struct nitrox_cmdq {scalar_t__ instr_size; scalar_t__ qsize; scalar_t__ dma; scalar_t__ unalign_dma; int * base; int * unalign_base; int * compl_cnt_csr_addr; int * dbell_csr_addr; int backlog_qflush; struct nitrox_device* ndev; } ;


 int FUNC_0 (struct nitrox_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__,int *,scalar_t__) ;
 int FUNC_3 (struct nitrox_cmdq*) ;

__attribute__((used)) static void FUNC_4(struct nitrox_cmdq *VAR_0)
{
 struct nitrox_device *VAR_1;

 if (!VAR_0)
  return;

 if (!VAR_0->unalign_base)
  return;

 VAR_1 = VAR_0->ndev;
 FUNC_1(&VAR_0->backlog_qflush);

 FUNC_2(FUNC_0(VAR_1), VAR_0->qsize,
     VAR_0->unalign_base, VAR_0->unalign_dma);
 FUNC_3(VAR_0);

 VAR_0->dbell_csr_addr = ((void*)0);
 VAR_0->compl_cnt_csr_addr = ((void*)0);
 VAR_0->unalign_base = ((void*)0);
 VAR_0->base = ((void*)0);
 VAR_0->unalign_dma = 0;
 VAR_0->dma = 0;
 VAR_0->qsize = 0;
 VAR_0->instr_size = 0;
}
