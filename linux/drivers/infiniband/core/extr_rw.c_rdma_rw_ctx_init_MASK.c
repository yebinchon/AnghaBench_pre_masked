
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct scatterlist {int dummy; } ;
struct rdma_rw_ctx {int dummy; } ;
struct ib_qp {int device; TYPE_1__* pd; } ;
struct ib_device {int dma_device; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {struct ib_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ib_device*,struct scatterlist*,scalar_t__,int) ;
 int FUNC_2 (struct ib_device*,struct scatterlist*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct scatterlist*,scalar_t__,int) ;
 int FUNC_5 (struct rdma_rw_ctx*,struct ib_qp*,struct scatterlist*,scalar_t__,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_6 (struct rdma_rw_ctx*,struct ib_qp*,int ,struct scatterlist*,scalar_t__,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_7 (struct rdma_rw_ctx*,struct ib_qp*,struct scatterlist*,scalar_t__,int ,scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ,int ,int,scalar_t__) ;
 scalar_t__ FUNC_9 (struct scatterlist*) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;
 int FUNC_11 (struct scatterlist*) ;

int FUNC_12(struct rdma_rw_ctx *VAR_2, struct ib_qp *VAR_3, u8 VAR_4,
  struct scatterlist *VAR_5, u32 VAR_6, u32 VAR_7,
  u64 VAR_8, u32 VAR_9, enum dma_data_direction VAR_10)
{
 struct ib_device *VAR_11 = VAR_3->pd->device;
 int VAR_12;

 if (FUNC_3(FUNC_11(VAR_5)))
  VAR_12 = FUNC_4(VAR_11->dma_device, VAR_5, VAR_6, VAR_10);
 else
  VAR_12 = FUNC_1(VAR_11, VAR_5, VAR_6, VAR_10);

 if (!VAR_12)
  return -VAR_1;
 VAR_6 = VAR_12;




 for (;;) {
  u32 VAR_13 = FUNC_9(VAR_5);

  if (VAR_7 < VAR_13)
   break;

  VAR_5 = FUNC_10(VAR_5);
  VAR_7 -= VAR_13;
  VAR_6--;
 }

 VAR_12 = -VAR_0;
 if (FUNC_0(VAR_6 == 0))
  goto out_unmap_sg;

 if (FUNC_8(VAR_3->device, VAR_4, VAR_10, VAR_6)) {
  VAR_12 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
    VAR_7, VAR_8, VAR_9, VAR_10);
 } else if (VAR_6 > 1) {
  VAR_12 = FUNC_5(VAR_2, VAR_3, VAR_5, VAR_6, VAR_7,
    VAR_8, VAR_9, VAR_10);
 } else {
  VAR_12 = FUNC_7(VAR_2, VAR_3, VAR_5, VAR_7,
    VAR_8, VAR_9, VAR_10);
 }

 if (VAR_12 < 0)
  goto out_unmap_sg;
 return VAR_12;

out_unmap_sg:
 FUNC_2(VAR_11, VAR_5, VAR_6, VAR_10);
 return VAR_12;
}
