
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ak8974 {int map; TYPE_1__* i2c; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ak8974 *VAR_7)
{
 struct device *VAR_8 = &VAR_7->i2c->dev;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_7->map, VAR_2, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 != VAR_4) {
  FUNC_1(VAR_8, "selftest not idle before test\n");
  return -VAR_6;
 }


 VAR_10 = FUNC_4(VAR_7->map,
   VAR_0,
   VAR_1,
   VAR_1);
 if (VAR_10) {
  FUNC_1(VAR_8, "could not write CTRL3\n");
  return VAR_10;
 }

 FUNC_2(VAR_3);

 VAR_10 = FUNC_3(VAR_7->map, VAR_2, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 != VAR_5) {
  FUNC_1(VAR_8, "selftest result NOT OK (%02x)\n", VAR_9);
  return -VAR_6;
 }

 VAR_10 = FUNC_3(VAR_7->map, VAR_2, &VAR_9);
 if (VAR_10)
  return VAR_10;
 if (VAR_9 != VAR_4) {
  FUNC_1(VAR_8, "selftest not idle after test (%02x)\n", VAR_9);
  return -VAR_6;
 }
 FUNC_0(VAR_8, "passed self-test\n");

 return 0;
}
