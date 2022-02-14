
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_wc {int dummy; } ;
struct ib_mad {int dummy; } ;
struct ib_grh {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_ib_dev*,int,struct ib_mad*) ;
 int FUNC_1 (int ,void const*,void*,int,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_dev *VAR_1, int VAR_2,
   int VAR_3, u8 VAR_4, const struct ib_wc *VAR_5,
   const struct ib_grh *VAR_6, const void *VAR_7,
   void *VAR_8)
{
 u8 VAR_9 = 0;

 if (!FUNC_0(VAR_1, VAR_4, (struct ib_mad *)VAR_7))
  return -VAR_0;




 if (VAR_2 || !VAR_5)
  VAR_9 |= 0x1;
 if (VAR_3 || !VAR_5)
  VAR_9 |= 0x2;

 return FUNC_1(VAR_1->mdev, VAR_7, VAR_8, VAR_9,
    VAR_4);
}
