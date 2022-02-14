
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct TYPE_2__ {scalar_t__ eccmask; scalar_t__ enable; } ;
struct i7core_pvt {TYPE_1__ inject; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct mem_ctl_info*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 struct mem_ctl_info* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct mem_ctl_info *VAR_5 = FUNC_2(VAR_1);
 struct i7core_pvt *VAR_6 = VAR_5->pvt_info;
 unsigned long VAR_7;
 int VAR_8;

 if (VAR_6->inject.enable)
  FUNC_0(VAR_5);

 VAR_8 = FUNC_1(VAR_3, 10, &VAR_7);
 if (VAR_8 < 0)
  return -VAR_0;

 VAR_6->inject.eccmask = (u32) VAR_7;
 return VAR_4;
}
