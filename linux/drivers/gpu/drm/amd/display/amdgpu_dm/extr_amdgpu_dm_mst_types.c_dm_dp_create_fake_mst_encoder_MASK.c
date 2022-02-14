
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int possible_crtcs; } ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_encoder {struct drm_encoder base; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct amdgpu_dm_connector {TYPE_1__ base; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct drm_encoder*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 struct amdgpu_encoder* FUNC_3 (int,int ) ;

__attribute__((used)) static struct amdgpu_encoder *
FUNC_4(struct amdgpu_dm_connector *VAR_4)
{
 struct drm_device *VAR_5 = VAR_4->base.dev;
 struct amdgpu_device *VAR_6 = VAR_5->dev_private;
 struct amdgpu_encoder *VAR_7;
 struct drm_encoder *VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_8 = &VAR_7->base;
 VAR_8->possible_crtcs = FUNC_0(VAR_6);

 FUNC_2(
  VAR_5,
  &VAR_7->base,
  &VAR_2,
  VAR_0,
  ((void*)0));

 FUNC_1(VAR_8, &VAR_3);

 return VAR_7;
}
