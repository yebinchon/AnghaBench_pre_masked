
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct drm_connector {scalar_t__ force; struct drm_device* dev; } ;
struct TYPE_5__ {scalar_t__ lane_count; } ;
struct dc_link {scalar_t__ type; TYPE_2__ cur_link_settings; } ;
struct TYPE_6__ {int aux; } ;
struct TYPE_4__ {int mst_state; } ;
struct amdgpu_dm_connector {int fake_enable; int hpd_lock; TYPE_3__ dm_dp_aux; struct drm_connector base; TYPE_1__ mst_mgr; struct dc_link* dc_link; } ;
typedef enum dc_connection_type { ____Placeholder_dc_connection_type } dc_connection_type ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct amdgpu_dm_connector*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct dc_link*,int ) ;
 int FUNC_3 (struct dc_link*,int*) ;
 scalar_t__ FUNC_4 (struct dc_link*,int *,int *) ;
 int FUNC_5 (struct amdgpu_dm_connector*) ;
 int FUNC_6 (struct drm_device*,struct drm_connector*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct dc_link*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(void *VAR_4)
{
 struct amdgpu_dm_connector *VAR_5 = (struct amdgpu_dm_connector *)VAR_4;
 struct drm_connector *VAR_6 = &VAR_5->base;
 struct drm_device *VAR_7 = VAR_6->dev;
 struct dc_link *VAR_8 = VAR_5->dc_link;
 bool VAR_9 = VAR_5->mst_mgr.mst_state;
 enum dc_connection_type VAR_10 = VAR_3;






 if (VAR_8->type != VAR_2)
  FUNC_12(&VAR_5->hpd_lock);

 if (FUNC_4(VAR_8, ((void*)0), ((void*)0)) &&
   !VAR_9) {

  if (!FUNC_3(VAR_8, &VAR_10))
   FUNC_0("KMS: Failed to detect connector\n");

  if (VAR_5->base.force && VAR_10 == VAR_3) {
   FUNC_11(VAR_8);

   if (VAR_5->fake_enable)
    VAR_5->fake_enable = 0;

   FUNC_1(VAR_5);


   FUNC_9(VAR_7);
   FUNC_6(VAR_7, VAR_6);
   FUNC_10(VAR_7);

   FUNC_8(VAR_7);
  } else if (FUNC_2(VAR_8, VAR_0)) {

   if (VAR_5->fake_enable)
    VAR_5->fake_enable = 0;

   FUNC_1(VAR_5);


   FUNC_9(VAR_7);
   FUNC_6(VAR_7, VAR_6);
   FUNC_10(VAR_7);

   FUNC_8(VAR_7);
  }
 }
 if ((VAR_8->cur_link_settings.lane_count != VAR_1) ||
     (VAR_8->type == VAR_2))
  FUNC_5(VAR_5);

 if (VAR_8->type != VAR_2) {
  FUNC_7(&VAR_5->dm_dp_aux.aux);
  FUNC_13(&VAR_5->hpd_lock);
 }
}
