
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct rdma_rw_ctx {int nr_ops; TYPE_7__* reg; int type; } ;
struct TYPE_16__ {scalar_t__ sig_type; } ;
struct ib_sig_attrs {TYPE_2__ wire; } ;
struct TYPE_20__ {int num_sge; int opcode; TYPE_3__* sg_list; } ;
struct ib_rdma_wr {int rkey; TYPE_6__ wr; int remote_addr; } ;
struct ib_qp {int sig_mrs; int device; int integrity_en; TYPE_1__* pd; } ;
struct ib_device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_22__ {scalar_t__ meta_length; } ;
struct TYPE_18__ {TYPE_6__* next; scalar_t__ send_flags; scalar_t__ num_sge; int * wr_cqe; int opcode; } ;
struct TYPE_19__ {TYPE_4__ wr; int key; TYPE_11__* mr; int access; } ;
struct TYPE_17__ {int length; int addr; } ;
struct TYPE_21__ {TYPE_11__* mr; TYPE_5__ reg_wr; TYPE_3__ sge; struct ib_rdma_wr wr; } ;
struct TYPE_15__ {struct ib_device* device; } ;
struct TYPE_14__ {TYPE_8__* sig_attrs; int length; int iova; int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ib_device*,struct scatterlist*,int,int) ;
 int FUNC_1 (struct ib_device*,struct scatterlist*,int,int) ;
 int FUNC_2 (TYPE_11__*,struct scatterlist*,int,int *,struct scatterlist*,int,int *,int ) ;
 TYPE_11__* FUNC_3 (struct ib_qp*,int *) ;
 int FUNC_4 (struct ib_qp*,int *,TYPE_11__*) ;
 TYPE_7__* FUNC_5 (int,int,int ) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_8__*,struct ib_sig_attrs*,int) ;
 int FUNC_8 (char*,int,...) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (struct ib_device*,int ) ;
 scalar_t__ FUNC_11 (TYPE_7__*) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct rdma_rw_ctx *VAR_13, struct ib_qp *VAR_14,
  u8 VAR_15, struct scatterlist *VAR_16, u32 VAR_17,
  struct scatterlist *VAR_18, u32 VAR_19,
  struct ib_sig_attrs *VAR_20,
  u64 VAR_21, u32 VAR_22, enum dma_data_direction VAR_23)
{
 struct ib_device *VAR_24 = VAR_14->pd->device;
 u32 VAR_25 = FUNC_10(VAR_14->pd->device,
          VAR_14->integrity_en);
 struct ib_rdma_wr *VAR_26;
 int VAR_27 = 0, VAR_28;

 if (VAR_17 > VAR_25 || VAR_19 > VAR_25) {
  FUNC_8("SG count too large: sg_cnt=%d, prot_sg_cnt=%d, pages_per_mr=%d\n",
         VAR_17, VAR_19, VAR_25);
  return -VAR_2;
 }

 VAR_28 = FUNC_0(VAR_24, VAR_16, VAR_17, VAR_23);
 if (!VAR_28)
  return -VAR_3;
 VAR_17 = VAR_28;

 if (VAR_19) {
  VAR_28 = FUNC_0(VAR_24, VAR_18, VAR_19, VAR_23);
  if (!VAR_28) {
   VAR_28 = -VAR_3;
   goto out_unmap_sg;
  }
  VAR_19 = VAR_28;
 }

 VAR_13->type = VAR_11;
 VAR_13->nr_ops = 1;
 VAR_13->reg = FUNC_5(1, sizeof(*VAR_13->reg), VAR_4);
 if (!VAR_13->reg) {
  VAR_28 = -VAR_3;
  goto out_unmap_prot_sg;
 }

 VAR_13->reg->mr = FUNC_3(VAR_14, &VAR_14->sig_mrs);
 if (!VAR_13->reg->mr) {
  VAR_28 = -VAR_1;
  goto out_free_ctx;
 }

 VAR_27 += FUNC_11(VAR_13->reg);

 FUNC_7(VAR_13->reg->mr->sig_attrs, VAR_20, sizeof(struct ib_sig_attrs));

 VAR_28 = FUNC_2(VAR_13->reg->mr, VAR_16, VAR_17, ((void*)0), VAR_18,
         VAR_19, ((void*)0), VAR_12);
 if (FUNC_12(VAR_28)) {
  FUNC_8("failed to map PI sg (%d)\n", VAR_17 + VAR_19);
  goto out_destroy_sig_mr;
 }

 VAR_13->reg->reg_wr.wr.opcode = VAR_10;
 VAR_13->reg->reg_wr.wr.wr_cqe = ((void*)0);
 VAR_13->reg->reg_wr.wr.num_sge = 0;
 VAR_13->reg->reg_wr.wr.send_flags = 0;
 VAR_13->reg->reg_wr.access = VAR_5;
 if (FUNC_9(VAR_14->device, VAR_15))
  VAR_13->reg->reg_wr.access |= VAR_6;
 VAR_13->reg->reg_wr.mr = VAR_13->reg->mr;
 VAR_13->reg->reg_wr.key = VAR_13->reg->mr->lkey;
 VAR_27++;

 VAR_13->reg->sge.addr = VAR_13->reg->mr->iova;
 VAR_13->reg->sge.length = VAR_13->reg->mr->length;
 if (VAR_20->wire.sig_type == VAR_7)
  VAR_13->reg->sge.length -= VAR_13->reg->mr->sig_attrs->meta_length;

 VAR_26 = &VAR_13->reg->wr;
 VAR_26->wr.sg_list = &VAR_13->reg->sge;
 VAR_26->wr.num_sge = 1;
 VAR_26->remote_addr = VAR_21;
 VAR_26->rkey = VAR_22;
 if (VAR_23 == VAR_0)
  VAR_26->wr.opcode = VAR_9;
 else
  VAR_26->wr.opcode = VAR_8;
 VAR_13->reg->reg_wr.wr.next = &VAR_26->wr;
 VAR_27++;

 return VAR_27;

out_destroy_sig_mr:
 FUNC_4(VAR_14, &VAR_14->sig_mrs, VAR_13->reg->mr);
out_free_ctx:
 FUNC_6(VAR_13->reg);
out_unmap_prot_sg:
 if (VAR_19)
  FUNC_1(VAR_24, VAR_18, VAR_19, VAR_23);
out_unmap_sg:
 FUNC_1(VAR_24, VAR_16, VAR_17, VAR_23);
 return VAR_28;
}
