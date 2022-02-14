
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {TYPE_1__* port_caps; } ;
struct ib_smp {int* data; void* attr_mod; int attr_id; } ;
struct ib_port_attr {int lmc; int sm_sl; int state; int phys_state; int port_cap_flags; int gid_tbl_len; int max_msg_sz; int active_width; int active_speed; int max_mtu; int active_mtu; int subnet_timeout; int max_vl_num; int init_type_reply; int port_cap_flags2; void* qkey_viol_cntr; void* bad_pkey_cntr; int pkey_tbl_len; void* sm_lid; void* lid; } ;
struct ib_device {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_2__ {int ext_port_cap; int pkey_table_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_9 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct ib_smp*) ;
 int FUNC_5 (struct ib_smp*) ;
 struct ib_smp* FUNC_6 (int,int ) ;
 struct ib_smp* FUNC_7 (int,int ) ;
 int VAR_10 ;
 int FUNC_8 (struct mlx5_ib_dev*,int,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 int FUNC_9 (struct mlx5_ib_dev*,char*,int) ;
 struct mlx5_ib_dev* FUNC_10 (struct ib_device*) ;

int FUNC_11(struct ib_device *VAR_11, u8 VAR_12,
       struct ib_port_attr *VAR_13)
{
 struct mlx5_ib_dev *VAR_14 = FUNC_10(VAR_11);
 struct mlx5_core_dev *VAR_15 = VAR_14->mdev;
 struct ib_smp *VAR_16 = ((void*)0);
 struct ib_smp *VAR_17 = ((void*)0);
 int VAR_18;
 int VAR_19 = -VAR_0;

 VAR_16 = FUNC_7(sizeof(*VAR_16), VAR_1);
 VAR_17 = FUNC_6(sizeof(*VAR_17), VAR_1);
 if (!VAR_16 || !VAR_17)
  goto out;



 FUNC_4(VAR_16);
 VAR_16->attr_id = VAR_6;
 VAR_16->attr_mod = FUNC_3(VAR_12);

 VAR_19 = FUNC_8(VAR_14, 1, 1, VAR_12, ((void*)0), ((void*)0), VAR_16, VAR_17);
 if (VAR_19) {
  FUNC_9(VAR_14, "err %d\n", VAR_19);
  goto out;
 }

 VAR_13->lid = FUNC_1((__be16 *)(VAR_17->data + 16));
 VAR_13->lmc = VAR_17->data[34] & 0x7;
 VAR_13->sm_lid = FUNC_1((__be16 *)(VAR_17->data + 18));
 VAR_13->sm_sl = VAR_17->data[36] & 0xf;
 VAR_13->state = VAR_17->data[32] & 0xf;
 VAR_13->phys_state = VAR_17->data[33] >> 4;
 VAR_13->port_cap_flags = FUNC_2((__be32 *)(VAR_17->data + 20));
 VAR_13->gid_tbl_len = VAR_17->data[50];
 VAR_13->max_msg_sz = 1 << FUNC_0(VAR_15, VAR_10);
 VAR_13->pkey_tbl_len = VAR_15->port_caps[VAR_12 - 1].pkey_table_len;
 VAR_13->bad_pkey_cntr = FUNC_1((__be16 *)(VAR_17->data + 46));
 VAR_13->qkey_viol_cntr = FUNC_1((__be16 *)(VAR_17->data + 48));
 VAR_13->active_width = VAR_17->data[31] & 0xf;
 VAR_13->active_speed = VAR_17->data[35] >> 4;
 VAR_13->max_mtu = VAR_17->data[41] & 0xf;
 VAR_13->active_mtu = VAR_17->data[36] >> 4;
 VAR_13->subnet_timeout = VAR_17->data[51] & 0x1f;
 VAR_13->max_vl_num = VAR_17->data[37] >> 4;
 VAR_13->init_type_reply = VAR_17->data[41] >> 4;

 if (VAR_13->port_cap_flags & VAR_2) {
  VAR_13->port_cap_flags2 =
   FUNC_1((__be16 *)(VAR_17->data + 60));

  if (VAR_13->port_cap_flags2 & VAR_5)
   VAR_13->active_width = VAR_17->data[31] & 0x1f;
 }


 if (VAR_13->port_cap_flags & VAR_3) {
  VAR_18 = VAR_17->data[62] >> 4;

  switch (VAR_18) {
  case 1:
   VAR_13->active_speed = 16;
   break;
  case 2:
   VAR_13->active_speed = 32;
   break;
  case 4:
   if (VAR_13->port_cap_flags & VAR_2 &&
       VAR_13->port_cap_flags2 & VAR_4)
    VAR_13->active_speed = VAR_7;
   break;
  }
 }


 if (VAR_13->active_speed == 4) {
  if (VAR_15->port_caps[VAR_12 - 1].ext_port_cap &
      VAR_9) {
   FUNC_4(VAR_16);
   VAR_16->attr_id = VAR_8;
   VAR_16->attr_mod = FUNC_3(VAR_12);

   VAR_19 = FUNC_8(VAR_14, 1, 1, VAR_12,
        ((void*)0), ((void*)0), VAR_16, VAR_17);
   if (VAR_19)
    goto out;


   if (VAR_17->data[15] & 0x1)
    VAR_13->active_speed = 8;
  }
 }

out:
 FUNC_5(VAR_16);
 FUNC_5(VAR_17);

 return VAR_19;
}
