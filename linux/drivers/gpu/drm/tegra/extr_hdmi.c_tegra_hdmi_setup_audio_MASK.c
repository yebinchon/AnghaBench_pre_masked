
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_hdmi_audio_config {int aval; int cts; scalar_t__ n; } ;
struct TYPE_3__ {int channels; int sample_rate; } ;
struct tegra_hdmi {int audio_source; TYPE_2__* config; int pixel_clock; int dev; TYPE_1__ format; } ;
struct TYPE_4__ {scalar_t__ has_hda; scalar_t__ has_hbr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 int FUNC_5 (int) ;
 int VAR_19 ;
 int VAR_20 ;

 int FUNC_6 (int ,char*,int ,scalar_t__,int ,int ) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ,int ,struct tegra_hdmi_audio_config*) ;
 int FUNC_9 (struct tegra_hdmi*,int ) ;
 int FUNC_10 (struct tegra_hdmi*) ;
 int FUNC_11 (struct tegra_hdmi*,int ) ;
 int FUNC_12 (struct tegra_hdmi*,int,int ) ;

__attribute__((used)) static int FUNC_13(struct tegra_hdmi *VAR_21)
{
 struct tegra_hdmi_audio_config VAR_22;
 u32 VAR_23, VAR_24;
 int VAR_25;

 switch (VAR_21->audio_source) {
 case 129:
  if (VAR_21->config->has_hda)
   VAR_23 = VAR_16;
  else
   return -VAR_5;

  break;

 case 128:
  if (VAR_21->config->has_hda)
   VAR_23 = VAR_17;
  else
   VAR_23 = VAR_2;
  break;

 default:
  if (VAR_21->config->has_hda)
   VAR_23 = VAR_15;
  else
   VAR_23 = VAR_1;
  break;
 }
 if (VAR_21->config->has_hda) {
  if (VAR_21->format.channels == 2)
   VAR_24 = VAR_14;
  else
   VAR_24 = 0;

  VAR_24 |= VAR_23;

  FUNC_12(VAR_21, VAR_24, VAR_12);
 }





 VAR_24 = FUNC_3(0xc0) |
  FUNC_2(6);

 if (!VAR_21->config->has_hda)
  VAR_24 |= VAR_23;

 FUNC_12(VAR_21, VAR_24, VAR_6);




 if (VAR_21->config->has_hbr) {
  VAR_24 = FUNC_9(VAR_21, VAR_13);
  VAR_24 |= VAR_18;
  FUNC_12(VAR_21, VAR_24, VAR_13);
 }

 VAR_25 = FUNC_8(VAR_21->format.sample_rate,
       VAR_21->pixel_clock, &VAR_22);
 if (VAR_25 < 0) {
  FUNC_7(VAR_21->dev,
   "cannot set audio to %u Hz at %u Hz pixel clock\n",
   VAR_21->format.sample_rate, VAR_21->pixel_clock);
  return VAR_25;
 }

 FUNC_6(VAR_21->dev, "audio: pixclk=%u, n=%u, cts=%u, aval=%u\n",
  VAR_21->pixel_clock, VAR_22.n, VAR_22.cts, VAR_22.aval);

 FUNC_12(VAR_21, 0, VAR_10);

 VAR_24 = VAR_4 | VAR_3 |
  FUNC_4(VAR_22.n - 1);
 FUNC_12(VAR_21, VAR_24, VAR_7);

 FUNC_12(VAR_21, FUNC_1(VAR_22.n) | VAR_0,
     VAR_8);

 FUNC_12(VAR_21, FUNC_0(VAR_22.cts),
     VAR_9);

 VAR_24 = VAR_20 | VAR_19 | FUNC_5(1);
 FUNC_12(VAR_21, VAR_24, VAR_11);

 VAR_24 = FUNC_9(VAR_21, VAR_7);
 VAR_24 &= ~VAR_4;
 FUNC_12(VAR_21, VAR_24, VAR_7);

 if (VAR_21->config->has_hda)
  FUNC_11(VAR_21, VAR_22.aval);

 FUNC_10(VAR_21);

 return 0;
}
