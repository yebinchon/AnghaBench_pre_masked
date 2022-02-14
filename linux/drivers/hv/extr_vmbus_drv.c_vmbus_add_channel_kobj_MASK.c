
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int child_relid; } ;
struct kobject {int kset; } ;
struct vmbus_channel {TYPE_1__ offermsg; struct kobject kobj; } ;
struct device {int dummy; } ;
struct hv_device {int channels_kset; struct device device; } ;


 int VAR_0 ;
 int FUNC_0 (struct device const*,char*) ;
 int FUNC_1 (struct kobject*,int *,int *,char*,int ) ;
 int FUNC_2 (struct kobject*,int ) ;
 int FUNC_3 (struct kobject*,int *) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct hv_device *VAR_3, struct vmbus_channel *VAR_4)
{
 const struct device *VAR_5 = &VAR_3->device;
 struct kobject *VAR_6 = &VAR_4->kobj;
 u32 VAR_7 = VAR_4->offermsg.child_relid;
 int VAR_8;

 VAR_6->kset = VAR_3->channels_kset;
 VAR_8 = FUNC_1(VAR_6, &VAR_2, ((void*)0),
       "%u", VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_6, &VAR_1);

 if (VAR_8) {




  FUNC_0(VAR_5, "Unable to set up channel sysfs files\n");
  return VAR_8;
 }

 FUNC_2(VAR_6, VAR_0);

 return 0;
}
