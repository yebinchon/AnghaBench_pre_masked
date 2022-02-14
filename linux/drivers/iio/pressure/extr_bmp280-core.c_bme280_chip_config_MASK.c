
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bmp280_data {int regmap; scalar_t__ oversampling_humid; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bmp280_data*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct bmp280_data *VAR_2)
{
 int VAR_3;
 u8 VAR_4 = FUNC_0(VAR_2->oversampling_humid + 1);





 VAR_3 = FUNC_2(VAR_2->regmap, VAR_1,
      VAR_0, VAR_4);

 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_2);
}
