
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_codec_params {int sample_rate; int sample_width; } ;
struct hdmi_codec_daifmt {int fmt; unsigned int bit_clk_inv; } ;
struct device {int dummy; } ;
struct adv7511 {unsigned int audio_source; int f_audio; int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_0 (int) ;
 int VAR_22 ;



 int FUNC_1 (struct adv7511*) ;
 struct adv7511* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int,unsigned int) ;
 int FUNC_4 (int ,int,int) ;

int FUNC_5(struct device *VAR_23, void *VAR_24,
      struct hdmi_codec_daifmt *VAR_25,
      struct hdmi_codec_params *VAR_26)
{
 struct adv7511 *VAR_27 = FUNC_2(VAR_23);
 unsigned int VAR_28, VAR_29 = 0;
 unsigned int VAR_30;
 unsigned int VAR_31;
 unsigned int VAR_32;

 switch (VAR_26->sample_rate) {
 case 32000:
  VAR_31 = VAR_17;
  break;
 case 44100:
  VAR_31 = VAR_18;
  break;
 case 48000:
  VAR_31 = VAR_19;
  break;
 case 88200:
  VAR_31 = VAR_20;
  break;
 case 96000:
  VAR_31 = VAR_21;
  break;
 case 176400:
  VAR_31 = VAR_15;
  break;
 case 192000:
  VAR_31 = VAR_16;
  break;
 default:
  return -VAR_22;
 }

 switch (VAR_26->sample_width) {
 case 16:
  VAR_32 = VAR_6;
  break;
 case 18:
  VAR_32 = VAR_7;
  break;
 case 20:
  VAR_32 = VAR_8;
  break;
 case 24:
  VAR_32 = VAR_9;
  break;
 default:
  return -VAR_22;
 }

 switch (VAR_25->fmt) {
 case 130:
  VAR_28 = VAR_1;
  VAR_29 = VAR_3;
  break;
 case 128:
  VAR_28 = VAR_1;
  VAR_29 = VAR_5;
  break;
 case 129:
  VAR_28 = VAR_1;
  VAR_29 = VAR_4;
  break;
 default:
  return -VAR_22;
 }

 VAR_30 = VAR_25->bit_clk_inv;

 FUNC_3(VAR_27->regmap, VAR_12, 0x70,
      VAR_28 << 4);
 FUNC_3(VAR_27->regmap, VAR_11, FUNC_0(6),
      VAR_30 << 6);
 FUNC_3(VAR_27->regmap, VAR_14, 0x03,
      VAR_29);

 VAR_27->audio_source = VAR_28;

 VAR_27->f_audio = VAR_26->sample_rate;

 FUNC_1(VAR_27);

 FUNC_3(VAR_27->regmap, VAR_10,
      VAR_0, VAR_32);
 FUNC_3(VAR_27->regmap, VAR_13,
      VAR_2, VAR_31 << 4);
 FUNC_4(VAR_27->regmap, 0x73, 0x1);

 return 0;
}
