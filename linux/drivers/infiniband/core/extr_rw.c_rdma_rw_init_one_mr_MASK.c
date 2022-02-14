
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_11__ {int length; int addr; } ;
struct TYPE_9__ {int opcode; } ;
struct TYPE_10__ {int access; TYPE_5__* mr; TYPE_2__ wr; } ;
struct rdma_rw_reg_ctx {TYPE_5__* mr; TYPE_4__ sge; TYPE_3__ reg_wr; } ;
struct ib_qp {int device; int rdma_mrs; int integrity_en; TYPE_1__* pd; } ;
struct TYPE_12__ {int length; int iova; } ;
struct TYPE_8__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,struct scatterlist*,int,int*,int ) ;
 TYPE_5__* FUNC_1 (struct ib_qp*,int *) ;
 int FUNC_2 (struct ib_qp*,int *,TYPE_5__*) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct rdma_rw_reg_ctx*) ;

__attribute__((used)) static int FUNC_7(struct ib_qp *VAR_6, u8 VAR_7,
  struct rdma_rw_reg_ctx *VAR_8, struct scatterlist *VAR_9,
  u32 VAR_10, u32 VAR_11)
{
 u32 VAR_12 = FUNC_5(VAR_6->pd->device,
          VAR_6->integrity_en);
 u32 VAR_13 = FUNC_3(VAR_10, VAR_12);
 int VAR_14 = 0, VAR_15;

 VAR_8->mr = FUNC_1(VAR_6, &VAR_6->rdma_mrs);
 if (!VAR_8->mr)
  return -VAR_0;

 VAR_14 += FUNC_6(VAR_8);

 VAR_15 = FUNC_0(VAR_8->mr, VAR_9, VAR_13, &VAR_11, VAR_5);
 if (VAR_15 < 0 || VAR_15 < VAR_13) {
  FUNC_2(VAR_6, &VAR_6->rdma_mrs, VAR_8->mr);
  return -VAR_1;
 }

 VAR_8->reg_wr.wr.opcode = VAR_4;
 VAR_8->reg_wr.mr = VAR_8->mr;
 VAR_8->reg_wr.access = VAR_2;
 if (FUNC_4(VAR_6->device, VAR_7))
  VAR_8->reg_wr.access |= VAR_3;
 VAR_14++;

 VAR_8->sge.addr = VAR_8->mr->iova;
 VAR_8->sge.length = VAR_8->mr->length;
 return VAR_14;
}
