
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct mem_ctl_info {scalar_t__ set_sdram_scrub_rate; scalar_t__ get_sdram_scrub_rate; } ;
struct kobject {int dummy; } ;
struct device {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_2__ {struct attribute attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct device* FUNC_0 (struct kobject*) ;
 struct mem_ctl_info* FUNC_1 (struct device*) ;

__attribute__((used)) static umode_t FUNC_2(struct kobject *VAR_3,
       struct attribute *VAR_4, int VAR_5)
{
 struct device *VAR_6 = FUNC_0(VAR_3);
 struct mem_ctl_info *VAR_7 = FUNC_1(VAR_6);
 umode_t VAR_8 = 0;

 if (VAR_4 != &VAR_2.attr)
  return VAR_4->mode;
 if (VAR_7->get_sdram_scrub_rate)
  VAR_8 |= VAR_0;
 if (VAR_7->set_sdram_scrub_rate)
  VAR_8 |= VAR_1;
 return VAR_8;
}
