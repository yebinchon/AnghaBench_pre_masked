
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_port_attr {unsigned int gid_tbl_len; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;



 unsigned int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct ib_device*) ;
 struct mlx5_core_dev* FUNC_2 (struct mlx5_ib_dev*,int,int *) ;
 int FUNC_3 (struct mlx5_ib_dev*,int) ;
 int FUNC_4 (struct ib_device*,int,struct ib_port_attr*) ;
 int FUNC_5 (struct ib_device*,int,struct ib_port_attr*) ;
 int FUNC_6 (struct ib_device*,int,struct ib_port_attr*) ;
 struct mlx5_ib_dev* FUNC_7 (struct ib_device*) ;

int FUNC_8(struct ib_device *VAR_1, u8 VAR_2,
         struct ib_port_attr *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 switch (FUNC_1(VAR_1)) {
 case 129:
  VAR_5 = FUNC_5(VAR_1, VAR_2, VAR_3);
  break;

 case 130:
  VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3);
  break;

 case 128:
  VAR_5 = FUNC_6(VAR_1, VAR_2, VAR_3);
  break;

 default:
  VAR_5 = -VAR_0;
 }

 if (!VAR_5 && VAR_3) {
  struct mlx5_ib_dev *VAR_6 = FUNC_7(VAR_1);
  struct mlx5_core_dev *VAR_7;
  bool VAR_8 = 1;

  VAR_7 = FUNC_2(VAR_6, VAR_2, ((void*)0));
  if (!VAR_7) {



   VAR_7 = VAR_6->mdev;
   VAR_2 = 1;
   VAR_8 = 0;
  }
  VAR_4 = FUNC_0(VAR_7);
  if (VAR_8)
   FUNC_3(VAR_6, VAR_2);
  VAR_3->gid_tbl_len -= VAR_4;
 }
 return VAR_5;
}
