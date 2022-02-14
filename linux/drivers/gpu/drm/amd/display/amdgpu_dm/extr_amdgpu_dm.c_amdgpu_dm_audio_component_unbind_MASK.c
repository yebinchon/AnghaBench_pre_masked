
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_audio_component {int * dev; int * ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * audio_component; } ;
struct amdgpu_device {TYPE_1__ dm; } ;


 struct drm_device* FUNC_0 (struct device*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
       struct device *VAR_1, void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_0(VAR_0);
 struct amdgpu_device *VAR_4 = VAR_3->dev_private;
 struct drm_audio_component *VAR_5 = VAR_2;

 VAR_5->ops = ((void*)0);
 VAR_5->dev = ((void*)0);
 VAR_4->dm.audio_component = ((void*)0);
}
