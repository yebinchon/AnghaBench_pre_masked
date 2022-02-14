
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_dm_connector {int num_modes; struct edid* edid; } ;


 int FUNC_0 (struct drm_encoder*,struct drm_connector*) ;
 int FUNC_1 (struct drm_connector*,struct edid*) ;
 struct drm_encoder* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (struct drm_connector*,int,int) ;
 int FUNC_5 (struct edid*) ;
 struct amdgpu_dm_connector* FUNC_6 (struct drm_connector*) ;

__attribute__((used)) static int FUNC_7(struct drm_connector *VAR_0)
{
 struct amdgpu_dm_connector *VAR_1 =
   FUNC_6(VAR_0);
 struct drm_encoder *VAR_2;
 struct edid *VAR_3 = VAR_1->edid;

 VAR_2 = FUNC_2(VAR_0);

 if (!VAR_3 || !FUNC_5(VAR_3)) {
  VAR_1->num_modes =
    FUNC_4(VAR_0, 640, 480);
 } else {
  FUNC_1(VAR_0, VAR_3);
  FUNC_0(VAR_2, VAR_0);
 }
 FUNC_3(VAR_0);

 return VAR_1->num_modes;
}
