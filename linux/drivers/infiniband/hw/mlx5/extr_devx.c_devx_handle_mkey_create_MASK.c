
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int dummy; } ;
struct devx_obj {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (void*,void*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,void*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct mlx5_ib_dev *VAR_10,
       struct devx_obj *VAR_11,
       void *VAR_12, int VAR_13)
{
 int VAR_14 = FUNC_2(VAR_7, VAR_8) +
   FUNC_3(VAR_7,
   VAR_8);
 void *VAR_15;
 u8 VAR_16;

 if (VAR_13 < VAR_14)
  return -VAR_2;

 VAR_15 = FUNC_1(VAR_7, VAR_12, VAR_8);

 VAR_16 = FUNC_4(VAR_15, VAR_15, VAR_5);
 VAR_16 |= FUNC_4(VAR_15, VAR_15, VAR_6) << 2;

 if (VAR_16 == VAR_3 ||
  VAR_16 == VAR_4) {
  if (FUNC_0(VAR_0))
   VAR_11->flags |= VAR_1;
  return 0;
 }

 FUNC_5(VAR_7, VAR_12, VAR_9, 1);
 return 0;
}
