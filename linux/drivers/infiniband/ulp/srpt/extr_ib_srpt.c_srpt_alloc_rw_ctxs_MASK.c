
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct srpt_rw_ctx {unsigned int nents; struct scatterlist* sg; int rw; } ;
struct srpt_send_ioctx {int n_rw_ctx; int n_rdma; struct srpt_rw_ctx* rw_ctxs; struct srpt_rw_ctx s_rw_ctx; struct srpt_rdma_ch* ch; int cmd; } ;
struct srpt_rdma_ch {TYPE_1__* sport; int qp; } ;
struct srp_direct_buf {int key; int len; int va; } ;
struct scatterlist {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct srpt_rw_ctx*) ;
 struct srpt_rw_ctx* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *,int ,int ,struct scatterlist*,unsigned int,int) ;
 int FUNC_5 (int *,int ,int ,struct scatterlist*,unsigned int,int ,int ,int ,int) ;
 int FUNC_6 (struct scatterlist*,unsigned int,struct scatterlist*) ;
 int FUNC_7 (struct scatterlist*) ;
 int FUNC_8 (struct scatterlist**,unsigned int*,int ,int,int) ;
 int FUNC_9 (struct scatterlist*,unsigned int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct srpt_send_ioctx *VAR_2,
  struct srp_direct_buf *VAR_3, int VAR_4, struct scatterlist **VAR_5,
  unsigned *VAR_6)
{
 enum dma_data_direction VAR_7 = FUNC_10(&VAR_2->cmd);
 struct srpt_rdma_ch *VAR_8 = VAR_2->ch;
 struct scatterlist *VAR_9 = ((void*)0);
 unsigned VAR_10;
 int VAR_11, VAR_12;

 if (VAR_4 == 1) {
  VAR_2->rw_ctxs = &VAR_2->s_rw_ctx;
 } else {
  VAR_2->rw_ctxs = FUNC_3(VAR_4, sizeof(*VAR_2->rw_ctxs),
   VAR_1);
  if (!VAR_2->rw_ctxs)
   return -VAR_0;
 }

 for (VAR_12 = VAR_2->n_rw_ctx; VAR_12 < VAR_4; VAR_12++, VAR_3++) {
  struct srpt_rw_ctx *VAR_13 = &VAR_2->rw_ctxs[VAR_12];
  u64 VAR_14 = FUNC_1(VAR_3->va);
  u32 VAR_15 = FUNC_0(VAR_3->len);
  u32 VAR_16 = FUNC_0(VAR_3->key);

  VAR_11 = FUNC_8(&VAR_13->sg, &VAR_13->nents, VAR_15, 0,
    VAR_12 < VAR_4 - 1);
  if (VAR_11)
   goto unwind;

  VAR_11 = FUNC_5(&VAR_13->rw, VAR_8->qp, VAR_8->sport->port,
    VAR_13->sg, VAR_13->nents, 0, VAR_14, VAR_16, VAR_7);
  if (VAR_11 < 0) {
   FUNC_9(VAR_13->sg, VAR_13->nents);
   goto unwind;
  }

  VAR_2->n_rdma += VAR_11;
  VAR_2->n_rw_ctx++;

  if (VAR_9) {
   FUNC_7(&VAR_9[VAR_10 - 1]);
   FUNC_6(VAR_9, VAR_10 + 1, VAR_13->sg);
  } else {
   *VAR_5 = VAR_13->sg;
  }

  VAR_9 = VAR_13->sg;
  VAR_10 = VAR_13->nents;

  *VAR_6 += VAR_13->nents;
 }

 return 0;

unwind:
 while (--VAR_12 >= 0) {
  struct srpt_rw_ctx *VAR_17 = &VAR_2->rw_ctxs[VAR_12];

  FUNC_4(&VAR_17->rw, VAR_8->qp, VAR_8->sport->port,
    VAR_17->sg, VAR_17->nents, VAR_7);
  FUNC_9(VAR_17->sg, VAR_17->nents);
 }
 if (VAR_2->rw_ctxs != &VAR_2->s_rw_ctx)
  FUNC_2(VAR_2->rw_ctxs);
 return VAR_11;
}
