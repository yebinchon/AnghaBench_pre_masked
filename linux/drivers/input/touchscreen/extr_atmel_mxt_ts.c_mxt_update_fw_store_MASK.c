
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxt_data {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct mxt_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct mxt_data*) ;
 int FUNC_4 (struct device*,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct mxt_data *VAR_5 = FUNC_1(VAR_1);
 int VAR_6;

 VAR_6 = FUNC_4(VAR_1, VAR_0);
 if (VAR_6) {
  FUNC_0(VAR_1, "The firmware update failed(%d)\n", VAR_6);
  VAR_4 = VAR_6;
 } else {
  FUNC_2(VAR_1, "The firmware update succeeded\n");

  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 return VAR_4;
}
