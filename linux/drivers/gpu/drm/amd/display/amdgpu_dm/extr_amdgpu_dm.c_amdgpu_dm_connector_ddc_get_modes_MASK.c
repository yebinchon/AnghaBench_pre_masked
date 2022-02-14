
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edid {int dummy; } ;
struct drm_connector {int probed_modes; } ;
struct amdgpu_dm_connector {scalar_t__ num_modes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_connector*) ;
 scalar_t__ FUNC_2 (struct drm_connector*,struct edid*) ;
 int FUNC_3 (int *) ;
 struct amdgpu_dm_connector* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_0,
           struct edid *VAR_1)
{
 struct amdgpu_dm_connector *VAR_2 =
   FUNC_4(VAR_0);

 if (VAR_1) {

  FUNC_0(&VAR_0->probed_modes);
  VAR_2->num_modes =
    FUNC_2(VAR_0, VAR_1);
  FUNC_3(&VAR_0->probed_modes);
  FUNC_1(VAR_0);
 } else {
  VAR_2->num_modes = 0;
 }
}
