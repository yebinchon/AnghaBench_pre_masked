
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40iw_puda_rsrc_info {int cq_id; int count; int pd_id; int sq_size; int rq_size; int buf_size; int tx_buf_cnt; int xmit_complete; int receive; scalar_t__ qp_id; int type; } ;
struct i40iw_device {int vsi; } ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,struct i40iw_puda_rsrc_info*) ;
 int VAR_2 ;
 int FUNC_2 (struct i40iw_puda_rsrc_info*,int ,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_3(struct i40iw_device *VAR_3)
{
 struct i40iw_puda_rsrc_info VAR_4;
 enum i40iw_status_code VAR_5;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.type = VAR_0;
 VAR_4.cq_id = 1;
 VAR_4.qp_id = 0;
 VAR_4.count = 1;
 VAR_4.pd_id = 1;
 VAR_4.sq_size = 8192;
 VAR_4.rq_size = 8192;
 VAR_4.buf_size = 1024;
 VAR_4.tx_buf_cnt = 16384;
 VAR_4.receive = VAR_2;
 VAR_4.xmit_complete = VAR_1;
 VAR_5 = FUNC_1(&VAR_3->vsi, &VAR_4);
 if (VAR_5)
  FUNC_0("ilq create fail\n");
 return VAR_5;
}
