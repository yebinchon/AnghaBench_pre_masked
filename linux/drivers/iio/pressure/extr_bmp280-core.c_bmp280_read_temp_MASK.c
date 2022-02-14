
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bmp280_data {int dev; int regmap; } ;
typedef int s32 ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bmp280_data*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct bmp280_data *VAR_4,
       int *VAR_5)
{
 int VAR_6;
 __be32 VAR_7 = 0;
 s32 VAR_8, VAR_9;

 VAR_6 = FUNC_3(VAR_4->regmap, VAR_0,
          (u8 *) &VAR_7, 3);
 if (VAR_6 < 0) {
  FUNC_2(VAR_4->dev, "failed to read temperature\n");
  return VAR_6;
 }

 VAR_8 = FUNC_0(VAR_7) >> 12;
 if (VAR_8 == VAR_1) {

  FUNC_2(VAR_4->dev, "reading temperature skipped\n");
  return -VAR_2;
 }
 VAR_9 = FUNC_1(VAR_4, VAR_8);





 if (VAR_5) {
  *VAR_5 = VAR_9 * 10;
  return VAR_3;
 }

 return 0;
}
