
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_hca_vport_context {int cap_mask1; int cap_mask2; int init_type_reply; int subnet_timeout; int qkey_violation_counter; int pkey_violation_counter; int port_physical_state; int vport_state; int sm_sl; int sm_lid; int lmc; int lid; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_port_attr {int port_cap_flags; int max_msg_sz; int max_vl_num; void* active_mtu; void* max_mtu; int active_speed; int active_width; int port_cap_flags2; int init_type_reply; int subnet_timeout; int qkey_viol_cntr; int bad_pkey_cntr; int pkey_tbl_len; int gid_tbl_len; int phys_state; int state; int sm_sl; int sm_lid; int lmc; int lid; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_hca_vport_context*) ;
 struct mlx5_hca_vport_context* FUNC_2 (int,int ) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5_core_dev*,int ,int ,int ,struct mlx5_hca_vport_context*) ;
 int FUNC_6 (struct mlx5_core_dev*,int *,int ) ;
 int FUNC_7 (struct mlx5_core_dev*,int *,int ) ;
 int FUNC_8 (struct mlx5_core_dev*,int *,int ) ;
 int FUNC_9 (struct mlx5_core_dev*,int *,int ) ;
 int FUNC_10 (struct mlx5_core_dev*,int *,int ) ;
 int FUNC_11 (int) ;
 int VAR_5 ;
 struct mlx5_ib_dev* FUNC_12 (struct ib_device*) ;
 int FUNC_13 (struct ib_device*,int ,int *) ;
 int FUNC_14 (struct ib_device*,int ,int *) ;

__attribute__((used)) static int FUNC_15(struct ib_device *VAR_6, u8 VAR_7,
          struct ib_port_attr *VAR_8)
{
 struct mlx5_ib_dev *VAR_9 = FUNC_12(VAR_6);
 struct mlx5_core_dev *VAR_10 = VAR_9->mdev;
 struct mlx5_hca_vport_context *VAR_11;
 u16 VAR_12;
 u16 VAR_13;
 int VAR_14;
 u8 VAR_15;
 u8 VAR_16;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11) {
  VAR_14 = -VAR_0;
  goto out;
 }



 VAR_14 = FUNC_5(VAR_10, 0, VAR_7, 0, VAR_11);
 if (VAR_14)
  goto out;

 VAR_8->lid = VAR_11->lid;
 VAR_8->lmc = VAR_11->lmc;
 VAR_8->sm_lid = VAR_11->sm_lid;
 VAR_8->sm_sl = VAR_11->sm_sl;
 VAR_8->state = VAR_11->vport_state;
 VAR_8->phys_state = VAR_11->port_physical_state;
 VAR_8->port_cap_flags = VAR_11->cap_mask1;
 VAR_8->gid_tbl_len = FUNC_3(FUNC_0(VAR_10, VAR_3));
 VAR_8->max_msg_sz = 1 << FUNC_0(VAR_10, VAR_4);
 VAR_8->pkey_tbl_len = FUNC_11(FUNC_0(VAR_10, VAR_5));
 VAR_8->bad_pkey_cntr = VAR_11->pkey_violation_counter;
 VAR_8->qkey_viol_cntr = VAR_11->qkey_violation_counter;
 VAR_8->subnet_timeout = VAR_11->subnet_timeout;
 VAR_8->init_type_reply = VAR_11->init_type_reply;

 if (VAR_8->port_cap_flags & VAR_2)
  VAR_8->port_cap_flags2 = VAR_11->cap_mask2;

 VAR_14 = FUNC_7(VAR_10, &VAR_15, VAR_7);
 if (VAR_14)
  goto out;

 FUNC_13(VAR_6, VAR_15, &VAR_8->active_width);

 VAR_14 = FUNC_6(VAR_10, &VAR_8->active_speed, VAR_7);
 if (VAR_14)
  goto out;

 FUNC_8(VAR_10, &VAR_12, VAR_7);

 VAR_8->max_mtu = FUNC_4(VAR_12);

 FUNC_9(VAR_10, &VAR_13, VAR_7);

 VAR_8->active_mtu = FUNC_4(VAR_13);

 VAR_14 = FUNC_10(VAR_10, &VAR_16, VAR_7);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_14(VAR_6, VAR_16,
       &VAR_8->max_vl_num);
out:
 FUNC_1(VAR_11);
 return VAR_14;
}
