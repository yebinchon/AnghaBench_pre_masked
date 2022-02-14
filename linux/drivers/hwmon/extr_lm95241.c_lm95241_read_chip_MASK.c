
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lm95241_data {long interval; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct lm95241_data* FUNC_0 (struct device*) ;


__attribute__((used)) static int FUNC_1(struct device *VAR_1, u32 VAR_2, int VAR_3,
        long *VAR_4)
{
 struct lm95241_data *VAR_5 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 128:
  *VAR_4 = VAR_5->interval;
  return 0;
 default:
  return -VAR_0;
 }
}
