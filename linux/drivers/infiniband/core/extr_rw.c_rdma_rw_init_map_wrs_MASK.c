
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u64 ;
typedef size_t u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_6__ {struct ib_sge* sges; struct ib_rdma_wr* wrs; } ;
struct rdma_rw_ctx {size_t nr_ops; TYPE_3__ map; int type; } ;
struct ib_sge {size_t addr; size_t length; int lkey; } ;
struct TYPE_5__ {size_t num_sge; struct TYPE_5__* next; struct ib_sge* sg_list; int opcode; } ;
struct ib_rdma_wr {size_t remote_addr; size_t rkey; TYPE_2__ wr; } ;
struct ib_qp {size_t max_write_sge; size_t max_read_sge; TYPE_1__* pd; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int local_dma_lkey; } ;


 size_t FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (struct ib_sge*) ;
 size_t FUNC_3 (size_t,size_t) ;
 size_t FUNC_4 (struct scatterlist*) ;
 size_t FUNC_5 (struct scatterlist*) ;
 struct scatterlist* FUNC_6 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_7(struct rdma_rw_ctx *VAR_6, struct ib_qp *VAR_7,
  struct scatterlist *VAR_8, u32 VAR_9, u32 VAR_10,
  u64 VAR_11, u32 VAR_12, enum dma_data_direction VAR_13)
{
 u32 VAR_14 = VAR_13 == VAR_0 ? VAR_7->max_write_sge :
        VAR_7->max_read_sge;
 struct ib_sge *VAR_15;
 u32 VAR_16 = 0, VAR_17, VAR_18;

 VAR_6->nr_ops = FUNC_0(VAR_9, VAR_14);

 VAR_6->map.sges = VAR_15 = FUNC_1(VAR_9, sizeof(*VAR_15), VAR_2);
 if (!VAR_6->map.sges)
  goto out;

 VAR_6->map.wrs = FUNC_1(VAR_6->nr_ops, sizeof(*VAR_6->map.wrs), VAR_2);
 if (!VAR_6->map.wrs)
  goto out_free_sges;

 for (VAR_17 = 0; VAR_17 < VAR_6->nr_ops; VAR_17++) {
  struct ib_rdma_wr *VAR_19 = &VAR_6->map.wrs[VAR_17];
  u32 VAR_20 = FUNC_3(VAR_9, VAR_14);

  if (VAR_13 == VAR_0)
   VAR_19->wr.opcode = VAR_4;
  else
   VAR_19->wr.opcode = VAR_3;
  VAR_19->remote_addr = VAR_11 + VAR_16;
  VAR_19->rkey = VAR_12;
  VAR_19->wr.num_sge = VAR_20;
  VAR_19->wr.sg_list = VAR_15;

  for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++, VAR_8 = FUNC_6(VAR_8)) {
   VAR_15->addr = FUNC_4(VAR_8) + VAR_10;
   VAR_15->length = FUNC_5(VAR_8) - VAR_10;
   VAR_15->lkey = VAR_7->pd->local_dma_lkey;

   VAR_16 += VAR_15->length;
   VAR_15++;
   VAR_9--;
   VAR_10 = 0;
  }

  VAR_19->wr.next = VAR_17 + 1 < VAR_6->nr_ops ?
   &VAR_6->map.wrs[VAR_17 + 1].wr : ((void*)0);
 }

 VAR_6->type = VAR_5;
 return VAR_6->nr_ops;

out_free_sges:
 FUNC_2(VAR_6->map.sges);
out:
 return -VAR_1;
}
