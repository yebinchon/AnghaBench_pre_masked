
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_connector {scalar_t__ force; struct drm_device* dev; } ;
struct amdgpu_dm_connector {int fake_enable; int hpd_lock; struct drm_connector base; int dc_link; } ;
typedef enum dc_connection_type { ____Placeholder_dc_connection_type } dc_connection_type ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct amdgpu_dm_connector*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (struct drm_device*,struct drm_connector*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void *VAR_3)
{
 struct amdgpu_dm_connector *VAR_4 = (struct amdgpu_dm_connector *)VAR_3;
 struct drm_connector *VAR_5 = &VAR_4->base;
 struct drm_device *VAR_6 = VAR_5->dev;
 enum dc_connection_type VAR_7 = VAR_2;





 FUNC_9(&VAR_4->hpd_lock);

 if (VAR_4->fake_enable)
  VAR_4->fake_enable = 0;

 if (!FUNC_3(VAR_4->dc_link, &VAR_7))
  FUNC_0("KMS: Failed to detect connector\n");

 if (VAR_4->base.force && VAR_7 == VAR_2) {
  FUNC_8(VAR_4->dc_link);


  FUNC_6(VAR_6);
  FUNC_4(VAR_6, VAR_5);
  FUNC_7(VAR_6);

  if (VAR_4->base.force == VAR_1)
   FUNC_5(VAR_6);

 } else if (FUNC_2(VAR_4->dc_link, VAR_0)) {
  FUNC_1(VAR_4);


  FUNC_6(VAR_6);
  FUNC_4(VAR_6, VAR_5);
  FUNC_7(VAR_6);

  if (VAR_4->base.force == VAR_1)
   FUNC_5(VAR_6);
 }
 FUNC_10(&VAR_4->hpd_lock);

}
