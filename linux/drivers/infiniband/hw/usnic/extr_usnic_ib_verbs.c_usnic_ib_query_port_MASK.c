
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usnic_ib_dev {int usdev_lock; TYPE_1__* ufdev; } ;
struct ib_port_attr {int lmc; int gid_tbl_len; int pkey_tbl_len; int max_vl_num; int max_msg_sz; int active_mtu; int max_mtu; scalar_t__ qkey_viol_cntr; scalar_t__ bad_pkey_cntr; scalar_t__ port_cap_flags; int phys_state; int state; scalar_t__ sm_sl; scalar_t__ sm_lid; scalar_t__ lid; int active_width; int active_speed; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int mtu; int inaddr; int link_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct ib_device*,int ,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct usnic_ib_dev* FUNC_4 (struct ib_device*) ;
 int FUNC_5 (char*) ;

int FUNC_6(struct ib_device *VAR_8, u8 VAR_9,
    struct ib_port_attr *VAR_10)
{
 struct usnic_ib_dev *VAR_11 = FUNC_4(VAR_8);

 FUNC_5("\n");

 if (FUNC_0(VAR_8, VAR_9, &VAR_10->active_speed,
        &VAR_10->active_width))
  return -VAR_0;






 FUNC_2(&VAR_11->usdev_lock);


 VAR_10->lid = 0;
 VAR_10->lmc = 1;
 VAR_10->sm_lid = 0;
 VAR_10->sm_sl = 0;

 if (!VAR_11->ufdev->link_up) {
  VAR_10->state = VAR_3;
  VAR_10->phys_state = VAR_5;
 } else if (!VAR_11->ufdev->inaddr) {
  VAR_10->state = VAR_4;
  VAR_10->phys_state =
   VAR_7;
 } else {
  VAR_10->state = VAR_2;
  VAR_10->phys_state = VAR_6;
 }

 VAR_10->port_cap_flags = 0;
 VAR_10->gid_tbl_len = 1;
 VAR_10->pkey_tbl_len = 1;
 VAR_10->bad_pkey_cntr = 0;
 VAR_10->qkey_viol_cntr = 0;
 VAR_10->max_mtu = VAR_1;
 VAR_10->active_mtu = FUNC_1(VAR_11->ufdev->mtu);

 VAR_10->max_msg_sz = VAR_11->ufdev->mtu;
 VAR_10->max_vl_num = 1;
 FUNC_3(&VAR_11->usdev_lock);

 return 0;
}
