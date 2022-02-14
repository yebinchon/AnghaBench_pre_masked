
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_ib_dev {int cap_mask_mutex; int mdev; } ;
struct ib_port_modify {int clr_port_cap_mask; int set_port_cap_mask; } ;
struct ib_port_attr {int port_cap_flags; } ;
struct ib_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ib_device*,int ,struct ib_port_attr*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ib_device*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mlx5_ib_dev*,int ,int,int) ;
 struct mlx5_ib_dev* FUNC_7 (struct ib_device*) ;

__attribute__((used)) static int FUNC_8(struct ib_device *VAR_2, u8 VAR_3, int VAR_4,
          struct ib_port_modify *VAR_5)
{
 struct mlx5_ib_dev *VAR_6 = FUNC_7(VAR_2);
 struct ib_port_attr VAR_7;
 u32 VAR_8;
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 bool VAR_12 = (FUNC_2(VAR_2, VAR_3) ==
        VAR_0);




 if (!VAR_12)
  return 0;

 if (FUNC_0(VAR_6->mdev, VAR_1) && VAR_12) {
  VAR_10 = VAR_5->clr_port_cap_mask | VAR_5->set_port_cap_mask;
  VAR_11 = ~VAR_5->clr_port_cap_mask | VAR_5->set_port_cap_mask;
  return FUNC_6(VAR_6, VAR_3, VAR_10, VAR_11);
 }

 FUNC_4(&VAR_6->cap_mask_mutex);

 VAR_9 = FUNC_1(VAR_2, VAR_3, &VAR_7);
 if (VAR_9)
  goto out;

 VAR_8 = (VAR_7.port_cap_flags | VAR_5->set_port_cap_mask) &
  ~VAR_5->clr_port_cap_mask;

 VAR_9 = FUNC_3(VAR_6->mdev, VAR_3, VAR_8);

out:
 FUNC_5(&VAR_6->cap_mask_mutex);
 return VAR_9;
}
