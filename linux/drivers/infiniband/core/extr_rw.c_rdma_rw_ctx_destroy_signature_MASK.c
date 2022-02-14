
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct rdma_rw_ctx {scalar_t__ type; TYPE_2__* reg; } ;
struct ib_qp {TYPE_1__* pd; int sig_mrs; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int mr; } ;
struct TYPE_3__ {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct scatterlist*,scalar_t__,int) ;
 int FUNC_2 (struct ib_qp*,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;

void FUNC_4(struct rdma_rw_ctx *VAR_1, struct ib_qp *VAR_2,
  u8 VAR_3, struct scatterlist *VAR_4, u32 VAR_5,
  struct scatterlist *VAR_6, u32 VAR_7,
  enum dma_data_direction VAR_8)
{
 if (FUNC_0(VAR_1->type != VAR_0))
  return;

 FUNC_2(VAR_2, &VAR_2->sig_mrs, VAR_1->reg->mr);
 FUNC_3(VAR_1->reg);

 FUNC_1(VAR_2->pd->device, VAR_4, VAR_5, VAR_8);
 if (VAR_7)
  FUNC_1(VAR_2->pd->device, VAR_6, VAR_7, VAR_8);
}
