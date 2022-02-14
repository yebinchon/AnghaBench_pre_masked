
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx90632_data {int lock; int regmap; } ;
typedef scalar_t__ s32 ;
typedef int s16 ;


 scalar_t__ FUNC_0 (struct mlx90632_data*) ;
 scalar_t__ FUNC_1 (int ,int *,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mlx90632_data *VAR_0,
         s16 *VAR_1, s16 *VAR_2,
         s16 *VAR_3, s16 *VAR_4)
{
 s32 VAR_5, VAR_6;

 FUNC_3(&VAR_0->lock);
 VAR_6 = FUNC_0(VAR_0);
 if (VAR_6 < 0) {
  VAR_5 = VAR_6;
  goto read_unlock;
 }
 VAR_5 = FUNC_1(VAR_0->regmap, VAR_1,
     VAR_2);
 if (VAR_5 < 0)
  goto read_unlock;

 VAR_5 = FUNC_2(VAR_0->regmap, VAR_6,
           VAR_3, VAR_4);
read_unlock:
 FUNC_4(&VAR_0->lock);
 return VAR_5;
}
