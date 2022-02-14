
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40iw_puda_rsrc_info {int cq_id; int count; int pd_id; int sq_size; int rq_size; int tx_buf_cnt; scalar_t__ buf_size; int qp_id; int type; } ;
struct TYPE_2__ {scalar_t__ mtu; int exception_lan_queue; } ;
struct i40iw_device {TYPE_1__ vsi; } ;
typedef int info ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,struct i40iw_puda_rsrc_info*) ;
 int FUNC_2 (struct i40iw_puda_rsrc_info*,int ,int) ;

__attribute__((used)) static enum i40iw_status_code FUNC_3(struct i40iw_device *VAR_2)
{
 struct i40iw_puda_rsrc_info VAR_3;
 enum i40iw_status_code VAR_4;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.type = VAR_0;
 VAR_3.cq_id = 2;
 VAR_3.qp_id = VAR_2->vsi.exception_lan_queue;
 VAR_3.count = 1;
 VAR_3.pd_id = 2;
 VAR_3.sq_size = 8192;
 VAR_3.rq_size = 8192;
 VAR_3.buf_size = VAR_2->vsi.mtu + VAR_1;
 VAR_3.tx_buf_cnt = 4096;
 VAR_4 = FUNC_1(&VAR_2->vsi, &VAR_3);
 if (VAR_4)
  FUNC_0("ieq create fail\n");
 return VAR_4;
}
