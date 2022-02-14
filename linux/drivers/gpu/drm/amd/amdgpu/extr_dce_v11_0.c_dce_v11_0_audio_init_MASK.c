
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
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,TYPE_3__*,int) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_3)
{
 int VAR_4;

 if (!VAR_1)
  return 0;

 VAR_3->mode_info.audio.enabled = 1;

 switch (VAR_3->asic_type) {
 case 133:
 case 129:
  VAR_3->mode_info.audio.num_pins = 7;
  break;
 case 132:
 case 128:
  VAR_3->mode_info.audio.num_pins = 8;
  break;
 case 131:
 case 130:
  VAR_3->mode_info.audio.num_pins = 6;
  break;
 default:
  return -VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_3->mode_info.audio.num_pins; VAR_4++) {
  VAR_3->mode_info.audio.pin[VAR_4].channels = -1;
  VAR_3->mode_info.audio.pin[VAR_4].rate = -1;
  VAR_3->mode_info.audio.pin[VAR_4].bits_per_sample = -1;
  VAR_3->mode_info.audio.pin[VAR_4].status_bits = 0;
  VAR_3->mode_info.audio.pin[VAR_4].category_code = 0;
  VAR_3->mode_info.audio.pin[VAR_4].connected = 0;
  VAR_3->mode_info.audio.pin[VAR_4].offset = VAR_2[VAR_4];
  VAR_3->mode_info.audio.pin[VAR_4].id = VAR_4;


  FUNC_0(VAR_3, &VAR_3->mode_info.audio.pin[VAR_4], 0);
 }

 return 0;
}
