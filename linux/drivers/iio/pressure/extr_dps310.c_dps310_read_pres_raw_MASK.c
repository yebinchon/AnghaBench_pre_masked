
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
struct dps310_data {int lock; int pressure_raw; int regmap; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct dps310_data*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int*,int) ;
 int FUNC_6 (int ,int ,int,int,int ,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct dps310_data *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 s32 VAR_9;
 u8 VAR_10[3];

 if (FUNC_3(&VAR_4->lock))
  return -VAR_3;

 VAR_6 = FUNC_2(VAR_4);
 VAR_8 = FUNC_1(VAR_6);


 VAR_5 = FUNC_6(VAR_4->regmap, VAR_0, VAR_7,
          VAR_7 & VAR_2,
          FUNC_0(VAR_8), VAR_8);
 if (VAR_5)
  goto done;

 VAR_5 = FUNC_5(VAR_4->regmap, VAR_1, VAR_10, sizeof(VAR_10));
 if (VAR_5 < 0)
  goto done;

 VAR_9 = (VAR_10[0] << 16) | (VAR_10[1] << 8) | VAR_10[2];
 VAR_4->pressure_raw = FUNC_7(VAR_9, 23);

done:
 FUNC_4(&VAR_4->lock);
 return VAR_5;
}
