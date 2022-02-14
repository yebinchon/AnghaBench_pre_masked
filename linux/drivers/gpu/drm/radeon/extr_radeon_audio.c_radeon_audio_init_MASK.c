
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enabled; int num_pins; TYPE_2__* pin; } ;
struct radeon_device {TYPE_1__ audio; } ;
struct TYPE_4__ {int channels; int rate; int bits_per_sample; int connected; int id; int offset; scalar_t__ category_code; scalar_t__ status_bits; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 scalar_t__ FUNC_3 (struct radeon_device*) ;
 scalar_t__ FUNC_4 (struct radeon_device*) ;
 scalar_t__ FUNC_5 (struct radeon_device*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*,TYPE_2__*,int ) ;
 int FUNC_8 (struct radeon_device*) ;

int FUNC_9(struct radeon_device *VAR_2)
{
 int VAR_3;

 if (!VAR_1 || !FUNC_6(VAR_2))
  return 0;

 VAR_2->audio.enabled = 1;

 if (FUNC_5(VAR_2))
  VAR_2->audio.num_pins = 3;
 else if (FUNC_4(VAR_2))
  VAR_2->audio.num_pins = 7;
 else if (FUNC_3(VAR_2))
  VAR_2->audio.num_pins = 7;
 else if (FUNC_2(VAR_2))
  VAR_2->audio.num_pins = 2;
 else if (FUNC_1(VAR_2))
  VAR_2->audio.num_pins = 6;
 else if (FUNC_0(VAR_2))
  VAR_2->audio.num_pins = 6;
 else
  VAR_2->audio.num_pins = 1;

 for (VAR_3 = 0; VAR_3 < VAR_2->audio.num_pins; VAR_3++) {
  VAR_2->audio.pin[VAR_3].channels = -1;
  VAR_2->audio.pin[VAR_3].rate = -1;
  VAR_2->audio.pin[VAR_3].bits_per_sample = -1;
  VAR_2->audio.pin[VAR_3].status_bits = 0;
  VAR_2->audio.pin[VAR_3].category_code = 0;
  VAR_2->audio.pin[VAR_3].connected = 0;
  VAR_2->audio.pin[VAR_3].offset = VAR_0[VAR_3];
  VAR_2->audio.pin[VAR_3].id = VAR_3;
 }

 FUNC_8(VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_2->audio.num_pins; VAR_3++)
  FUNC_7(VAR_2, &VAR_2->audio.pin[VAR_3], 0);

 return 0;
}
