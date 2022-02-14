
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int enabled; int num_pins; TYPE_3__* pin; } ;
struct TYPE_5__ {TYPE_1__ audio; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_2__ mode_info; } ;
struct TYPE_6__ {int channels; int rate; int bits_per_sample; int connected; int id; int offset; scalar_t__ category_code; scalar_t__ status_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct amdgpu_device*,TYPE_3__*,int) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_7)
{
 int VAR_8;

 if (!VAR_5)
  return 0;

 VAR_7->mode_info.audio.enabled = 1;

 if (VAR_7->asic_type == VAR_3)
  VAR_7->mode_info.audio.num_pins = 7;
 else if ((VAR_7->asic_type == VAR_2) ||
   (VAR_7->asic_type == VAR_4))
  VAR_7->mode_info.audio.num_pins = 3;
 else if ((VAR_7->asic_type == VAR_0) ||
   (VAR_7->asic_type == VAR_1))
  VAR_7->mode_info.audio.num_pins = 7;
 else
  VAR_7->mode_info.audio.num_pins = 3;

 for (VAR_8 = 0; VAR_8 < VAR_7->mode_info.audio.num_pins; VAR_8++) {
  VAR_7->mode_info.audio.pin[VAR_8].channels = -1;
  VAR_7->mode_info.audio.pin[VAR_8].rate = -1;
  VAR_7->mode_info.audio.pin[VAR_8].bits_per_sample = -1;
  VAR_7->mode_info.audio.pin[VAR_8].status_bits = 0;
  VAR_7->mode_info.audio.pin[VAR_8].category_code = 0;
  VAR_7->mode_info.audio.pin[VAR_8].connected = 0;
  VAR_7->mode_info.audio.pin[VAR_8].offset = VAR_6[VAR_8];
  VAR_7->mode_info.audio.pin[VAR_8].id = VAR_8;


  FUNC_0(VAR_7, &VAR_7->mode_info.audio.pin[VAR_8], 0);
 }

 return 0;
}
