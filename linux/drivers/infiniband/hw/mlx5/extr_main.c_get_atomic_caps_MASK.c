
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_device_attr {int atomic_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_7,
       u8 VAR_8,
       struct ib_device_attr *VAR_9)
{
 u8 VAR_10;
 u8 VAR_11 = FUNC_0(VAR_7->mdev, VAR_11);
 u8 VAR_12 =
  FUNC_0(VAR_7->mdev, VAR_12);




 VAR_10 = VAR_2 | VAR_3;
 if (((VAR_11 & VAR_10) == VAR_10) &&
     (VAR_8 & VAR_4) &&
     (VAR_12)) {
  VAR_9->atomic_cap = VAR_0;
 } else {
  VAR_9->atomic_cap = VAR_1;
 }
}
