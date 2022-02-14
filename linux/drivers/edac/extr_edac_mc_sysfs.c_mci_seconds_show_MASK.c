
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int start_time; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 struct mem_ctl_info* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4)
{
 struct mem_ctl_info *VAR_5 = FUNC_1(VAR_2);

 return FUNC_0(VAR_4, "%ld\n", (VAR_1 - VAR_5->start_time) / VAR_0);
}
