
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val_str ;
struct device {int dummy; } ;
struct axp20x_time {unsigned int idx; scalar_t__ time; } ;
struct axp20x_pek {TYPE_1__* axp20x; } ;
typedef int ssize_t ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct axp20x_pek* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,int,unsigned int*) ;
 int FUNC_4 (int ,int ,unsigned int,unsigned int) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_3,
     const struct axp20x_time *VAR_4,
     unsigned int VAR_5, const char *VAR_6,
     size_t VAR_7)
{
 struct axp20x_pek *VAR_8 = FUNC_1(VAR_3);
 char VAR_9[20];
 size_t VAR_10;
 int VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14 = 0;
 unsigned int VAR_15 = VAR_2;

 VAR_9[sizeof(VAR_9) - 1] = '\0';
 FUNC_6(VAR_9, VAR_6, sizeof(VAR_9) - 1);
 VAR_10 = FUNC_5(VAR_9);

 if (VAR_10 && VAR_9[VAR_10 - 1] == '\n')
  VAR_9[VAR_10 - 1] = '\0';

 VAR_11 = FUNC_3(VAR_9, 10, &VAR_13);
 if (VAR_11)
  return VAR_11;

 for (VAR_12 = 3; VAR_12 >= 0; VAR_12--) {
  unsigned int VAR_16;

  VAR_16 = FUNC_0(VAR_4[VAR_12].time - VAR_13);
  if (VAR_16 < VAR_15) {
   VAR_15 = VAR_16;
   VAR_14 = VAR_4[VAR_12].idx;
  }

  if (!VAR_16)
   break;
 }

 VAR_14 <<= FUNC_2(VAR_5) - 1;
 VAR_11 = FUNC_4(VAR_8->axp20x->regmap, VAR_0,
     VAR_5, VAR_14);
 if (VAR_11 != 0)
  return -VAR_1;

 return VAR_7;
}
