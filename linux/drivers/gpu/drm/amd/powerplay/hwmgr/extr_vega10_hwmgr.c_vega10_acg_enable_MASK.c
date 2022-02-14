
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vega10_hwmgr {int acg_loop_state; TYPE_1__* smu_features; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct TYPE_2__ {int enabled; int smu_feature_bitmap; scalar_t__ supported; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;
 scalar_t__ FUNC_3 (struct pp_hwmgr*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_6)
{
 struct vega10_hwmgr *VAR_7 = VAR_6->backend;
 uint32_t VAR_8;

 if (VAR_7->smu_features[VAR_0].supported) {
  if (0 == FUNC_3(VAR_6, 1,
     VAR_7->smu_features[VAR_1].smu_feature_bitmap))
   VAR_7->smu_features[VAR_1].enabled = 1;

  FUNC_2(VAR_6, VAR_2);

  FUNC_2(VAR_6, VAR_3);
  VAR_8 = FUNC_1(VAR_6);

  if (1 == VAR_8) {
   if (1 == VAR_7->acg_loop_state)
    FUNC_2(VAR_6, VAR_4);
   else if (2 == VAR_7->acg_loop_state)
    FUNC_2(VAR_6, VAR_5);
   if (0 == FUNC_3(VAR_6, 1,
    VAR_7->smu_features[VAR_0].smu_feature_bitmap))
     VAR_7->smu_features[VAR_0].enabled = 1;
  } else {
   FUNC_0("[ACG_Enable] ACG BTC Returned Failed Status!\n");
   VAR_7->smu_features[VAR_0].enabled = 0;
  }
 }

 return 0;
}
