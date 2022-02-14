
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_connector {int dummy; } ;
struct amdgpu_encoder {int port; int base; struct amdgpu_encoder* edid; struct amdgpu_encoder* mst_encoder; } ;
struct amdgpu_dm_connector {int port; int base; struct amdgpu_dm_connector* edid; struct amdgpu_dm_connector* mst_encoder; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_encoder*) ;
 struct amdgpu_encoder* FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static void
FUNC_5(struct drm_connector *VAR_0)
{
 struct amdgpu_dm_connector *VAR_1 = FUNC_4(VAR_0);
 struct amdgpu_encoder *VAR_2 = VAR_1->mst_encoder;

 if (VAR_1->edid) {
  FUNC_3(VAR_1->edid);
  VAR_1->edid = ((void*)0);
 }

 FUNC_2(&VAR_2->base);
 FUNC_3(VAR_2);
 FUNC_0(VAR_0);
 FUNC_1(VAR_1->port);
 FUNC_3(VAR_1);
}
