
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {int (* get_sdram_scrub_rate ) (struct mem_ctl_info*) ;} ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct mem_ctl_info*) ;
 struct mem_ctl_info* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
      struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct mem_ctl_info *VAR_5 = FUNC_3(VAR_2);
 int VAR_6 = 0;

 VAR_6 = VAR_5->get_sdram_scrub_rate(VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_1, VAR_0, "Error reading scrub rate\n");
  return VAR_6;
 }

 return FUNC_1(VAR_4, "%d\n", VAR_6);
}
