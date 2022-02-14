
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct i40iw_sc_qp {int sq_pa; int rq_pa; uintptr_t hw_rq_size; uintptr_t hw_sq_size; uintptr_t sq_tph_val; uintptr_t rq_tph_val; uintptr_t qs_handle; int * hw_host_ctx; } ;
struct i40iw_puda_rsrc {uintptr_t buf_size; uintptr_t cq_id; int dev; struct i40iw_sc_qp qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (uintptr_t,int ) ;
 int FUNC_1 (int ,int ,char*,int *,int ) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void FUNC_3(struct i40iw_puda_rsrc *VAR_12)
{
 struct i40iw_sc_qp *VAR_13 = &VAR_12->qp;
 u64 *VAR_14 = VAR_13->hw_host_ctx;

 FUNC_2(VAR_14, 8, VAR_13->sq_pa);
 FUNC_2(VAR_14, 16, VAR_13->rq_pa);

 FUNC_2(VAR_14, 24,
        FUNC_0(VAR_13->hw_rq_size, VAR_3) |
        FUNC_0(VAR_13->hw_sq_size, VAR_6));

 FUNC_2(VAR_14, 48, FUNC_0(VAR_12->buf_size, VAR_11));
 FUNC_2(VAR_14, 56, 0);
 FUNC_2(VAR_14, 64, 1);

 FUNC_2(VAR_14, 136,
        FUNC_0(VAR_12->cq_id, VAR_8) |
        FUNC_0(VAR_12->cq_id, VAR_5));

 FUNC_2(VAR_14, 160, FUNC_0(1, VAR_0));

 FUNC_2(VAR_14, 168,
        FUNC_0((uintptr_t)VAR_13, VAR_1));

 FUNC_2(VAR_14, 176,
        FUNC_0(VAR_13->sq_tph_val, VAR_7) |
        FUNC_0(VAR_13->rq_tph_val, VAR_4) |
        FUNC_0(VAR_13->qs_handle, VAR_2));

 FUNC_1(VAR_12->dev, VAR_9, "PUDA QP CONTEXT",
   VAR_14, VAR_10);
}
