
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {int id; int devices_kobj; int mutex; int notifier; scalar_t__ domain; int devices; int kobj; } ;
struct group_device {struct group_device* name; int list; struct device* dev; } ;
struct device {int kobj; struct iommu_group* iommu_group; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,struct device*) ;
 int FUNC_1 (int *,int ,struct device*) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct iommu_group*,struct device*) ;
 void* FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (struct group_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 struct group_device* FUNC_10 (int,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *,char*) ;
 int FUNC_16 (int ,int *,struct group_device*) ;
 int FUNC_17 (int *,char*) ;
 int FUNC_18 (int ,struct device*) ;

int FUNC_19(struct iommu_group *VAR_4, struct device *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct group_device *VAR_8;

 VAR_8 = FUNC_10(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->dev = VAR_5;

 VAR_6 = FUNC_15(&VAR_5->kobj, &VAR_4->kobj, "iommu_group");
 if (VAR_6)
  goto err_free_device;

 VAR_8->name = FUNC_5(VAR_2, "%s", FUNC_8(&VAR_5->kobj));
rename:
 if (!VAR_8->name) {
  VAR_6 = -VAR_1;
  goto err_remove_link;
 }

 VAR_6 = FUNC_16(VAR_4->devices_kobj,
           &VAR_5->kobj, VAR_8->name);
 if (VAR_6) {
  if (VAR_6 == -VAR_0 && VAR_7 >= 0) {




   FUNC_6(VAR_8->name);
   VAR_8->name = FUNC_5(VAR_2, "%s.%d",
       FUNC_8(&VAR_5->kobj), VAR_7++);
   goto rename;
  }
  goto err_free_name;
 }

 FUNC_7(VAR_4->devices_kobj);

 VAR_5->iommu_group = VAR_4;

 FUNC_4(VAR_4, VAR_5);

 FUNC_13(&VAR_4->mutex);
 FUNC_11(&VAR_8->list, &VAR_4->devices);
 if (VAR_4->domain)
  VAR_6 = FUNC_0(VAR_4->domain, VAR_5);
 FUNC_14(&VAR_4->mutex);
 if (VAR_6)
  goto err_put_group;


 FUNC_1(&VAR_4->notifier,
         VAR_3, VAR_5);

 FUNC_18(VAR_4->id, VAR_5);

 FUNC_3(VAR_5, "Adding to iommu group %d\n", VAR_4->id);

 return 0;

err_put_group:
 FUNC_13(&VAR_4->mutex);
 FUNC_12(&VAR_8->list);
 FUNC_14(&VAR_4->mutex);
 VAR_5->iommu_group = ((void*)0);
 FUNC_9(VAR_4->devices_kobj);
err_free_name:
 FUNC_6(VAR_8->name);
err_remove_link:
 FUNC_17(&VAR_5->kobj, "iommu_group");
err_free_device:
 FUNC_6(VAR_8);
 FUNC_2(VAR_5, "Failed to add to iommu group %d: %d\n", VAR_4->id, VAR_6);
 return VAR_6;
}
