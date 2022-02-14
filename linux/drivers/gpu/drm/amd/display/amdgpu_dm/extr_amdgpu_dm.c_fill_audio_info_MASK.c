
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cea_rev; } ;
struct drm_connector {int * audio_latency; int * video_latency; scalar_t__* latency_present; TYPE_1__ display_info; } ;
struct dc_edid_caps {int audio_mode_count; int speaker_flags; TYPE_4__* audio_modes; int display_name; int product_id; int manufacturer_id; } ;
struct dc_sink {struct dc_edid_caps edid_caps; } ;
struct TYPE_10__ {int all; } ;
struct audio_info {int mode_count; int audio_latency; int video_latency; TYPE_5__ flags; TYPE_3__* modes; int display_name; int product_id; int manufacture_id; } ;
typedef enum audio_format_code { ____Placeholder_audio_format_code } audio_format_code ;
struct TYPE_9__ {int sample_size; int sample_rate; int channel_count; scalar_t__ format_code; } ;
struct TYPE_7__ {int all; } ;
struct TYPE_8__ {int format_code; int sample_size; TYPE_2__ sample_rates; int channel_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct audio_info *VAR_1,
       const struct drm_connector *VAR_2,
       const struct dc_sink *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;
 const struct dc_edid_caps *VAR_6 = &VAR_3->edid_caps;

 VAR_1->manufacture_id = VAR_6->manufacturer_id;
 VAR_1->product_id = VAR_6->product_id;

 VAR_5 = VAR_2->display_info.cea_rev;

 FUNC_0(VAR_1->display_name,
  VAR_6->display_name,
  VAR_0);

 if (VAR_5 >= 3) {
  VAR_1->mode_count = VAR_6->audio_mode_count;

  for (VAR_4 = 0; VAR_4 < VAR_1->mode_count; ++VAR_4) {
   VAR_1->modes[VAR_4].format_code =
     (enum audio_format_code)
     (VAR_6->audio_modes[VAR_4].format_code);
   VAR_1->modes[VAR_4].channel_count =
     VAR_6->audio_modes[VAR_4].channel_count;
   VAR_1->modes[VAR_4].sample_rates.all =
     VAR_6->audio_modes[VAR_4].sample_rate;
   VAR_1->modes[VAR_4].sample_size =
     VAR_6->audio_modes[VAR_4].sample_size;
  }
 }

 VAR_1->flags.all = VAR_6->speaker_flags;


 if (VAR_2->latency_present[0]) {
  VAR_1->video_latency = VAR_2->video_latency[0];
  VAR_1->audio_latency = VAR_2->audio_latency[0];
 }



}
