
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srpt_rw_ctx {int nents; int sg; int rw; } ;
struct srpt_send_ioctx {int n_rw_ctx; struct srpt_rw_ctx* rw_ctxs; struct srpt_rw_ctx s_rw_ctx; int cmd; } ;
struct srpt_rdma_ch {TYPE_1__* sport; int qp; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int port; } ;


 int FUNC_0 (struct srpt_rw_ctx*) ;
 int FUNC_1 (int *,int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct srpt_rdma_ch *VAR_0,
        struct srpt_send_ioctx *VAR_1)
{
 enum dma_data_direction VAR_2 = FUNC_3(&VAR_1->cmd);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->n_rw_ctx; VAR_3++) {
  struct srpt_rw_ctx *VAR_4 = &VAR_1->rw_ctxs[VAR_3];

  FUNC_1(&VAR_4->rw, VAR_0->qp, VAR_0->sport->port,
    VAR_4->sg, VAR_4->nents, VAR_2);
  FUNC_2(VAR_4->sg, VAR_4->nents);
 }

 if (VAR_1->rw_ctxs != &VAR_1->s_rw_ctx)
  FUNC_0(VAR_1->rw_ctxs);
}
