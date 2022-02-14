
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bmp280_data {int regmap; } ;
typedef scalar_t__ __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bmp280_data*,int ) ;
 int FUNC_2 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct bmp280_data *VAR_2, int *VAR_3)
{
 int VAR_4;
 __be16 VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2->regmap, VAR_1, (u8 *)&VAR_5, 2);
 if (VAR_4)
  return VAR_4;

 *VAR_3 = FUNC_0(VAR_5);

 return 0;
}
