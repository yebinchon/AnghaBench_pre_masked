
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct si1133_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct si1133_data*,int) ;

__attribute__((used)) static int FUNC_2(struct si1133_data *VAR_3, u8 VAR_4, u32 VAR_5)
{
 int VAR_6 = FUNC_0(VAR_3->regmap, VAR_2, VAR_5);

 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_3, VAR_1 |
         (VAR_4 & VAR_0));
}
