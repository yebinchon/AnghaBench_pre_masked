
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct edac_device_ctl_info {int owner; int dev_idx; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct edac_device_ctl_info*) ;
 int FUNC_2 (int ) ;
 struct edac_device_ctl_info* FUNC_3 (struct kobject*) ;

__attribute__((used)) static void FUNC_4(struct kobject *VAR_0)
{
 struct edac_device_ctl_info *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(4, "control index=%d\n", VAR_1->dev_idx);


 FUNC_2(VAR_1->owner);




 FUNC_1(VAR_1);
}
