
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef size_t uint32_t ;
struct TYPE_12__ {int bits_per_pixel; int block_pred_enable; int linebuf_depth; int version_minor; scalar_t__ ycbcr422_simple; scalar_t__ num_slices_v; scalar_t__ num_slices_h; } ;
struct TYPE_19__ {int LTE_340MCSC_SCRAMBLE; } ;
struct TYPE_21__ {TYPE_10__ dsc_cfg; TYPE_6__ flags; } ;
struct TYPE_17__ {int all; } ;
struct TYPE_18__ {size_t mode_count; int* port_id; TYPE_4__ flags; int product_id; int manufacture_id; int display_name; int video_latency; int audio_latency; TYPE_2__* modes; } ;
struct dc_stream_state {TYPE_9__* ctx; int stream_id; TYPE_11__* out_transfer_func; TYPE_8__ timing; TYPE_5__ audio_info; int qy_bit; int qs_bit; int converter_disable_audio; int sink_patches; int link; struct dc_sink* sink; } ;
struct TYPE_20__ {size_t audio_mode_count; int lte_340mcsc_scramble; int speaker_flags; int product_id; int manufacturer_id; int display_name; int video_latency; int audio_latency; TYPE_3__* audio_modes; int qy_bit; int qs_bit; int panel_patch; } ;
struct dc_sink {TYPE_7__ edid_caps; struct dc_container_id* dc_container_id; int converter_disable_audio; int link; TYPE_9__* ctx; } ;
struct dc_container_id {int* portId; } ;
struct TYPE_22__ {int dc_stream_id_count; } ;
struct TYPE_16__ {int sample_size; int sample_rate; int format_code; int channel_count; } ;
struct TYPE_14__ {int all; } ;
struct TYPE_15__ {int sample_size; TYPE_1__ sample_rates; int format_code; int channel_count; } ;
struct TYPE_13__ {TYPE_9__* ctx; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_11__* FUNC_0 () ;
 int FUNC_1 (struct dc_sink*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_10__*,int ,int) ;
 int FUNC_4 (struct dc_stream_state*,struct dc_sink*) ;

__attribute__((used)) static void FUNC_5(struct dc_stream_state *VAR_2,
 struct dc_sink *VAR_3)
{
 uint32_t VAR_4 = 0;

 VAR_2->sink = VAR_3;
 FUNC_1(VAR_3);

 VAR_2->ctx = VAR_3->ctx;
 VAR_2->link = VAR_3->link;
 VAR_2->sink_patches = VAR_3->edid_caps.panel_patch;
 VAR_2->converter_disable_audio = VAR_3->converter_disable_audio;
 VAR_2->qs_bit = VAR_3->edid_caps.qs_bit;
 VAR_2->qy_bit = VAR_3->edid_caps.qy_bit;



 for (VAR_4 = 0; VAR_4 < (VAR_3->edid_caps.audio_mode_count); VAR_4++)
 {
  VAR_2->audio_info.modes[VAR_4].channel_count = VAR_3->edid_caps.audio_modes[VAR_4].channel_count;
  VAR_2->audio_info.modes[VAR_4].format_code = VAR_3->edid_caps.audio_modes[VAR_4].format_code;
  VAR_2->audio_info.modes[VAR_4].sample_rates.all = VAR_3->edid_caps.audio_modes[VAR_4].sample_rate;
  VAR_2->audio_info.modes[VAR_4].sample_size = VAR_3->edid_caps.audio_modes[VAR_4].sample_size;
 }
 VAR_2->audio_info.mode_count = VAR_3->edid_caps.audio_mode_count;
 VAR_2->audio_info.audio_latency = VAR_3->edid_caps.audio_latency;
 VAR_2->audio_info.video_latency = VAR_3->edid_caps.video_latency;
 FUNC_2(
  VAR_2->audio_info.display_name,
  VAR_3->edid_caps.display_name,
  VAR_0);
 VAR_2->audio_info.manufacture_id = VAR_3->edid_caps.manufacturer_id;
 VAR_2->audio_info.product_id = VAR_3->edid_caps.product_id;
 VAR_2->audio_info.flags.all = VAR_3->edid_caps.speaker_flags;

 if (VAR_3->dc_container_id != ((void*)0)) {
  struct dc_container_id *VAR_5 = VAR_3->dc_container_id;

  VAR_2->audio_info.port_id[0] = VAR_5->portId[0];
  VAR_2->audio_info.port_id[1] = VAR_5->portId[1];
 } else {


  VAR_2->audio_info.port_id[0] = 0x5558859e;
  VAR_2->audio_info.port_id[1] = 0xd989449;
 }


 VAR_2->timing.flags.LTE_340MCSC_SCRAMBLE = VAR_3->edid_caps.lte_340mcsc_scramble;
 FUNC_4(VAR_2, VAR_3);

 VAR_2->out_transfer_func = FUNC_0();
 VAR_2->out_transfer_func->type = VAR_1;
 VAR_2->out_transfer_func->ctx = VAR_2->ctx;

 VAR_2->stream_id = VAR_2->ctx->dc_stream_id_count;
 VAR_2->ctx->dc_stream_id_count++;
}
