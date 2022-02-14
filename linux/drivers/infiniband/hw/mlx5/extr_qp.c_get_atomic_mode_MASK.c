
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_dev *VAR_11,
      enum ib_qp_type VAR_12)
{
 u8 VAR_13 = FUNC_0(VAR_11->mdev, VAR_13);
 u8 VAR_14 = FUNC_1(VAR_11->mdev, VAR_14);
 int VAR_15 = -VAR_0;
 int VAR_16;

 if (!VAR_14)
  return -VAR_0;

 if (VAR_12 == VAR_6)
  VAR_16 = FUNC_0(VAR_11->mdev, VAR_9);
 else
  VAR_16 = FUNC_0(VAR_11->mdev, VAR_10);

 if ((VAR_13 & VAR_3) ||
     (VAR_13 & VAR_4))
  VAR_15 = FUNC_2(VAR_16);

 if (VAR_15 <= 0 &&
     (VAR_13 & VAR_2 &&
      VAR_13 & VAR_5))
  VAR_15 = VAR_1;

 return VAR_15;
}
