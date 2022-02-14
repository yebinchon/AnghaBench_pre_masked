
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_device {int max_mr; int allocated_mrs; void* used_mrs; int max_cq; int allocated_cqs; void* used_cqs; int max_qp; int allocated_qps; void* used_qps; int max_pd; int allocated_pds; void* used_pds; } ;


 void* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct i40iw_device *VAR_0)
{
 VAR_0->used_pds = FUNC_0(VAR_0->allocated_pds, VAR_0->max_pd, 0);
 VAR_0->used_qps = FUNC_0(VAR_0->allocated_qps, VAR_0->max_qp, 0);
 VAR_0->used_cqs = FUNC_0(VAR_0->allocated_cqs, VAR_0->max_cq, 0);
 VAR_0->used_mrs = FUNC_0(VAR_0->allocated_mrs, VAR_0->max_mr, 0);
}
