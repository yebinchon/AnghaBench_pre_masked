
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct cea_sad {int byte2; int freq; scalar_t__ channels; int format; } ;
typedef struct cea_sad uint8_t ;
typedef int uint16_t ;
struct edid {TYPE_5__* detailed_timings; int mfg_year; int mfg_week; int serial; scalar_t__* prod_code; scalar_t__* mfg_id; } ;
struct dc_edid_caps {int manufacturer_id; int product_id; char* display_name; int audio_mode_count; struct cea_sad speaker_flags; TYPE_6__* audio_modes; int edid_hdmi; int manufacture_year; int manufacture_week; int serial_number; } ;
struct dc_edid {scalar_t__ raw_edid; } ;
struct dc_context {int dummy; } ;
typedef enum dc_edid_status { ____Placeholder_dc_edid_status } dc_edid_status ;
struct TYPE_12__ {int sample_size; int sample_rate; scalar_t__ channel_count; int format_code; } ;
struct TYPE_7__ {char* str; } ;
struct TYPE_8__ {TYPE_1__ str; } ;
struct TYPE_9__ {int type; TYPE_2__ data; } ;
struct TYPE_10__ {TYPE_3__ other_data; } ;
struct TYPE_11__ {TYPE_4__ data; } ;


 int VAR_0 ;
 struct cea_sad VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct edid*) ;
 int FUNC_3 (struct edid*) ;
 int FUNC_4 (struct edid*,struct cea_sad**) ;
 int FUNC_5 (struct edid*,struct cea_sad**) ;
 int FUNC_6 (struct cea_sad*) ;

enum dc_edid_status FUNC_7(
  struct dc_context *VAR_5,
  const struct dc_edid *VAR_6,
  struct dc_edid_caps *VAR_7)
{
 struct edid *VAR_8 = (struct edid *) VAR_6->raw_edid;
 struct cea_sad *VAR_9;
 int VAR_10 = -1;
 int VAR_11 = -1;
 int VAR_12 = 0;
 int VAR_13 = 0;
 uint8_t *VAR_14 = ((void*)0);

 enum dc_edid_status VAR_15 = VAR_4;

 if (!VAR_7 || !VAR_6)
  return VAR_3;

 if (!FUNC_3(VAR_8))
  VAR_15 = VAR_2;

 VAR_7->manufacturer_id = (uint16_t) VAR_8->mfg_id[0] |
     ((uint16_t) VAR_8->mfg_id[1])<<8;
 VAR_7->product_id = (uint16_t) VAR_8->prod_code[0] |
     ((uint16_t) VAR_8->prod_code[1])<<8;
 VAR_7->serial_number = VAR_8->serial;
 VAR_7->manufacture_week = VAR_8->mfg_week;
 VAR_7->manufacture_year = VAR_8->mfg_year;



 for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
  if (VAR_8->detailed_timings[VAR_12].data.other_data.type == 0xfc) {
   while (VAR_13 < 13 && VAR_8->detailed_timings[VAR_12].data.other_data.data.str.str[VAR_13]) {
    if (VAR_8->detailed_timings[VAR_12].data.other_data.data.str.str[VAR_13] == '\n')
     break;

    VAR_7->display_name[VAR_13] =
     VAR_8->detailed_timings[VAR_12].data.other_data.data.str.str[VAR_13];
    VAR_13++;
   }
  }
 }

 VAR_7->edid_hdmi = FUNC_2(
   (struct edid *) VAR_6->raw_edid);

 VAR_10 = FUNC_4((struct edid *) VAR_6->raw_edid, &VAR_9);
 if (VAR_10 <= 0) {
  FUNC_1("SADs count is: %d, don't need to read it\n",
    VAR_10);
  return VAR_15;
 }

 VAR_7->audio_mode_count = VAR_10 < VAR_0 ? VAR_10 : VAR_0;
 for (VAR_12 = 0; VAR_12 < VAR_7->audio_mode_count; ++VAR_12) {
  struct cea_sad *VAR_16 = &VAR_9[VAR_12];

  VAR_7->audio_modes[VAR_12].format_code = VAR_16->format;
  VAR_7->audio_modes[VAR_12].channel_count = VAR_16->channels + 1;
  VAR_7->audio_modes[VAR_12].sample_rate = VAR_16->freq;
  VAR_7->audio_modes[VAR_12].sample_size = VAR_16->byte2;
 }

 VAR_11 = FUNC_5((struct edid *) VAR_6->raw_edid, &VAR_14);

 if (VAR_11 < 0) {
  FUNC_0("Couldn't read Speaker Allocation Data Block: %d\n", VAR_11);
  VAR_11 = 0;
 }

 if (VAR_11)
  VAR_7->speaker_flags = VAR_14[0];
 else
  VAR_7->speaker_flags = VAR_1;

 FUNC_6(VAR_9);
 FUNC_6(VAR_14);

 return VAR_15;
}
