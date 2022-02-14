
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_11__ {int invalidate_rkey; } ;
struct TYPE_14__ {int num_sge; TYPE_5__* next; TYPE_3__ ex; int opcode; TYPE_4__* sg_list; } ;
struct TYPE_15__ {int rkey; TYPE_6__ wr; int remote_addr; } ;
struct TYPE_12__ {scalar_t__ length; } ;
struct TYPE_13__ {TYPE_6__* next; } ;
struct TYPE_10__ {TYPE_5__ wr; } ;
struct rdma_rw_reg_ctx {TYPE_8__* mr; TYPE_7__ wr; TYPE_4__ sge; TYPE_2__ reg_wr; TYPE_5__ inv_wr; } ;
struct rdma_rw_ctx {int nr_ops; struct rdma_rw_reg_ctx* reg; int type; } ;
struct ib_qp {int rdma_mrs; int device; int integrity_en; TYPE_1__* pd; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_16__ {int lkey; scalar_t__ need_inval; } ;
struct TYPE_9__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ib_qp*,int *,TYPE_8__*) ;
 struct rdma_rw_reg_ctx* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct rdma_rw_reg_ctx*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ib_qp*,int ,struct rdma_rw_reg_ctx*,struct scatterlist*,int,int) ;
 struct scatterlist* FUNC_7 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_8(struct rdma_rw_ctx *VAR_7, struct ib_qp *VAR_8,
  u8 VAR_9, struct scatterlist *VAR_10, u32 VAR_11, u32 VAR_12,
  u64 VAR_13, u32 VAR_14, enum dma_data_direction VAR_15)
{
 struct rdma_rw_reg_ctx *VAR_16 = ((void*)0);
 u32 VAR_17 = FUNC_5(VAR_8->pd->device,
          VAR_8->integrity_en);
 int VAR_18, VAR_19, VAR_20 = 0, VAR_21 = 0;

 VAR_7->nr_ops = (VAR_11 + VAR_17 - 1) / VAR_17;
 VAR_7->reg = FUNC_1(VAR_7->nr_ops, sizeof(*VAR_7->reg), VAR_2);
 if (!VAR_7->reg) {
  VAR_20 = -VAR_1;
  goto out;
 }

 for (VAR_18 = 0; VAR_18 < VAR_7->nr_ops; VAR_18++) {
  struct rdma_rw_reg_ctx *VAR_22 = &VAR_7->reg[VAR_18];
  u32 VAR_23 = FUNC_3(VAR_11, VAR_17);

  VAR_20 = FUNC_6(VAR_8, VAR_9, VAR_22, VAR_10, VAR_11,
    VAR_12);
  if (VAR_20 < 0)
   goto out_free;
  VAR_21 += VAR_20;

  if (VAR_16) {
   if (VAR_22->mr->need_inval)
    VAR_16->wr.wr.next = &VAR_22->inv_wr;
   else
    VAR_16->wr.wr.next = &VAR_22->reg_wr.wr;
  }

  VAR_22->reg_wr.wr.next = &VAR_22->wr.wr;

  VAR_22->wr.wr.sg_list = &VAR_22->sge;
  VAR_22->wr.wr.num_sge = 1;
  VAR_22->wr.remote_addr = VAR_13;
  VAR_22->wr.rkey = VAR_14;
  if (VAR_15 == VAR_0) {
   VAR_22->wr.wr.opcode = VAR_5;
  } else if (!FUNC_4(VAR_8->device, VAR_9)) {
   VAR_22->wr.wr.opcode = VAR_3;
  } else {
   VAR_22->wr.wr.opcode = VAR_4;
   VAR_22->wr.wr.ex.invalidate_rkey = VAR_22->mr->lkey;
  }
  VAR_21++;

  VAR_13 += VAR_22->sge.length;
  VAR_11 -= VAR_23;
  for (VAR_19 = 0; VAR_19 < VAR_23; VAR_19++)
   VAR_10 = FUNC_7(VAR_10);
  VAR_16 = VAR_22;
  VAR_12 = 0;
 }

 if (VAR_16)
  VAR_16->wr.wr.next = ((void*)0);

 VAR_7->type = VAR_6;
 return VAR_21;

out_free:
 while (--VAR_18 >= 0)
  FUNC_0(VAR_8, &VAR_8->rdma_mrs, VAR_7->reg[VAR_18].mr);
 FUNC_2(VAR_7->reg);
out:
 return VAR_20;
}
