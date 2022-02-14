
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpga_region {TYPE_1__* compat_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ id_l; scalar_t__ id_h; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,unsigned long long,unsigned long long) ;
 struct fpga_region* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct fpga_region *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4->compat_id)
  return -VAR_0;

 return FUNC_0(VAR_3, "%016llx%016llx\n",
         (unsigned long long)VAR_4->compat_id->id_h,
         (unsigned long long)VAR_4->compat_id->id_l);
}
