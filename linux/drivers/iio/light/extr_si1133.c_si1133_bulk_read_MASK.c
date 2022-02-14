
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si1133_data {int regmap; } ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct si1133_data*) ;

__attribute__((used)) static int FUNC_2(struct si1133_data *VAR_0, u8 VAR_1, u8 VAR_2,
       u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_0->regmap, VAR_1, VAR_3, VAR_2);
}
