
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adxl372_state {int regmap; } ;
typedef int regval ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct adxl372_state *VAR_0, u8 VAR_1)
{
 __be16 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->regmap, VAR_1, &VAR_2, sizeof(VAR_2));
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_0(VAR_2);
}
