
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st_uvis25_hw {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (struct st_uvis25_hw*,int) ;

__attribute__((used)) static int FUNC_3(struct st_uvis25_hw *VAR_1, u8 VAR_2, int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, 1);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_0(1500);







 VAR_4 = FUNC_2(VAR_1, 0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1->regmap, VAR_2, VAR_3);

 return VAR_4 < 0 ? VAR_4 : VAR_0;
}
