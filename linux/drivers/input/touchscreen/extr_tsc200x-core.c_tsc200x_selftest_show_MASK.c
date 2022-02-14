
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc200x {int mutex; int regmap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tsc200x*) ;
 int FUNC_1 (struct tsc200x*) ;
 struct tsc200x* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*,unsigned int,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,unsigned int*) ;
 int FUNC_7 (int ,int ,unsigned int) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (struct tsc200x*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_2,
         struct device_attribute *VAR_3,
         char *VAR_4)
{
 struct tsc200x *VAR_5 = FUNC_2(VAR_2);
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 bool VAR_9 = 1;
 int VAR_10;

 FUNC_4(&VAR_5->mutex);




 FUNC_0(VAR_5);

 VAR_10 = FUNC_6(VAR_5->regmap, VAR_1, &VAR_7);
 if (VAR_10) {
  FUNC_3(VAR_2, "selftest failed: read error %d\n", VAR_10);
  VAR_9 = 0;
  goto out;
 }

 VAR_8 = (VAR_7 - 1) & VAR_0;

 VAR_10 = FUNC_7(VAR_5->regmap, VAR_1, VAR_8);
 if (VAR_10) {
  FUNC_3(VAR_2, "selftest failed: write error %d\n", VAR_10);
  VAR_9 = 0;
  goto out;
 }

 VAR_10 = FUNC_6(VAR_5->regmap, VAR_1, &VAR_6);
 if (VAR_10) {
  FUNC_3(VAR_2, "selftest failed: read error %d after write\n",
    VAR_10);
  VAR_9 = 0;
  goto out;
 }

 if (VAR_6 != VAR_8) {
  FUNC_3(VAR_2, "selftest failed: %d != %d\n",
    VAR_6, VAR_8);
  VAR_9 = 0;
 }


 FUNC_9(VAR_5);

 if (!VAR_9)
  goto out;


 VAR_10 = FUNC_6(VAR_5->regmap, VAR_1, &VAR_6);
 if (VAR_10) {
  FUNC_3(VAR_2, "selftest failed: read error %d after reset\n",
    VAR_10);
  VAR_9 = 0;
  goto out;
 }

 if (VAR_6 != VAR_7) {
  FUNC_3(VAR_2, "selftest failed after reset: %d != %d\n",
    VAR_6, VAR_7);
  VAR_9 = 0;
 }

out:
 FUNC_1(VAR_5);
 FUNC_5(&VAR_5->mutex);

 return FUNC_8(VAR_4, "%d\n", VAR_9);
}
