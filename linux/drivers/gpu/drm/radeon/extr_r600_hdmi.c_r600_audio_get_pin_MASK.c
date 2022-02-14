
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct r600_audio_pin* pin; } ;
struct radeon_device {TYPE_1__ audio; } ;
struct r600_audio_pin {int dummy; } ;



struct r600_audio_pin *FUNC_0(struct radeon_device *VAR_0)
{

 return &VAR_0->audio.pin[0];
}
