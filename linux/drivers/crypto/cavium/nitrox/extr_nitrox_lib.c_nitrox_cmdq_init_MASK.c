
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_device {int qlen; } ;
struct nitrox_cmdq {int qsize; int instr_size; int backlog_count; int pending_count; int backlog_qflush; int backlog_head; int response_head; int backlog_qlock; int resp_qlock; int cmd_qlock; scalar_t__ write_idx; scalar_t__ unalign_dma; scalar_t__ dma; scalar_t__ unalign_base; scalar_t__ base; struct nitrox_device* ndev; } ;


 int FUNC_0 (struct nitrox_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,int,scalar_t__*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct nitrox_cmdq *VAR_3, int VAR_4)
{
 struct nitrox_device *VAR_5 = VAR_3->ndev;

 VAR_3->qsize = (VAR_5->qlen * VAR_3->instr_size) + VAR_4;
 VAR_3->unalign_base = FUNC_5(FUNC_0(VAR_5), VAR_3->qsize,
      &VAR_3->unalign_dma,
      VAR_1);
 if (!VAR_3->unalign_base)
  return -VAR_0;

 VAR_3->dma = FUNC_3(VAR_3->unalign_dma, VAR_4);
 VAR_3->base = VAR_3->unalign_base + (VAR_3->dma - VAR_3->unalign_dma);
 VAR_3->write_idx = 0;

 FUNC_6(&VAR_3->cmd_qlock);
 FUNC_6(&VAR_3->resp_qlock);
 FUNC_6(&VAR_3->backlog_qlock);

 FUNC_1(&VAR_3->response_head);
 FUNC_1(&VAR_3->backlog_head);
 FUNC_2(&VAR_3->backlog_qflush, VAR_2);

 FUNC_4(&VAR_3->pending_count, 0);
 FUNC_4(&VAR_3->backlog_count, 0);
 return 0;
}
