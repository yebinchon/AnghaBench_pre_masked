
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_pins; struct amdgpu_audio_pin* pin; } ;
struct TYPE_4__ {TYPE_1__ audio; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct amdgpu_audio_pin {scalar_t__ connected; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static struct amdgpu_audio_pin *FUNC_2(struct amdgpu_device *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < VAR_0->mode_info.audio.num_pins; VAR_1++) {
  if (VAR_0->mode_info.audio.pin[VAR_1].connected)
   return &VAR_0->mode_info.audio.pin[VAR_1];
 }
 FUNC_0("No connected audio pins found!\n");
 return ((void*)0);
}
