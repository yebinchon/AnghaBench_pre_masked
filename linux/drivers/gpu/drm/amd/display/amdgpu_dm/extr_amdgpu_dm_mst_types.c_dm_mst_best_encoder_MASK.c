
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
struct amdgpu_dm_connector {TYPE_1__* mst_encoder; } ;
struct TYPE_2__ {struct drm_encoder base; } ;


 struct amdgpu_dm_connector* FUNC_0 (struct drm_connector*) ;

__attribute__((used)) static struct drm_encoder *FUNC_1(struct drm_connector *VAR_0)
{
 struct amdgpu_dm_connector *VAR_1 = FUNC_0(VAR_0);

 return &VAR_1->mst_encoder->base;
}
