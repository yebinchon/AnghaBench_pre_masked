
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vega10_hwmgr {TYPE_1__* smu_features; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct TYPE_2__ {int enabled; int smu_feature_bitmap; scalar_t__ supported; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct vega10_hwmgr *VAR_2 = VAR_1->backend;

 if (VAR_2->smu_features[VAR_0].supported &&
     VAR_2->smu_features[VAR_0].enabled)
  if (!FUNC_0(VAR_1, 0,
   VAR_2->smu_features[VAR_0].smu_feature_bitmap))
   VAR_2->smu_features[VAR_0].enabled = 0;

 return 0;
}
