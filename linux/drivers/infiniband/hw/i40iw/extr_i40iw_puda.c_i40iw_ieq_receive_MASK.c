
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40iw_sc_vsi {int dev; struct i40iw_puda_rsrc* ieq; } ;
struct i40iw_sc_qp {int dummy; } ;
struct i40iw_puda_rsrc {int rxq_invalid_cnt; int rx_wqe_idx; int stats_bad_qp_id; int compl_rxwqe_idx; } ;
struct i40iw_puda_buf {int dummy; } ;


 struct i40iw_sc_qp* FUNC_0 (int ,struct i40iw_puda_buf*) ;
 int FUNC_1 (struct i40iw_puda_rsrc*,struct i40iw_sc_qp*,struct i40iw_puda_buf*) ;
 int FUNC_2 (struct i40iw_puda_rsrc*,struct i40iw_puda_buf*) ;

__attribute__((used)) static void FUNC_3(struct i40iw_sc_vsi *VAR_0,
         struct i40iw_puda_buf *VAR_1)
{
 struct i40iw_puda_rsrc *VAR_2 = VAR_0->ieq;
 struct i40iw_sc_qp *VAR_3 = ((void*)0);
 u32 VAR_4 = VAR_2->compl_rxwqe_idx;

 VAR_3 = FUNC_0(VAR_0->dev, VAR_1);
 if (!VAR_3) {
  VAR_2->stats_bad_qp_id++;
  FUNC_2(VAR_2, VAR_1);
 } else {
  FUNC_1(VAR_2, VAR_3, VAR_1);
 }




 if (!VAR_2->rxq_invalid_cnt)
  VAR_2->rx_wqe_idx = VAR_4;
 VAR_2->rxq_invalid_cnt++;
}
