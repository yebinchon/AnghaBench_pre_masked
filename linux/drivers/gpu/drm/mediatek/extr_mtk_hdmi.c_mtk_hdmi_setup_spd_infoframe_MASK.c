
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtk_hdmi {int dev; } ;
struct hdmi_spd_infoframe {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct hdmi_spd_infoframe*,char const*,char const*) ;
 scalar_t__ FUNC_2 (struct hdmi_spd_infoframe*,int *,int) ;
 int FUNC_3 (struct mtk_hdmi*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct mtk_hdmi *VAR_0,
     const char *VAR_1,
     const char *VAR_2)
{
 struct hdmi_spd_infoframe VAR_3;
 u8 VAR_4[29];
 ssize_t VAR_5;

 VAR_5 = FUNC_1(&VAR_3, VAR_1, VAR_2);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0->dev, "Failed to initialize SPD infoframe: %zd\n",
   VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(&VAR_3, VAR_4, sizeof(VAR_4));
 if (VAR_5 < 0) {
  FUNC_0(VAR_0->dev, "Failed to pack SDP infoframe: %zd\n", VAR_5);
  return VAR_5;
 }

 FUNC_3(VAR_0, VAR_4, sizeof(VAR_4));
 return 0;
}
