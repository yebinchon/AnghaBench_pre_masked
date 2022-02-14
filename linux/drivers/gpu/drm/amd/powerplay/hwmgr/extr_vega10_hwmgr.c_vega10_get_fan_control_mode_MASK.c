
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vega10_hwmgr {TYPE_1__* smu_features; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct TYPE_2__ {int enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static uint32_t FUNC_0(struct pp_hwmgr *VAR_3)
{
 struct vega10_hwmgr *VAR_4 = VAR_3->backend;

 if (VAR_4->smu_features[VAR_2].enabled == 0)
  return VAR_1;
 else
  return VAR_0;
}
