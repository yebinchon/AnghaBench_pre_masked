
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 int VAR_5;
 u8 VAR_6[4];
 u32 VAR_7;

 VAR_5 = FUNC_0(VAR_0, VAR_6, 4);
 VAR_7 = ((u32)VAR_6[0]<<24) + ((u32)VAR_6[1]<<16) +
      ((u32)VAR_6[2]<<8) + VAR_6[3];

 if (VAR_5)
  return VAR_5;
 else
  return FUNC_1(VAR_4, VAR_1, "%d\n", VAR_7);
}
