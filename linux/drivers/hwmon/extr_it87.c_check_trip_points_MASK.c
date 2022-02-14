
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it87_data {scalar_t__** auto_temp; scalar_t__** auto_pwm; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct it87_data* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct it87_data const*) ;
 scalar_t__ FUNC_3 (struct it87_data const*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, int VAR_2)
{
 const struct it87_data *VAR_3 = FUNC_1(VAR_1);
 int VAR_4, VAR_5 = 0;

 if (FUNC_3(VAR_3)) {
  for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
   if (VAR_3->auto_temp[VAR_2][VAR_4] > VAR_3->auto_temp[VAR_2][VAR_4 + 1])
    VAR_5 = -VAR_0;
  }
  for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
   if (VAR_3->auto_pwm[VAR_2][VAR_4] > VAR_3->auto_pwm[VAR_2][VAR_4 + 1])
    VAR_5 = -VAR_0;
  }
 } else if (FUNC_2(VAR_3)) {
  for (VAR_4 = 1; VAR_4 < 3; VAR_4++) {
   if (VAR_3->auto_temp[VAR_2][VAR_4] > VAR_3->auto_temp[VAR_2][VAR_4 + 1])
    VAR_5 = -VAR_0;
  }
 }

 if (VAR_5) {
  FUNC_0(VAR_1,
   "Inconsistent trip points, not switching to automatic mode\n");
  FUNC_0(VAR_1, "Adjust the trip points and try again\n");
 }
 return VAR_5;
}
