
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_port_attr {int lmc; int gid_tbl_len; int pkey_tbl_len; int max_vl_num; int max_msg_sz; void* active_mtu; void* max_mtu; int active_width; int active_speed; int phys_state; int state; } ;
struct ib_device {int dummy; } ;
struct efa_dev {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 struct efa_dev* FUNC_1 (struct ib_device*) ;

int FUNC_2(struct ib_device *VAR_4, u8 VAR_5,
     struct ib_port_attr *VAR_6)
{
 struct efa_dev *VAR_7 = FUNC_1(VAR_4);

 VAR_6->lmc = 1;

 VAR_6->state = VAR_0;
 VAR_6->phys_state = VAR_1;
 VAR_6->gid_tbl_len = 1;
 VAR_6->pkey_tbl_len = 1;
 VAR_6->active_speed = VAR_2;
 VAR_6->active_width = VAR_3;
 VAR_6->max_mtu = FUNC_0(VAR_7->mtu);
 VAR_6->active_mtu = FUNC_0(VAR_7->mtu);
 VAR_6->max_msg_sz = VAR_7->mtu;
 VAR_6->max_vl_num = 1;

 return 0;
}
