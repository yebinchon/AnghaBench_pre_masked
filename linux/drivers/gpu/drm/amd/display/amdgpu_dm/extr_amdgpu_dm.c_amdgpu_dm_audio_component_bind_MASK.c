
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_audio_component {struct device* dev; int * ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct drm_audio_component* audio_component; } ;
struct amdgpu_device {TYPE_1__ dm; } ;


 int VAR_0 ;
 struct drm_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
           struct device *VAR_2, void *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_0(VAR_1);
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;
 struct drm_audio_component *VAR_6 = VAR_3;

 VAR_6->ops = &VAR_0;
 VAR_6->dev = VAR_1;
 VAR_5->dm.audio_component = VAR_6;

 return 0;
}
