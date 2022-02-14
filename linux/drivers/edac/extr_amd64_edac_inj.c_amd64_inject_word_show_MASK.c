
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int word; } ;
struct amd64_pvt {TYPE_1__ injection; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct mem_ctl_info* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char *VAR_2)
{
 struct mem_ctl_info *VAR_3 = FUNC_1(VAR_0);
 struct amd64_pvt *VAR_4 = VAR_3->pvt_info;
 return FUNC_0(VAR_2, "0x%x\n", VAR_4->injection.word);
}
