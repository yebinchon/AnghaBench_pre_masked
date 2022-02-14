
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tegra_hdmi {int dev; } ;
struct hdmi_vendor_infoframe {int s3d_struct; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct hdmi_vendor_infoframe*) ;
 scalar_t__ FUNC_2 (struct hdmi_vendor_infoframe*,int *,int) ;
 int FUNC_3 (struct tegra_hdmi*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct tegra_hdmi *VAR_1)
{
 struct hdmi_vendor_infoframe VAR_2;
 u8 VAR_3[10];
 ssize_t VAR_4;

 FUNC_1(&VAR_2);
 VAR_2.s3d_struct = VAR_0;

 VAR_4 = FUNC_2(&VAR_2, VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0) {
  FUNC_0(VAR_1->dev, "failed to pack vendor infoframe: %zd\n",
   VAR_4);
  return;
 }

 FUNC_3(VAR_1, VAR_3, VAR_4);
}
