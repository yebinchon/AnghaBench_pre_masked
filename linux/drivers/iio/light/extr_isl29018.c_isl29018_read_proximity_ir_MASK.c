
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29018_chip {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct isl29018_chip*,int ) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct isl29018_chip *VAR_5, int VAR_6,
          int *VAR_7)
{
 int VAR_8;
 int VAR_9 = -1;
 int VAR_10 = -1;
 struct device *VAR_11 = FUNC_2(VAR_5->regmap);


 VAR_8 = FUNC_3(VAR_5->regmap, VAR_4,
        VAR_2,
        VAR_6 << VAR_3);
 if (VAR_8) {
  FUNC_0(VAR_11, "Error in setting operating mode\n");
  return VAR_8;
 }

 VAR_9 = FUNC_1(VAR_5,
            VAR_1);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_6 == 1) {
  *VAR_7 = VAR_9;
  return 0;
 }

 VAR_10 = FUNC_1(VAR_5,
          VAR_0);
 if (VAR_10 < 0)
  return VAR_10;

 if (VAR_9 >= VAR_10)
  *VAR_7 = VAR_9 - VAR_10;
 else
  *VAR_7 = 0;

 return 0;
}
