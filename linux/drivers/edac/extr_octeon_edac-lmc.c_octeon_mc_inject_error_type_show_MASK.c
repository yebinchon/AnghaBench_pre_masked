
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_lmc_pvt {int error_type; } ;
struct mem_ctl_info {struct octeon_lmc_pvt* pvt_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*) ;
 struct mem_ctl_info* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct mem_ctl_info *VAR_3 = FUNC_1(VAR_0);
 struct octeon_lmc_pvt *VAR_4 = VAR_3->pvt_info;
 if (VAR_4->error_type == 1)
  return FUNC_0(VAR_2, "single");
 else if (VAR_4->error_type == 2)
  return FUNC_0(VAR_2, "double");

 return 0;
}
