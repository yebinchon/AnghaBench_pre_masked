
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct applesmc_entry {int len; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct applesmc_entry const*) ;
 int FUNC_1 (struct applesmc_entry const*) ;
 struct applesmc_entry* FUNC_2 (int ) ;
 int FUNC_3 (struct applesmc_entry const*,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 const struct applesmc_entry *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 VAR_5 = FUNC_3(VAR_4, VAR_3, VAR_4->len);
 if (VAR_5)
  return VAR_5;

 return VAR_4->len;
}
