
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_ctl_info {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct mem_ctl_info*,int *,int *,int *) ;
 int FUNC_1 (char*,char*,int ,int ,int ) ;
 struct mem_ctl_info* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 struct mem_ctl_info *VAR_3 = FUNC_2(VAR_0);

 u64 VAR_4 = 0;
 u64 VAR_5 = 0;
 u64 VAR_6 = 0;

 FUNC_0(VAR_3, &VAR_4, &VAR_5, &VAR_6);

 return FUNC_1(VAR_2, "%llx %llx %llx\n", VAR_4, VAR_5,
       VAR_6);
}
