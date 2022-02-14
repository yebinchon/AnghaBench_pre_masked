
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct axp20x_time {unsigned int idx; unsigned int time; } ;
struct axp20x_pek {TYPE_1__* axp20x; } ;
typedef int ssize_t ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 struct axp20x_pek* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    const struct axp20x_time *VAR_2,
    unsigned int VAR_3, char *VAR_4)
{
 struct axp20x_pek *VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_5->axp20x->regmap, VAR_0, &VAR_6);
 if (VAR_7 != 0)
  return VAR_7;

 VAR_6 &= VAR_3;
 VAR_6 >>= FUNC_1(VAR_3) - 1;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  if (VAR_6 == VAR_2[VAR_8].idx)
   VAR_6 = VAR_2[VAR_8].time;

 return FUNC_3(VAR_4, "%u\n", VAR_6);
}
