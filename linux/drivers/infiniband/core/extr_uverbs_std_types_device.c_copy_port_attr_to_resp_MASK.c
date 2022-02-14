
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_uverbs_query_port_resp {int link_layer; int phys_state; int active_speed; int active_width; int init_type_reply; int subnet_timeout; int sm_sl; int max_vl_num; int lmc; void* sm_lid; void* lid; int flags; int pkey_tbl_len; int qkey_viol_cntr; int bad_pkey_cntr; int max_msg_sz; int port_cap_flags; int gid_tbl_len; int active_mtu; int max_mtu; int state; } ;
struct ib_port_attr {int phys_state; int active_speed; int active_width; int init_type_reply; int subnet_timeout; int sm_sl; int max_vl_num; int lmc; int sm_lid; int lid; int pkey_tbl_len; int qkey_viol_cntr; int bad_pkey_cntr; int max_msg_sz; int gid_tbl_len; int active_mtu; int max_mtu; int state; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ib_port_attr*) ;
 scalar_t__ FUNC_3 (struct ib_device*,int ) ;
 scalar_t__ FUNC_4 (struct ib_device*,int ) ;
 int FUNC_5 (struct ib_device*,int ) ;

void FUNC_6(struct ib_port_attr *VAR_1,
       struct ib_uverbs_query_port_resp *VAR_2,
       struct ib_device *VAR_3, u8 VAR_4)
{
 VAR_2->state = VAR_1->state;
 VAR_2->max_mtu = VAR_1->max_mtu;
 VAR_2->active_mtu = VAR_1->active_mtu;
 VAR_2->gid_tbl_len = VAR_1->gid_tbl_len;
 VAR_2->port_cap_flags = FUNC_2(VAR_1);
 VAR_2->max_msg_sz = VAR_1->max_msg_sz;
 VAR_2->bad_pkey_cntr = VAR_1->bad_pkey_cntr;
 VAR_2->qkey_viol_cntr = VAR_1->qkey_viol_cntr;
 VAR_2->pkey_tbl_len = VAR_1->pkey_tbl_len;

 if (FUNC_4(VAR_3, VAR_4))
  VAR_2->flags |= VAR_0;

 if (FUNC_3(VAR_3, VAR_4)) {
  VAR_2->lid = FUNC_0(VAR_1->lid);
  VAR_2->sm_lid = FUNC_0(VAR_1->sm_lid);
 } else {
  VAR_2->lid = FUNC_1(VAR_1->lid);
  VAR_2->sm_lid = FUNC_1(VAR_1->sm_lid);
 }

 VAR_2->lmc = VAR_1->lmc;
 VAR_2->max_vl_num = VAR_1->max_vl_num;
 VAR_2->sm_sl = VAR_1->sm_sl;
 VAR_2->subnet_timeout = VAR_1->subnet_timeout;
 VAR_2->init_type_reply = VAR_1->init_type_reply;
 VAR_2->active_width = VAR_1->active_width;
 VAR_2->active_speed = VAR_1->active_speed;
 VAR_2->phys_state = VAR_1->phys_state;
 VAR_2->link_layer = FUNC_5(VAR_3, VAR_4);
}
