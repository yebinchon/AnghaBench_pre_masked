
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct net_device* netdev; } ;
struct ocrdma_dev {TYPE_1__ nic_info; } ;
struct net_device {int mtu; } ;
struct ib_port_attr {int state; int port_cap_flags; int ip_gids; int pkey_tbl_len; int max_msg_sz; int max_vl_num; int active_width; int active_speed; scalar_t__ qkey_viol_cntr; scalar_t__ bad_pkey_cntr; int gid_tbl_len; scalar_t__ sm_sl; scalar_t__ sm_lid; scalar_t__ lmc; scalar_t__ lid; int active_mtu; int max_mtu; int phys_state; } ;
struct ib_device {int dummy; } ;
typedef enum ib_port_state { ____Placeholder_ib_port_state } ib_port_state ;


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
 int FUNC_0 (struct ocrdma_dev*,int *,int *) ;
 struct ocrdma_dev* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

int FUNC_5(struct ib_device *VAR_10,
        u8 VAR_11, struct ib_port_attr *VAR_12)
{
 enum ib_port_state VAR_13;
 struct ocrdma_dev *VAR_14;
 struct net_device *VAR_15;


 VAR_14 = FUNC_1(VAR_10);
 VAR_15 = VAR_14->nic_info.netdev;
 if (FUNC_4(VAR_15) && FUNC_3(VAR_15)) {
  VAR_13 = VAR_1;
  VAR_12->phys_state = VAR_6;
 } else {
  VAR_13 = VAR_4;
  VAR_12->phys_state = VAR_5;
 }
 VAR_12->max_mtu = VAR_0;
 VAR_12->active_mtu = FUNC_2(VAR_15->mtu);
 VAR_12->lid = 0;
 VAR_12->lmc = 0;
 VAR_12->sm_lid = 0;
 VAR_12->sm_sl = 0;
 VAR_12->state = VAR_13;
 VAR_12->port_cap_flags = VAR_2 | VAR_7 |
    VAR_3 |
    VAR_8;
 VAR_12->ip_gids = 1;
 VAR_12->gid_tbl_len = VAR_9;
 VAR_12->pkey_tbl_len = 1;
 VAR_12->bad_pkey_cntr = 0;
 VAR_12->qkey_viol_cntr = 0;
 FUNC_0(VAR_14, &VAR_12->active_speed,
     &VAR_12->active_width);
 VAR_12->max_msg_sz = 0x80000000;
 VAR_12->max_vl_num = 4;
 return 0;
}
