
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct ib_port_attr {int port_cap_flags; int ip_gids; int max_vl_num; int active_width; int active_speed; scalar_t__ init_type_reply; scalar_t__ subnet_timeout; scalar_t__ sm_sl; scalar_t__ lmc; scalar_t__ sm_lid; scalar_t__ lid; int pkey_tbl_len; scalar_t__ qkey_viol_cntr; scalar_t__ bad_pkey_cntr; scalar_t__ max_msg_sz; int gid_tbl_len; int active_mtu; int max_mtu; int phys_state; int state; } ;
struct ib_device {int dummy; } ;
struct bnxt_qplib_dev_attr {int max_pkey; int max_sgid; } ;
struct bnxt_re_dev {int active_width; int active_speed; TYPE_1__* netdev; struct bnxt_qplib_dev_attr dev_attr; } ;
struct TYPE_3__ {int mtu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_port_attr*,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 struct bnxt_re_dev* FUNC_4 (struct ib_device*,struct ib_device*) ;

int FUNC_5(struct ib_device *VAR_10, u8 VAR_11,
         struct ib_port_attr *VAR_12)
{
 struct bnxt_re_dev *VAR_13 = FUNC_4(VAR_10, VAR_10);
 struct bnxt_qplib_dev_attr *VAR_14 = &VAR_13->dev_attr;

 FUNC_1(VAR_12, 0, sizeof(*VAR_12));

 if (FUNC_3(VAR_13->netdev) && FUNC_2(VAR_13->netdev)) {
  VAR_12->state = VAR_2;
  VAR_12->phys_state = VAR_7;
 } else {
  VAR_12->state = VAR_5;
  VAR_12->phys_state = VAR_6;
 }
 VAR_12->max_mtu = VAR_1;
 VAR_12->active_mtu = FUNC_0(VAR_13->netdev->mtu);
 VAR_12->gid_tbl_len = VAR_14->max_sgid;
 VAR_12->port_cap_flags = VAR_3 | VAR_8 |
        VAR_4 |
        VAR_9;
 VAR_12->ip_gids = 1;

 VAR_12->max_msg_sz = (u32)VAR_0;
 VAR_12->bad_pkey_cntr = 0;
 VAR_12->qkey_viol_cntr = 0;
 VAR_12->pkey_tbl_len = VAR_14->max_pkey;
 VAR_12->lid = 0;
 VAR_12->sm_lid = 0;
 VAR_12->lmc = 0;
 VAR_12->max_vl_num = 4;
 VAR_12->sm_sl = 0;
 VAR_12->subnet_timeout = 0;
 VAR_12->init_type_reply = 0;
 VAR_12->active_speed = VAR_13->active_speed;
 VAR_12->active_width = VAR_13->active_width;

 return 0;
}
