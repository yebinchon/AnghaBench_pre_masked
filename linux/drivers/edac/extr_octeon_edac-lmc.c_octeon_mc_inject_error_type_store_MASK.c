
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_lmc_pvt {int error_type; } ;
struct mem_ctl_info {struct octeon_lmc_pvt* pvt_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (char const*,char*,int) ;
 struct mem_ctl_info* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1,
       const char *VAR_2,
       size_t VAR_3)
{
 struct mem_ctl_info *VAR_4 = FUNC_1(VAR_0);
 struct octeon_lmc_pvt *VAR_5 = VAR_4->pvt_info;

 if (!FUNC_0(VAR_2, "single", 6))
  VAR_5->error_type = 1;
 else if (!FUNC_0(VAR_2, "double", 6))
  VAR_5->error_type = 2;

 return VAR_3;
}
