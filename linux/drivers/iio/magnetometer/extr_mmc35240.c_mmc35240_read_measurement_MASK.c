
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mmc35240_data {int regmap; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct mmc35240_data*) ;
 int FUNC_1 (int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct mmc35240_data *VAR_1, __le16 VAR_2[3])
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_1->regmap, VAR_0, (u8 *)VAR_2,
    3 * sizeof(__le16));
}
