
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int phys_state; int active_speed; int active_width; int init_type_reply; int subnet_timeout; int sm_sl; int max_vl_num; int lmc; int sm_lid; int lid; int pkey_tbl_len; int qkey_viol_cntr; int bad_pkey_cntr; int max_msg_sz; int port_cap_flags; int gid_tbl_len; int active_mtu; int max_mtu; int state; } ;
struct pvrdma_cmd_query_port_resp {TYPE_3__ attrs; } ;
union pvrdma_cmd_resp {struct pvrdma_cmd_query_port_resp query_port_resp; } ;
struct TYPE_4__ {int cmd; } ;
struct pvrdma_cmd_query_port {int port_num; TYPE_1__ hdr; } ;
union pvrdma_cmd_req {struct pvrdma_cmd_query_port query_port; } ;
typedef int u8 ;
struct pvrdma_dev {TYPE_2__* pdev; } ;
struct ib_port_attr {int ip_gids; int phys_state; int active_speed; int active_width; int init_type_reply; int subnet_timeout; int sm_sl; int max_vl_num; int lmc; int sm_lid; int lid; int pkey_tbl_len; int qkey_viol_cntr; int bad_pkey_cntr; int max_msg_sz; int port_cap_flags; int gid_tbl_len; void* active_mtu; void* max_mtu; int state; } ;
struct ib_device {int dummy; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pvrdma_cmd_query_port*,int ,int) ;
 int FUNC_2 (struct pvrdma_dev*,union pvrdma_cmd_req*,union pvrdma_cmd_resp*,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct pvrdma_dev* FUNC_8 (struct ib_device*) ;

int FUNC_9(struct ib_device *VAR_3, u8 VAR_4,
        struct ib_port_attr *VAR_5)
{
 struct pvrdma_dev *VAR_6 = FUNC_8(VAR_3);
 union pvrdma_cmd_req VAR_7;
 union pvrdma_cmd_resp VAR_8;
 struct pvrdma_cmd_query_port *VAR_9 = &VAR_7.query_port;
 struct pvrdma_cmd_query_port_resp *VAR_10 = &VAR_8.query_port_resp;
 int VAR_11;

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->hdr.cmd = VAR_1;
 VAR_9->port_num = VAR_4;

 VAR_11 = FUNC_2(VAR_6, &VAR_7, &VAR_8, VAR_2);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_6->pdev->dev,
    "could not query port, error: %d\n", VAR_11);
  return VAR_11;
 }



 VAR_5->state = FUNC_6(VAR_10->attrs.state);
 VAR_5->max_mtu = FUNC_3(VAR_10->attrs.max_mtu);
 VAR_5->active_mtu = FUNC_3(VAR_10->attrs.active_mtu);
 VAR_5->gid_tbl_len = VAR_10->attrs.gid_tbl_len;
 VAR_5->port_cap_flags =
  FUNC_4(VAR_10->attrs.port_cap_flags);
 VAR_5->port_cap_flags |= VAR_0;
 VAR_5->ip_gids = 1;
 VAR_5->max_msg_sz = VAR_10->attrs.max_msg_sz;
 VAR_5->bad_pkey_cntr = VAR_10->attrs.bad_pkey_cntr;
 VAR_5->qkey_viol_cntr = VAR_10->attrs.qkey_viol_cntr;
 VAR_5->pkey_tbl_len = VAR_10->attrs.pkey_tbl_len;
 VAR_5->lid = VAR_10->attrs.lid;
 VAR_5->sm_lid = VAR_10->attrs.sm_lid;
 VAR_5->lmc = VAR_10->attrs.lmc;
 VAR_5->max_vl_num = VAR_10->attrs.max_vl_num;
 VAR_5->sm_sl = VAR_10->attrs.sm_sl;
 VAR_5->subnet_timeout = VAR_10->attrs.subnet_timeout;
 VAR_5->init_type_reply = VAR_10->attrs.init_type_reply;
 VAR_5->active_width = FUNC_7(VAR_10->attrs.active_width);
 VAR_5->active_speed = FUNC_5(VAR_10->attrs.active_speed);
 VAR_5->phys_state = VAR_10->attrs.phys_state;

 return 0;
}
