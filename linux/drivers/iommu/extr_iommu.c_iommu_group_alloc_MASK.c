
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kset; } ;
struct iommu_group {int id; TYPE_1__ kobj; int devices_kobj; int notifier; int devices; int mutex; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct iommu_group* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct iommu_group*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct iommu_group*) ;
 int FUNC_7 (char*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,int *,char*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 struct iommu_group* FUNC_10 (int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int) ;

struct iommu_group *FUNC_13(void)
{
 struct iommu_group *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_10(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_1(-VAR_0);

 VAR_7->kobj.kset = VAR_5;
 FUNC_11(&VAR_7->mutex);
 FUNC_2(&VAR_7->devices);
 FUNC_0(&VAR_7->notifier);

 VAR_8 = FUNC_3(&VAR_4, 0, 0, VAR_1);
 if (VAR_8 < 0) {
  FUNC_6(VAR_7);
  return FUNC_1(VAR_8);
 }
 VAR_7->id = VAR_8;

 VAR_8 = FUNC_8(&VAR_7->kobj, &VAR_6,
       ((void*)0), "%d", VAR_7->id);
 if (VAR_8) {
  FUNC_4(&VAR_4, VAR_7->id);
  FUNC_6(VAR_7);
  return FUNC_1(VAR_8);
 }

 VAR_7->devices_kobj = FUNC_7("devices", &VAR_7->kobj);
 if (!VAR_7->devices_kobj) {
  FUNC_9(&VAR_7->kobj);
  return FUNC_1(-VAR_0);
 }






 FUNC_9(&VAR_7->kobj);

 VAR_8 = FUNC_5(VAR_7,
          &VAR_2);
 if (VAR_8)
  return FUNC_1(VAR_8);

 VAR_8 = FUNC_5(VAR_7, &VAR_3);
 if (VAR_8)
  return FUNC_1(VAR_8);

 FUNC_12("Allocated group %d\n", VAR_7->id);

 return VAR_7;
}
