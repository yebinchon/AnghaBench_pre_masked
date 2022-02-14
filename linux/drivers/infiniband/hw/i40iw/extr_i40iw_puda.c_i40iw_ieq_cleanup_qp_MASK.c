
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct i40iw_pfpdu {int mode; struct list_head rxlist; } ;
struct i40iw_sc_qp {struct i40iw_pfpdu pfpdu; } ;
struct i40iw_puda_rsrc {int dummy; } ;
struct i40iw_puda_buf {int dummy; } ;


 struct i40iw_puda_buf* FUNC_0 (struct list_head*) ;
 int FUNC_1 (struct i40iw_puda_rsrc*,struct i40iw_puda_buf*) ;
 int FUNC_2 (struct list_head*) ;

void FUNC_3(struct i40iw_puda_rsrc *VAR_0, struct i40iw_sc_qp *VAR_1)
{
 struct i40iw_puda_buf *VAR_2;
 struct i40iw_pfpdu *VAR_3 = &VAR_1->pfpdu;
 struct list_head *VAR_4 = &VAR_3->rxlist;

 if (!VAR_3->mode)
  return;
 while (!FUNC_2(VAR_4)) {
  VAR_2 = FUNC_0(VAR_4);
  FUNC_1(VAR_0, VAR_2);
 }
}
