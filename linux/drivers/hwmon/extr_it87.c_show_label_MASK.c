
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct it87_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct it87_data* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct it87_data*) ;
 scalar_t__ FUNC_2 (struct it87_data*) ;
 scalar_t__ FUNC_3 (struct it87_data*) ;
 int FUNC_4 (char*,char*,char const*) ;
 TYPE_1__* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0, struct device_attribute *VAR_1,
     char *VAR_2)
{
 static const char * const VAR_3[] = {
  "+5V",
  "5VSB",
  "Vbat",
  "AVCC",
 };
 static const char * const VAR_4[] = {
  "+3.3V",
  "3VSB",
  "Vbat",
  "+3.3V",
 };
 struct it87_data *VAR_5 = FUNC_0(VAR_0);
 int VAR_6 = FUNC_5(VAR_1)->index;
 const char *VAR_7;

 if (FUNC_3(VAR_5) && VAR_6 == 0)
  VAR_7 = VAR_3[0];
 else if (FUNC_2(VAR_5) || FUNC_1(VAR_5))
  VAR_7 = VAR_4[VAR_6];
 else
  VAR_7 = VAR_3[VAR_6];

 return FUNC_4(VAR_2, "%s\n", VAR_7);
}
