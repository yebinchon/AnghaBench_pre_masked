
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int (* set_sdram_scrub_rate ) (struct mem_ctl_info*,unsigned long) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,unsigned long) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct mem_ctl_info*,unsigned long) ;
 struct mem_ctl_info* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 struct mem_ctl_info *VAR_7 = FUNC_3(VAR_3);
 unsigned long VAR_8 = 0;
 int VAR_9 = 0;

 if (FUNC_1(VAR_5, 10, &VAR_8) < 0)
  return -VAR_1;

 VAR_9 = VAR_7->set_sdram_scrub_rate(VAR_7, VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_2, VAR_0,
       "Error setting scrub rate to: %lu\n", VAR_8);
  return -VAR_1;
 }

 return VAR_6;
}
