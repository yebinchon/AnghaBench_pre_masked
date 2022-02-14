
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u16 ;
struct max44000_data {int regmap; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct max44000_data*) ;
 int FUNC_3 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct max44000_data *VAR_2)
{
 u16 VAR_3;
 __be16 VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_3(VAR_2->regmap, VAR_1,
          &VAR_4, sizeof(VAR_4));
 if (VAR_6 < 0)
  return VAR_6;
 VAR_5 = VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3 & VAR_0)
  return 0x3FFF;

 return VAR_3 << FUNC_0(VAR_5);
}
