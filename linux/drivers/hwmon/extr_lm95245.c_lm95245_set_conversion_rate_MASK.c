
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95245_data {long interval; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct lm95245_data *VAR_5, long VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_6 <= 63) {
  VAR_6 = 63;
  VAR_8 = VAR_1;
 } else if (VAR_6 <= 364) {
  VAR_6 = 364;
  VAR_8 = VAR_2;
 } else if (VAR_6 <= 1000) {
  VAR_6 = 1000;
  VAR_8 = VAR_3;
 } else {
  VAR_6 = 2500;
  VAR_8 = VAR_4;
 }

 VAR_7 = FUNC_0(VAR_5->regmap, VAR_0, VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->interval = VAR_6;
 return 0;
}
