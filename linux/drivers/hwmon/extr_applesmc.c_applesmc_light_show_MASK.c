
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct applesmc_entry {int len; } ;
typedef int ssize_t ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct applesmc_entry const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct applesmc_entry const*) ;
 struct applesmc_entry* FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int ,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4,
    struct device_attribute *VAR_5, char *VAR_6)
{
 const struct applesmc_entry *VAR_7;
 static int VAR_8;
 int VAR_9;
 u8 VAR_10 = 0, VAR_11 = 0;
 u8 VAR_12[10];

 if (!VAR_8) {
  VAR_7 = FUNC_2(VAR_1);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
  if (VAR_7->len > 10)
   return -VAR_0;
  VAR_8 = VAR_7->len;
  FUNC_5("light sensor data length set to %d\n", VAR_8);
 }

 VAR_9 = FUNC_3(VAR_1, VAR_12, VAR_8);

 if (VAR_8 == 10) {
  VAR_10 = FUNC_4(*(__be16 *)(VAR_12 + 6)) >> 2;
  goto out;
 }
 VAR_10 = VAR_12[2];
 if (VAR_9)
  goto out;
 VAR_9 = FUNC_3(VAR_2, VAR_12, VAR_8);
 VAR_11 = VAR_12[2];

out:
 if (VAR_9)
  return VAR_9;
 else
  return FUNC_6(VAR_6, VAR_3, "(%d,%d)\n", VAR_10, VAR_11);
}
