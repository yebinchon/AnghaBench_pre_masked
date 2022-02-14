
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vega20_hwmgr {TYPE_1__* smu_features; } ;
struct pp_hwmgr {struct vega20_hwmgr* backend; } ;
struct TYPE_2__ {scalar_t__ supported; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;

int FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct vega20_hwmgr *VAR_2 = VAR_1->backend;

 if (VAR_2->smu_features[VAR_0].supported)
  return FUNC_0(VAR_1);

 return 0;
}
