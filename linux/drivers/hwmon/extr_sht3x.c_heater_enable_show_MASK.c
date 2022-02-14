
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (struct device*,struct device_attribute*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3,
      struct device_attribute *VAR_4,
      char *VAR_5)
{
 char VAR_6[VAR_2 + VAR_1];
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_6,
       VAR_2 + VAR_1);
 if (VAR_7)
  return VAR_7;

 return FUNC_0(VAR_5, VAR_0, "%d\n", !!(VAR_6[0] & 0x20));
}
