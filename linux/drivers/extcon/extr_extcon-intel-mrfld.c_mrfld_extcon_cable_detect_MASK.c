
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct mrfld_extcon_data {unsigned int status; struct regmap* regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mrfld_extcon_data*) ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct mrfld_extcon_data *VAR_3)
{
 struct regmap *VAR_4 = VAR_3->regmap;
 unsigned int VAR_5, VAR_6;
 int VAR_7;






 VAR_7 = FUNC_1(VAR_4, VAR_1, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_5 ^ VAR_3->status;
 if (!VAR_6)
  return -VAR_2;

 if (VAR_6 & VAR_0) {
  VAR_7 = FUNC_0(VAR_3);
  if (VAR_7)
   return VAR_7;
 }

 VAR_3->status = VAR_5;

 return 0;
}
