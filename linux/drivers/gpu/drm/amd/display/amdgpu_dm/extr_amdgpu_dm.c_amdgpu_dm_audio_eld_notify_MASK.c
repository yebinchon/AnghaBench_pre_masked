
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_audio_component {TYPE_2__* audio_ops; } ;
struct TYPE_3__ {struct drm_audio_component* audio_component; } ;
struct amdgpu_device {TYPE_1__ dm; } ;
struct TYPE_4__ {int audio_ptr; int (* pin_eld_notify ) (int ,int,int) ;} ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(struct amdgpu_device *VAR_0, int VAR_1)
{
 struct drm_audio_component *VAR_2 = VAR_0->dm.audio_component;

 if (VAR_2 && VAR_2->audio_ops && VAR_2->audio_ops->pin_eld_notify) {
  FUNC_0("Notify ELD: %d\n", VAR_1);

  VAR_2->audio_ops->pin_eld_notify(VAR_2->audio_ops->audio_ptr,
       VAR_1, -1);
 }
}
