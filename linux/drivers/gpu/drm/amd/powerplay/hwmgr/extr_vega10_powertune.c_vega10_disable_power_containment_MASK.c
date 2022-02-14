
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vega10_hwmgr {TYPE_1__* smu_features; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct TYPE_2__ {int supported; int smu_feature_bitmap; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pp_hwmgr*,int,int ) ;

int FUNC_3(struct pp_hwmgr *VAR_3)
{
 struct vega10_hwmgr *VAR_4 = VAR_3->backend;

 if (FUNC_1(VAR_2)) {
  if (VAR_4->smu_features[VAR_0].supported)
   FUNC_0(!FUNC_2(VAR_3,
     0, VAR_4->smu_features[VAR_0].smu_feature_bitmap),
     "Attempt to disable PPT feature Failed!",
     VAR_4->smu_features[VAR_0].supported = 0);

  if (VAR_4->smu_features[VAR_1].supported)
   FUNC_0(!FUNC_2(VAR_3,
     0, VAR_4->smu_features[VAR_1].smu_feature_bitmap),
     "Attempt to disable PPT feature Failed!",
     VAR_4->smu_features[VAR_1].supported = 0);
 }

 return 0;
}
