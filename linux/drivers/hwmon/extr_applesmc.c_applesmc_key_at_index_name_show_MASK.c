
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct applesmc_entry {char* key; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct applesmc_entry const*) ;
 int VAR_0 ;
 int FUNC_1 (struct applesmc_entry const*) ;
 struct applesmc_entry* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 const struct applesmc_entry *VAR_5;

 VAR_5 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 return FUNC_3(VAR_4, VAR_0, "%s\n", VAR_5->key);
}
