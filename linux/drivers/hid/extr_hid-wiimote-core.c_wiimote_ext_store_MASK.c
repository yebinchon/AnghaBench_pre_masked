
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct wiimote_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (struct wiimote_data*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct wiimote_data *VAR_6 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_4, "scan")) {
  FUNC_3(VAR_6);
 } else {
  return -VAR_0;
 }

 return FUNC_2(VAR_4, VAR_1);
}
