
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_5__ {TYPE_3__* sges; TYPE_3__* wrs; } ;
struct rdma_rw_ctx {int type; int nr_ops; TYPE_1__ map; TYPE_3__* reg; } ;
struct ib_qp {TYPE_2__* pd; int rdma_mrs; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_8__ {int dma_device; } ;
struct TYPE_7__ {int mr; } ;
struct TYPE_6__ {TYPE_4__* device; } ;


 int FUNC_0 () ;



 int FUNC_1 (TYPE_4__*,struct scatterlist*,int ,int) ;
 int FUNC_2 (struct ib_qp*,int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,struct scatterlist*,int ,int) ;
 int FUNC_6 (struct scatterlist*) ;

void FUNC_7(struct rdma_rw_ctx *VAR_0, struct ib_qp *VAR_1, u8 VAR_2,
  struct scatterlist *VAR_3, u32 VAR_4, enum dma_data_direction VAR_5)
{
 int VAR_6;

 switch (VAR_0->type) {
 case 130:
  for (VAR_6 = 0; VAR_6 < VAR_0->nr_ops; VAR_6++)
   FUNC_2(VAR_1, &VAR_1->rdma_mrs, VAR_0->reg[VAR_6].mr);
  FUNC_4(VAR_0->reg);
  break;
 case 129:
  FUNC_4(VAR_0->map.wrs);
  FUNC_4(VAR_0->map.sges);
  break;
 case 128:
  break;
 default:
  FUNC_0();
  break;
 }

 if (FUNC_3(FUNC_6(VAR_3)))
  FUNC_5(VAR_1->pd->device->dma_device, VAR_3,
        VAR_4, VAR_5);
 else
  FUNC_1(VAR_1->pd->device, VAR_3, VAR_4, VAR_5);
}
