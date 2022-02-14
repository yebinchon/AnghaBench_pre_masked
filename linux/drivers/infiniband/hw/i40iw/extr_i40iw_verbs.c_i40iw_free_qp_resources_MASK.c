
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int * wrid_mem; int dma_mem; } ;
struct i40iw_pbl {int pble_alloc; scalar_t__ pbl_allocated; } ;
struct i40iw_qp {int * allocated_buffer; TYPE_3__ kqp; int q2_ctx_mem; int sc_qp; struct i40iw_pbl iwpbl; } ;
struct TYPE_5__ {int hw; } ;
struct TYPE_4__ {int ieq; } ;
struct i40iw_device {TYPE_2__ sc_dev; int pble_rsrc; int allocated_qps; TYPE_1__ vsi; } ;


 int FUNC_0 (struct i40iw_device*,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct i40iw_device*,int ,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct i40iw_device *VAR_0,
        struct i40iw_qp *VAR_1,
        u32 VAR_2)
{
 struct i40iw_pbl *VAR_3 = &VAR_1->iwpbl;

 FUNC_4(VAR_0->vsi.ieq, &VAR_1->sc_qp);
 FUNC_0(VAR_0, &VAR_1->sc_qp);
 if (VAR_2)
  FUNC_3(VAR_0, VAR_0->allocated_qps, VAR_2);
 if (VAR_3->pbl_allocated)
  FUNC_2(VAR_0->pble_rsrc, &VAR_3->pble_alloc);
 FUNC_1(VAR_0->sc_dev.hw, &VAR_1->q2_ctx_mem);
 FUNC_1(VAR_0->sc_dev.hw, &VAR_1->kqp.dma_mem);
 FUNC_5(VAR_1->kqp.wrid_mem);
 VAR_1->kqp.wrid_mem = ((void*)0);
 FUNC_5(VAR_1->allocated_buffer);
}
