
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct mrfld_extcon_data {int id; struct regmap* regmap; } ;


 char FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct regmap*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct mrfld_extcon_data *VAR_10)
{
 struct regmap *VAR_11 = VAR_10->regmap;
 unsigned int VAR_12;
 bool VAR_13;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_11, VAR_0, &VAR_12);
 if (VAR_14)
  return VAR_14;

 if (VAR_12 & VAR_1)
  return VAR_5;

 switch ((VAR_12 & VAR_3) >> VAR_4) {
 case 130:
  return VAR_7;
 case 129:
  return VAR_8;
 case 128:
  return VAR_9;
 }






 VAR_13 = VAR_12 & VAR_2;
 switch ('A' + FUNC_0(VAR_10->id)) {
 case 'A':
  return VAR_13 ? VAR_6 : VAR_5;
 case 'B':
  return VAR_13 ? VAR_5 : VAR_6;
 }


 return VAR_5;
}
