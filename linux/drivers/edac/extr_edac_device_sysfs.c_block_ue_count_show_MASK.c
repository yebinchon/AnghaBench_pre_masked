
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {int ue_count; } ;
struct edac_device_block {TYPE_1__ counters; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct edac_device_block* FUNC_1 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_0,
     struct attribute *VAR_1, char *VAR_2)
{
 struct edac_device_block *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "%u\n", VAR_3->counters.ue_count);
}
