
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
 int FUNC_1 (int ,int*,int) ;
 scalar_t__ FUNC_2 (char const*,int,unsigned long*) ;
 int FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 u8 VAR_7[2];
 unsigned long VAR_8;
 u16 VAR_9;

 if (FUNC_2(VAR_4, 10, &VAR_8) < 0)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_7, 2);
 VAR_9 = (VAR_7[0] << 8 | VAR_7[1]);
 if (VAR_6)
  goto out;

 if (VAR_8)
  VAR_9 = VAR_9 | (0x01 << FUNC_3(VAR_3));
 else
  VAR_9 = VAR_9 & ~(0x01 << FUNC_3(VAR_3));

 VAR_7[0] = (VAR_9 >> 8) & 0xFF;
 VAR_7[1] = VAR_9 & 0xFF;

 VAR_6 = FUNC_1(VAR_1, VAR_7, 2);

out:
 if (VAR_6)
  return VAR_6;
 else
  return VAR_5;
}
