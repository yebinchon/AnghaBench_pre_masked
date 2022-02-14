
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bmp280_data {int oversampling_press; int regmap; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bmp280_data*,int ) ;
 int FUNC_3 (int ,int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct bmp280_data *VAR_1, int *VAR_2)
{
 int VAR_3;
 __be32 VAR_4 = 0;
 u8 VAR_5 = VAR_1->oversampling_press;

 VAR_3 = FUNC_2(VAR_1, FUNC_0(VAR_5));
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_1->regmap, VAR_0, (u8 *)&VAR_4, 3);
 if (VAR_3)
  return VAR_3;

 *VAR_2 = (FUNC_1(VAR_4) >> 8) >> (8 - VAR_5);

 return 0;
}
