
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hdmi_vendor_infoframe {scalar_t__ s3d_struct; } ;
struct dw_hdmi {int dev; int connector; } ;
struct drm_display_mode {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct hdmi_vendor_infoframe*,int *,struct drm_display_mode*) ;
 int FUNC_2 (struct dw_hdmi*,int,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct hdmi_vendor_infoframe*,int*,int) ;
 int FUNC_4 (struct dw_hdmi*,int,int ) ;

__attribute__((used)) static void FUNC_5(struct dw_hdmi *VAR_13,
       struct drm_display_mode *VAR_14)
{
 struct hdmi_vendor_infoframe VAR_15;
 u8 VAR_16[10];
 ssize_t VAR_17;

 VAR_17 = FUNC_1(&VAR_15,
         &VAR_13->connector,
         VAR_14);
 if (VAR_17 < 0)






  return;

 VAR_17 = FUNC_3(&VAR_15, VAR_16, sizeof(VAR_16));
 if (VAR_17 < 0) {
  FUNC_0(VAR_13->dev, "Failed to pack vendor infoframe: %zd\n",
   VAR_17);
  return;
 }
 FUNC_2(VAR_13, 0, VAR_1, VAR_3,
   VAR_2);


 FUNC_4(VAR_13, VAR_16[2], VAR_12);


 FUNC_4(VAR_13, VAR_16[4], VAR_6);
 FUNC_4(VAR_13, VAR_16[5], VAR_7);
 FUNC_4(VAR_13, VAR_16[6], VAR_8);


 FUNC_4(VAR_13, VAR_16[7], VAR_9);
 FUNC_4(VAR_13, VAR_16[8], VAR_10);

 if (VAR_15.s3d_struct >= VAR_0)
  FUNC_4(VAR_13, VAR_16[9], VAR_11);


 FUNC_4(VAR_13, 1, VAR_4);


 FUNC_4(VAR_13, 0x11, VAR_5);


 FUNC_2(VAR_13, 1, VAR_1, VAR_3,
   VAR_2);
}
