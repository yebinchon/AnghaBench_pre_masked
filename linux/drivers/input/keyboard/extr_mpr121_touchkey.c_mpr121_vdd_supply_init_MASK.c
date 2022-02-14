
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator {int dummy; } ;
struct device {int dummy; } ;


 struct regulator* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,int ,struct regulator*) ;
 struct regulator* FUNC_5 (struct device*,char*) ;
 int VAR_0 ;
 int FUNC_6 (struct regulator*) ;
 int FUNC_7 (struct regulator*) ;

__attribute__((used)) static struct regulator *FUNC_8(struct device *VAR_1)
{
 struct regulator *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_5(VAR_1, "vdd");
 if (FUNC_1(VAR_2)) {
  FUNC_3(VAR_1, "failed to get vdd regulator: %ld\n",
   FUNC_2(VAR_2));
  return VAR_2;
 }

 VAR_3 = FUNC_7(VAR_2);
 if (VAR_3) {
  FUNC_3(VAR_1, "failed to enable vdd regulator: %d\n", VAR_3);
  return FUNC_0(VAR_3);
 }

 VAR_3 = FUNC_4(VAR_1, VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_6(VAR_2);
  FUNC_3(VAR_1, "failed to add disable regulator action: %d\n",
   VAR_3);
  return FUNC_0(VAR_3);
 }

 return VAR_2;
}
