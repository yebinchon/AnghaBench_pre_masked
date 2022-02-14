
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct bmc_device {int dummy; } ;
typedef int ssize_t ;
typedef int guid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct bmc_device*,int *,int*,int *) ;
 int FUNC_1 (char*,scalar_t__,char*,int *) ;
 struct bmc_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct bmc_device *VAR_5 = FUNC_2(VAR_2);
 bool VAR_6;
 guid_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(((void*)0), VAR_5, ((void*)0), &VAR_6, &VAR_7);
 if (VAR_8)
  return VAR_8;
 if (!VAR_6)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_1 + 1 + 1, "%pUl\n", &VAR_7);
}
