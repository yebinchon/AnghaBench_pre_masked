
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct led_classdev_flash {int dummy; } ;
struct led_classdev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct led_classdev* FUNC_0 (struct device*) ;
 struct led_classdev_flash* FUNC_1 (struct led_classdev*) ;
 char** VAR_2 ;
 int FUNC_2 (struct led_classdev_flash*,int*) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
  struct device_attribute *VAR_4, char *VAR_5)
{
 struct led_classdev *VAR_6 = FUNC_0(VAR_3);
 struct led_classdev_flash *VAR_7 = FUNC_1(VAR_6);
 u32 VAR_8, VAR_9 = 0x1;
 char *VAR_10 = VAR_5;
 int VAR_11, VAR_12, VAR_13;

 VAR_12 = FUNC_2(VAR_7, &VAR_8);
 if (VAR_12 < 0)
  return -VAR_0;

 *VAR_5 = '\0';

 for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11) {
  if (VAR_8 & VAR_9) {
   VAR_13 = FUNC_3(VAR_10, "%s ",
       VAR_2[VAR_11]);
   VAR_10 += VAR_13;
  }
  VAR_9 <<= 1;
 }

 return FUNC_3(VAR_5, "%s\n", VAR_5);
}
