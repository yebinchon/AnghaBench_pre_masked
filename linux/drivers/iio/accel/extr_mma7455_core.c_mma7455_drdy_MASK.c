
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma7455_data {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct mma7455_data *VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_3->regmap);
 unsigned int VAR_5;
 int VAR_6 = 3;
 int VAR_7;

 while (VAR_6-- > 0) {
  VAR_7 = FUNC_3(VAR_3->regmap, VAR_1, &VAR_5);
  if (VAR_7)
   return VAR_7;

  if (VAR_5 & VAR_2)
   return 0;

  FUNC_1(20);
 }

 FUNC_0(VAR_4, "data not ready\n");

 return -VAR_0;
}
