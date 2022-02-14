
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_pagefault {int event_subtype; } ;
struct mlx5_ib_dev {int dummy; } ;




 int FUNC_0 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_pagefault*) ;
 int FUNC_2 (struct mlx5_ib_dev*,struct mlx5_pagefault*) ;
 int FUNC_3 (struct mlx5_ib_dev*,struct mlx5_pagefault*,int) ;

__attribute__((used)) static void FUNC_4(struct mlx5_ib_dev *VAR_0, struct mlx5_pagefault *VAR_1)
{
 u8 VAR_2 = VAR_1->event_subtype;

 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_0, VAR_1);
  break;
 default:
  FUNC_0(VAR_0, "Invalid page fault event subtype: 0x%x\n",
       VAR_2);
  FUNC_3(VAR_0, VAR_1, 1);
 }
}
