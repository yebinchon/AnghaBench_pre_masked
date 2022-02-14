
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int dummy; } ;
struct ib_device {int dummy; } ;


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
 int FUNC_0 (struct mlx5_ib_dev*,char*,int) ;
 struct mlx5_ib_dev* FUNC_1 (struct ib_device*) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_10, u8 VAR_11,
      u8 *VAR_12)
{
 struct mlx5_ib_dev *VAR_13 = FUNC_1(VAR_10);

 if (VAR_11 & VAR_6)
  *VAR_12 = VAR_1;
 else if (VAR_11 & VAR_7)
  *VAR_12 = VAR_2;
 else if (VAR_11 & VAR_8)
  *VAR_12 = VAR_3;
 else if (VAR_11 & VAR_9)
  *VAR_12 = VAR_4;
 else if (VAR_11 & VAR_5)
  *VAR_12 = VAR_0;
 else {
  FUNC_0(VAR_13, "Invalid active_width %d, setting width to default value: 4x\n",
       (int)VAR_11);
  *VAR_12 = VAR_3;
 }

 return;
}
