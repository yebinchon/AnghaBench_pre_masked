
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipack_device {int id_format; int id_vendor; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;


 int FUNC_0 (char*,char*,int) ;
 struct ipack_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct ipack_device *VAR_4 = FUNC_1(VAR_1);
 switch (VAR_4->id_format) {
 case 129:
  return FUNC_0(VAR_3, "0x%02x\n", VAR_4->id_vendor);
 case 128:
  return FUNC_0(VAR_3, "0x%06x\n", VAR_4->id_vendor);
 default:
  return -VAR_0;
 }
}
