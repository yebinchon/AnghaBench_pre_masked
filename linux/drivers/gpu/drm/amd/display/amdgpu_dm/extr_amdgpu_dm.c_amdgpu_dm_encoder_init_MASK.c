
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct TYPE_3__ {int possible_crtcs; } ;
struct amdgpu_encoder {int encoder_id; TYPE_1__ base; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct drm_device*,TYPE_1__*,int *,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_3,
      struct amdgpu_encoder *VAR_4,
      uint32_t VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_3->dev_private;

 int VAR_7 = FUNC_2(VAR_3,
       &VAR_4->base,
       &VAR_1,
       VAR_0,
       ((void*)0));

 VAR_4->base.possible_crtcs = FUNC_0(VAR_6);

 if (!VAR_7)
  VAR_4->encoder_id = VAR_5;
 else
  VAR_4->encoder_id = -1;

 FUNC_1(&VAR_4->base, &VAR_2);

 return VAR_7;
}
