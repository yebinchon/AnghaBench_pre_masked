
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int connector; } ;
struct tegra_sor {int dev; TYPE_1__ output; } ;
struct hdmi_avi_infoframe {int dummy; } ;
struct drm_display_mode {int dummy; } ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hdmi_avi_infoframe*,int *,struct drm_display_mode const*) ;
 int FUNC_3 (struct hdmi_avi_infoframe*,int *,int) ;
 int FUNC_4 (struct tegra_sor*,int *,int) ;
 int FUNC_5 (struct tegra_sor*,int ) ;
 int FUNC_6 (struct tegra_sor*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct tegra_sor *VAR_6,
       const struct drm_display_mode *VAR_7)
{
 u8 VAR_8[FUNC_0(VAR_0)];
 struct hdmi_avi_infoframe VAR_9;
 u32 VAR_10;
 int VAR_11;


 VAR_10 = FUNC_5(VAR_6, VAR_5);
 VAR_10 &= ~VAR_4;
 VAR_10 &= ~VAR_3;
 VAR_10 &= ~VAR_2;
 FUNC_6(VAR_6, VAR_10, VAR_5);

 VAR_11 = FUNC_2(&VAR_9,
             &VAR_6->output.connector, VAR_7);
 if (VAR_11 < 0) {
  FUNC_1(VAR_6->dev, "failed to setup AVI infoframe: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_3(&VAR_9, VAR_8, sizeof(VAR_8));
 if (VAR_11 < 0) {
  FUNC_1(VAR_6->dev, "failed to pack AVI infoframe: %d\n", VAR_11);
  return VAR_11;
 }

 FUNC_4(VAR_6, VAR_8, VAR_11);


 VAR_10 = FUNC_5(VAR_6, VAR_5);
 VAR_10 |= VAR_1;
 VAR_10 |= VAR_2;
 FUNC_6(VAR_6, VAR_10, VAR_5);

 return 0;
}
