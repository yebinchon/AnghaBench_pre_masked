
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_ib_dev {int mdev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_2(void *VAR_6, struct mlx5_ib_dev *VAR_7)
{
 u16 VAR_8 = FUNC_1(VAR_2, VAR_6, VAR_8);


 if ((FUNC_0(VAR_7->mdev, VAR_4) &&
      FUNC_1(VAR_2, VAR_6, VAR_5)) ||
     (VAR_8 >= VAR_1 &&
      VAR_8 < VAR_0))
  return 1;

 switch (VAR_8) {
 case 136:
 case 135:
 case 137:
 case 128:
 case 141:
 case 134:
 case 132:
 case 131:
 case 130:
 case 129:
 case 143:
 case 142:
 case 138:
 case 140:
 case 139:
 case 133:
  return 1;
 default:
  return 0;
 }
}
