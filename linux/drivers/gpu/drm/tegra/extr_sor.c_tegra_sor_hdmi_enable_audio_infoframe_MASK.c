
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int channels; } ;
struct tegra_sor {int dev; TYPE_1__ format; } ;
struct hdmi_audio_infoframe {int channels; } ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hdmi_audio_infoframe*) ;
 int FUNC_3 (struct hdmi_audio_infoframe*,int *,int) ;
 int FUNC_4 (struct tegra_sor*,int *,int) ;
 int FUNC_5 (struct tegra_sor*,int ) ;
 int FUNC_6 (struct tegra_sor*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct tegra_sor *VAR_4)
{
 u8 VAR_5[FUNC_0(VAR_0)];
 struct hdmi_audio_infoframe VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(&VAR_6);
 if (VAR_8 < 0) {
  FUNC_1(VAR_4->dev, "failed to setup audio infoframe: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_6.channels = VAR_4->format.channels;

 VAR_8 = FUNC_3(&VAR_6, VAR_5, sizeof(VAR_5));
 if (VAR_8 < 0) {
  FUNC_1(VAR_4->dev, "failed to pack audio infoframe: %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_4(VAR_4, VAR_5, VAR_8);

 VAR_7 = FUNC_5(VAR_4, VAR_3);
 VAR_7 |= VAR_1;
 VAR_7 |= VAR_2;
 FUNC_6(VAR_4, VAR_7, VAR_3);

 return 0;
}
