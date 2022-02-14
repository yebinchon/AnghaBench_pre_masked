
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobj_uevent_env {int dummy; } ;
struct hd_struct {TYPE_1__* info; scalar_t__* partno; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__* volname; } ;


 int FUNC_0 (struct kobj_uevent_env*,char*,scalar_t__*) ;
 struct hd_struct* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct hd_struct *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, "PARTN=%u", VAR_2->partno);
 if (VAR_2->info && VAR_2->info->volname[0])
  FUNC_0(VAR_1, "PARTNAME=%s", VAR_2->info->volname);
 return 0;
}
