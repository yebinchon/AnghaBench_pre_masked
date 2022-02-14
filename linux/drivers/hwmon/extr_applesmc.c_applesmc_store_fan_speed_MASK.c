
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int newkey ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned long*,int) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (struct device_attribute*) ;
 size_t FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
     struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 char VAR_8[5];
 u8 VAR_9[2];

 if (FUNC_1(VAR_4, 10, &VAR_7) < 0 || VAR_7 >= 0x4000)
  return -VAR_0;

 FUNC_2(VAR_8, sizeof(VAR_8), VAR_1[FUNC_4(VAR_3)],
    FUNC_3(VAR_3));

 VAR_9[0] = (VAR_7 >> 6) & 0xff;
 VAR_9[1] = (VAR_7 << 2) & 0xff;
 VAR_6 = FUNC_0(VAR_8, VAR_9, 2);

 if (VAR_6)
  return VAR_6;
 else
  return VAR_5;
}
