
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int enabled; int num_pins; TYPE_3__* pin; } ;
struct TYPE_5__ {TYPE_1__ audio; } ;
struct amdgpu_device {int asic_type; TYPE_2__ mode_info; } ;
struct TYPE_6__ {int channels; int rate; int bits_per_sample; int connected; int id; int offset; scalar_t__ category_code; scalar_t__ status_bits; } ;






 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,TYPE_3__*,int) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_2)
{
 int VAR_3;

 if (!VAR_0)
  return 0;

 VAR_2->mode_info.audio.enabled = 1;

 switch (VAR_2->asic_type) {
 case 129:
 case 130:
 case 128:
 default:
  VAR_2->mode_info.audio.num_pins = 6;
  break;
 case 131:
  VAR_2->mode_info.audio.num_pins = 2;
  break;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->mode_info.audio.num_pins; VAR_3++) {
  VAR_2->mode_info.audio.pin[VAR_3].channels = -1;
  VAR_2->mode_info.audio.pin[VAR_3].rate = -1;
  VAR_2->mode_info.audio.pin[VAR_3].bits_per_sample = -1;
  VAR_2->mode_info.audio.pin[VAR_3].status_bits = 0;
  VAR_2->mode_info.audio.pin[VAR_3].category_code = 0;
  VAR_2->mode_info.audio.pin[VAR_3].connected = 0;
  VAR_2->mode_info.audio.pin[VAR_3].offset = VAR_1[VAR_3];
  VAR_2->mode_info.audio.pin[VAR_3].id = VAR_3;
  FUNC_0(VAR_2, &VAR_2->mode_info.audio.pin[VAR_3], 0);
 }

 return 0;
}
