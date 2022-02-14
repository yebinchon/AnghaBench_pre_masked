
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bmp280_data {int dev; int regmap; } ;
typedef int s32 ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bmp280_data*,int) ;
 int FUNC_2 (struct bmp280_data*,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_5(struct bmp280_data *VAR_4,
        int *VAR_5, int *VAR_6)
{
 int VAR_7;
 __be32 VAR_8 = 0;
 s32 VAR_9;
 u32 VAR_10;


 VAR_7 = FUNC_2(VAR_4, ((void*)0));
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_4->regmap, VAR_1,
          (u8 *) &VAR_8, 3);
 if (VAR_7 < 0) {
  FUNC_3(VAR_4->dev, "failed to read pressure\n");
  return VAR_7;
 }

 VAR_9 = FUNC_0(VAR_8) >> 12;
 if (VAR_9 == VAR_0) {

  FUNC_3(VAR_4->dev, "reading pressure skipped\n");
  return -VAR_2;
 }
 VAR_10 = FUNC_1(VAR_4, VAR_9);

 *VAR_5 = VAR_10;
 *VAR_6 = 256000;

 return VAR_3;
}
