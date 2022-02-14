
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max30102_data {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct max30102_data*,int*) ;
 int FUNC_1 (struct max30102_data*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct max30102_data *VAR_2, int *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_4) {
  VAR_5 = FUNC_1(VAR_2, 1);
  if (VAR_5)
   return VAR_5;
 }


 VAR_5 = FUNC_3(VAR_2->regmap, VAR_0,
     VAR_1,
     VAR_1);
 if (VAR_5)
  goto out;

 FUNC_2(35);
 VAR_5 = FUNC_0(VAR_2, VAR_3);

out:
 if (VAR_4)
  FUNC_1(VAR_2, 0);

 return VAR_5;
}
