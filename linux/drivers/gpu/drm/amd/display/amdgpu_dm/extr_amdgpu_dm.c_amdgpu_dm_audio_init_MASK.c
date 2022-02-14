
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int audio_registered; TYPE_3__* dc; } ;
struct TYPE_12__ {int enabled; int num_pins; TYPE_4__* pin; } ;
struct TYPE_13__ {TYPE_5__ audio; } ;
struct amdgpu_device {TYPE_7__ dm; int dev; TYPE_6__ mode_info; } ;
struct TYPE_11__ {int channels; int rate; int bits_per_sample; int connected; scalar_t__ offset; int id; scalar_t__ category_code; scalar_t__ status_bits; } ;
struct TYPE_10__ {TYPE_2__* res_pool; } ;
struct TYPE_9__ {int audio_count; TYPE_1__** audios; } ;
struct TYPE_8__ {int inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_0)
  return 0;

 VAR_2->mode_info.audio.enabled = 1;

 VAR_2->mode_info.audio.num_pins = VAR_2->dm.dc->res_pool->audio_count;

 for (VAR_3 = 0; VAR_3 < VAR_2->mode_info.audio.num_pins; VAR_3++) {
  VAR_2->mode_info.audio.pin[VAR_3].channels = -1;
  VAR_2->mode_info.audio.pin[VAR_3].rate = -1;
  VAR_2->mode_info.audio.pin[VAR_3].bits_per_sample = -1;
  VAR_2->mode_info.audio.pin[VAR_3].status_bits = 0;
  VAR_2->mode_info.audio.pin[VAR_3].category_code = 0;
  VAR_2->mode_info.audio.pin[VAR_3].connected = 0;
  VAR_2->mode_info.audio.pin[VAR_3].id =
   VAR_2->dm.dc->res_pool->audios[VAR_3]->inst;
  VAR_2->mode_info.audio.pin[VAR_3].offset = 0;
 }

 VAR_4 = FUNC_0(VAR_2->dev, &VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->dm.audio_registered = 1;

 return 0;
}
