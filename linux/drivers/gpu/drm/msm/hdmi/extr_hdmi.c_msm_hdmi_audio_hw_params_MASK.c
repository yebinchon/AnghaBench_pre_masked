
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int channels; } ;
struct hdmi_codec_params {int sample_rate; TYPE_1__ cea; int sample_width; } ;
struct hdmi_codec_daifmt {int dummy; } ;
struct hdmi {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int,int ,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 struct hdmi* FUNC_2 (struct device*) ;
 int FUNC_3 (struct hdmi*,int,unsigned int,unsigned int,unsigned int,int) ;
 int FUNC_4 (struct hdmi*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_12, void *VAR_13,
        struct hdmi_codec_daifmt *VAR_14,
        struct hdmi_codec_params *VAR_15)
{
 struct hdmi *VAR_16 = FUNC_2(VAR_12);
 unsigned int VAR_17;
 unsigned int VAR_18 = 0;
 unsigned int VAR_19;
 unsigned int VAR_20 = 0;
 bool VAR_21 = 0;

 FUNC_0(VAR_12, "%u Hz, %d bit, %d channels\n", VAR_15->sample_rate,
   VAR_15->sample_width, VAR_15->cea.channels);

 switch (VAR_15->cea.channels) {
 case 2:

  VAR_18 = 0;
  VAR_17 = VAR_8;
  break;
 case 4:

  VAR_18 = 0x3;
  VAR_17 = VAR_9;
  break;
 case 6:

  VAR_18 = 0x0B;
  VAR_17 = VAR_10;
  break;
 case 8:

  VAR_18 = 0x1F;
  VAR_17 = VAR_11;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_15->sample_rate) {
 case 32000:
  VAR_19 = VAR_3;
  break;
 case 44100:
  VAR_19 = VAR_4;
  break;
 case 48000:
  VAR_19 = VAR_5;
  break;
 case 88200:
  VAR_19 = VAR_6;
  break;
 case 96000:
  VAR_19 = VAR_7;
  break;
 case 176400:
  VAR_19 = VAR_1;
  break;
 case 192000:
  VAR_19 = VAR_2;
  break;
 default:
  FUNC_1(VAR_12, "rate[%d] not supported!\n",
   VAR_15->sample_rate);
  return -VAR_0;
 }

 FUNC_4(VAR_16, VAR_19);
 FUNC_3(VAR_16, 1, VAR_17, VAR_18,
         VAR_20, VAR_21);

 return 0;
}
