
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct hdmi_msm_audio_arcs {TYPE_1__* lut; } ;
struct hdmi_audio_infoframe {int channels; int downmix_inhibit; int level_shift_value; int channel_allocation; } ;
struct hdmi_audio {int enabled; size_t rate; struct hdmi_audio_infoframe infoframe; } ;
struct hdmi {char* pixclock; scalar_t__ power_on; struct hdmi_audio audio; } ;
typedef enum hdmi_acr_cts { ____Placeholder_hdmi_acr_cts } hdmi_acr_cts ;
typedef int buf ;
struct TYPE_2__ {int n; int cts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 struct hdmi_msm_audio_arcs* FUNC_9 (char*) ;
 int FUNC_10 (struct hdmi_audio_infoframe*,int*,int) ;
 int FUNC_11 (struct hdmi*,int ) ;
 int FUNC_12 (struct hdmi*,int ,int) ;

int FUNC_13(struct hdmi *VAR_37)
{
 struct hdmi_audio *VAR_38 = &VAR_37->audio;
 struct hdmi_audio_infoframe *VAR_39 = &VAR_38->infoframe;
 const struct hdmi_msm_audio_arcs *VAR_40 = ((void*)0);
 bool VAR_41 = VAR_38->enabled;
 uint32_t VAR_42, VAR_43, VAR_44;
 uint32_t VAR_45, VAR_46;

 FUNC_1("audio: enabled=%d, channels=%d, channel_allocation=0x%x, "
  "level_shift_value=%d, downmix_inhibit=%d, rate=%d",
  VAR_38->enabled, VAR_39->channels, VAR_39->channel_allocation,
  VAR_39->level_shift_value, VAR_39->downmix_inhibit, VAR_38->rate);
 FUNC_1("video: power_on=%d, pixclock=%lu", VAR_37->power_on, VAR_37->pixclock);

 if (VAR_41 && !(VAR_37->power_on && VAR_37->pixclock)) {
  FUNC_1("disabling audio: no video");
  VAR_41 = 0;
 }

 if (VAR_41) {
  VAR_40 = FUNC_9(VAR_37->pixclock);
  if (!VAR_40) {
   FUNC_1("disabling audio: unsupported pixclock: %lu",
     VAR_37->pixclock);
   VAR_41 = 0;
  }
 }


 VAR_42 = FUNC_11(VAR_37, VAR_27);
 VAR_43 = FUNC_11(VAR_37, VAR_36);
 VAR_44 = FUNC_11(VAR_37, VAR_31);
 VAR_45 = FUNC_11(VAR_37, VAR_35);
 VAR_46 = FUNC_11(VAR_37, VAR_28);


 VAR_42 &= ~VAR_5;

 if (VAR_41) {
  uint32_t VAR_47, VAR_48, VAR_49;
  enum hdmi_acr_cts VAR_50;
  uint8_t VAR_51[14];

  VAR_47 = VAR_40->lut[VAR_38->rate].n;
  VAR_48 = VAR_40->lut[VAR_38->rate].cts;

  if ((VAR_22 == VAR_38->rate) ||
    (VAR_21 == VAR_38->rate)) {
   VAR_49 = 4;
   VAR_47 >>= 2;
  } else if ((VAR_26 == VAR_38->rate) ||
    (VAR_25 == VAR_38->rate)) {
   VAR_49 = 2;
   VAR_47 >>= 1;
  } else {
   VAR_49 = 1;
  }

  FUNC_1("n=%u, cts=%u, multiplier=%u", VAR_47, VAR_48, VAR_49);

  VAR_42 |= VAR_7;
  VAR_42 |= VAR_3;
  VAR_42 |= FUNC_4(VAR_49);

  if ((VAR_24 == VAR_38->rate) ||
    (VAR_26 == VAR_38->rate) ||
    (VAR_22 == VAR_38->rate))
   VAR_50 = VAR_2;
  else if ((VAR_23 == VAR_38->rate) ||
    (VAR_25 == VAR_38->rate) ||
    (VAR_21 == VAR_38->rate))
   VAR_50 = VAR_1;
  else
   VAR_50 = VAR_0;

  VAR_42 |= FUNC_5(VAR_50);

  FUNC_12(VAR_37, FUNC_7(VAR_50 - 1),
    FUNC_2(VAR_48));
  FUNC_12(VAR_37, FUNC_8(VAR_50 - 1),
    FUNC_3(VAR_47));

  FUNC_12(VAR_37, VAR_32,
    FUNC_0(VAR_39->channels != 2, VAR_11) |
    VAR_12);

  VAR_42 |= VAR_4;
  VAR_42 |= VAR_6;


  FUNC_10(VAR_39, VAR_51, sizeof(VAR_51));
  FUNC_12(VAR_37, VAR_29,
    (VAR_51[3] << 0) | (VAR_51[4] << 8) |
    (VAR_51[5] << 16) | (VAR_51[6] << 24));
  FUNC_12(VAR_37, VAR_30,
    (VAR_51[7] << 0) | (VAR_51[8] << 8));

  FUNC_12(VAR_37, VAR_34, 0);

  VAR_43 |= VAR_19;
  VAR_43 |= VAR_20;

  VAR_44 |= VAR_10;

  VAR_45 |= VAR_16;
  VAR_45 |= VAR_15;
  VAR_45 |= VAR_17;
  VAR_45 |= VAR_18;

  VAR_46 &= ~VAR_9;
  VAR_46 |= FUNC_6(4);
  VAR_46 |= VAR_8;
 } else {
  VAR_42 &= ~VAR_4;
  VAR_42 &= ~VAR_6;
  VAR_43 &= ~VAR_19;
  VAR_43 &= ~VAR_20;
  VAR_44 &= ~VAR_10;
  VAR_45 &= ~VAR_16;
  VAR_45 &= ~VAR_15;
  VAR_45 &= ~VAR_17;
  VAR_45 &= ~VAR_18;
  VAR_46 &= ~VAR_8;
 }

 FUNC_12(VAR_37, VAR_27, VAR_42);
 FUNC_12(VAR_37, VAR_36, VAR_43);
 FUNC_12(VAR_37, VAR_31, VAR_44);
 FUNC_12(VAR_37, VAR_35, VAR_45);

 FUNC_12(VAR_37, VAR_33,
   FUNC_0(VAR_41, VAR_13) |
   FUNC_0(VAR_41, VAR_14));

 FUNC_12(VAR_37, VAR_28, VAR_46);


 FUNC_1("audio %sabled", VAR_41 ? "en" : "dis");

 return 0;
}
