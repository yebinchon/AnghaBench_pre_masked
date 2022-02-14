
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx90632_data {int regmap; } ;
typedef scalar_t__ s32 ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct mlx90632_data *VAR_5, int *VAR_6)
{
 s32 VAR_7;
 unsigned int VAR_8;
 s32 VAR_9, VAR_10, VAR_11, VAR_12;
 s16 VAR_13;
 s16 VAR_14, VAR_15;

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_3, &VAR_10);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_2(VAR_5->regmap, VAR_1, &VAR_11);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_2(VAR_5->regmap, VAR_4, &VAR_9);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_2(VAR_5->regmap, VAR_2, &VAR_12);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_3(VAR_5->regmap, VAR_0, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_13 = (s16)VAR_8;

 VAR_7 = FUNC_1(VAR_5->regmap, &VAR_14,
     &VAR_15);
 if (VAR_7 < 0)
  return VAR_7;
 *VAR_6 = FUNC_0(VAR_14, VAR_15,
       VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 return VAR_7;
}
