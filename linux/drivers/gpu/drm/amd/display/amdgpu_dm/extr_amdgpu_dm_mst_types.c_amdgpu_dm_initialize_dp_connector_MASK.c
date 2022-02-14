
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {char* name; int transfer; int dev; } ;
struct TYPE_12__ {TYPE_6__ aux; int ddc_service; } ;
struct TYPE_13__ {int * cbs; } ;
struct TYPE_10__ {int name; int kdev; } ;
struct amdgpu_dm_connector {int connector_id; TYPE_4__ dm_dp_aux; TYPE_5__ mst_mgr; TYPE_2__ base; TYPE_1__* dc_link; } ;
struct amdgpu_display_manager {TYPE_3__* adev; } ;
struct TYPE_11__ {int ddev; int dev; } ;
struct TYPE_9__ {int ddc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,int ,int ) ;
 int FUNC_2 (TYPE_5__*,int ,TYPE_6__*,int,int,int ) ;

void FUNC_3(struct amdgpu_display_manager *VAR_2,
           struct amdgpu_dm_connector *VAR_3)
{
 VAR_3->dm_dp_aux.aux.name = "dmdc";
 VAR_3->dm_dp_aux.aux.dev = VAR_3->base.kdev;
 VAR_3->dm_dp_aux.aux.transfer = VAR_0;
 VAR_3->dm_dp_aux.ddc_service = VAR_3->dc_link->ddc;

 FUNC_0(&VAR_3->dm_dp_aux.aux);
 FUNC_1(&VAR_3->dm_dp_aux.aux,
          VAR_3->base.name, VAR_2->adev->dev);
 VAR_3->mst_mgr.cbs = &VAR_1;
 FUNC_2(
  &VAR_3->mst_mgr,
  VAR_2->adev->ddev,
  &VAR_3->dm_dp_aux.aux,
  16,
  4,
  VAR_3->connector_id);
}
