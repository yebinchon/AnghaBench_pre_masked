
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int enabled; } ;
struct TYPE_6__ {TYPE_2__ audio; } ;
struct TYPE_4__ {int audio_registered; } ;
struct amdgpu_device {TYPE_3__ mode_info; TYPE_1__ dm; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_2)
{
 if (!VAR_0)
  return;

 if (!VAR_2->mode_info.audio.enabled)
  return;

 if (VAR_2->dm.audio_registered) {
  FUNC_0(VAR_2->dev, &VAR_1);
  VAR_2->dm.audio_registered = 0;
 }



 VAR_2->mode_info.audio.enabled = 0;
}
