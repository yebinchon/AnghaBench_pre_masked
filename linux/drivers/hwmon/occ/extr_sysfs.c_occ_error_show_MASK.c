
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occ {int error; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct occ* FUNC_0 (struct device*) ;
 int FUNC_1 (struct occ*) ;
 int FUNC_2 (char*,scalar_t__,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct occ *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_4);

 return FUNC_2(VAR_3, VAR_0 - 1, "%d\n", VAR_4->error);
}
