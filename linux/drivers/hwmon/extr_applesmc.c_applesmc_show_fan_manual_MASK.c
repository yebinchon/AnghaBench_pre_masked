
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (char*,int ,char*,int) ;
 int FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
   struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;
 u16 VAR_6 = 0;
 u8 VAR_7[2];

 VAR_5 = FUNC_0(VAR_0, VAR_7, 2);
 VAR_6 = ((VAR_7[0] << 8 | VAR_7[1]) >> FUNC_2(VAR_3)) & 0x01;

 if (VAR_5)
  return VAR_5;
 else
  return FUNC_1(VAR_4, VAR_1, "%d\n", VAR_6);
}
