
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx90632_data {int emissivity; int regmap; } ;
typedef int s64 ;
typedef scalar_t__ s32 ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mlx90632_data*,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct mlx90632_data *VAR_9, int *VAR_10)
{
 s32 VAR_11;
 s32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned int VAR_17;
 s16 VAR_18, VAR_19, VAR_20, VAR_21;
 s16 VAR_22, VAR_23, VAR_24, VAR_25;
 s64 VAR_26, VAR_27;

 VAR_11 = FUNC_4(VAR_9->regmap, VAR_0, &VAR_12);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_4(VAR_9->regmap, VAR_1, &VAR_13);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_4(VAR_9->regmap, VAR_2, &VAR_14);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_4(VAR_9->regmap, VAR_3, &VAR_15);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_4(VAR_9->regmap, VAR_4, &VAR_16);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_11 = FUNC_5(VAR_9->regmap, VAR_6, &VAR_17);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_18 = (s16)VAR_17;
 VAR_11 = FUNC_5(VAR_9->regmap, VAR_7, &VAR_17);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_19 = (s16)VAR_17;
 VAR_11 = FUNC_5(VAR_9->regmap, VAR_5, &VAR_17);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_20 = (s16)VAR_17;
 VAR_11 = FUNC_5(VAR_9->regmap, VAR_8, &VAR_17);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_21 = (s16)VAR_17;

 VAR_11 = FUNC_3(VAR_9,
     &VAR_22, &VAR_23,
     &VAR_24, &VAR_25);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_27 = FUNC_1(VAR_22,
            VAR_23, VAR_20);
 VAR_26 = FUNC_2(VAR_24,
           VAR_25,
           VAR_22,
           VAR_23, VAR_21);

 *VAR_10 = FUNC_0(VAR_26, VAR_27, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
      VAR_18, VAR_19, VAR_9->emissivity);
 return 0;
}
