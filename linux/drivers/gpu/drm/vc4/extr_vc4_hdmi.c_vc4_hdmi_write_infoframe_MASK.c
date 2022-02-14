
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union hdmi_infoframe {TYPE_1__ any; } ;
typedef int uint8_t ;
typedef int u32 ;
struct vc4_dev {int dummy; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int,char*) ;
 scalar_t__ FUNC_6 (union hdmi_infoframe*,int*,int) ;
 struct vc4_dev* FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_encoder*,int) ;
 int FUNC_9 (int,int) ;

__attribute__((used)) static void FUNC_10(struct drm_encoder *VAR_4,
         union hdmi_infoframe *VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 struct vc4_dev *VAR_7 = FUNC_7(VAR_6);
 u32 VAR_8 = VAR_5->any.type - 0x80;
 u32 VAR_9 = FUNC_4(VAR_8);
 uint8_t VAR_10[VAR_0];
 ssize_t VAR_11, VAR_12;
 int VAR_13;

 FUNC_5(!(FUNC_2(VAR_1) &
      VAR_2),
    "Packet RAM has to be on to store the packet.");

 VAR_11 = FUNC_6(VAR_5, VAR_10, sizeof(VAR_10));
 if (VAR_11 < 0)
  return;

 VAR_13 = FUNC_8(VAR_4, VAR_5->any.type);
 if (VAR_13) {
  FUNC_1("Failed to wait for infoframe to go idle: %d\n", VAR_13);
  return;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12 += 7) {
  FUNC_3(VAR_9,
      VAR_10[VAR_12 + 0] << 0 |
      VAR_10[VAR_12 + 1] << 8 |
      VAR_10[VAR_12 + 2] << 16);
  VAR_9 += 4;

  FUNC_3(VAR_9,
      VAR_10[VAR_12 + 3] << 0 |
      VAR_10[VAR_12 + 4] << 8 |
      VAR_10[VAR_12 + 5] << 16 |
      VAR_10[VAR_12 + 6] << 24);
  VAR_9 += 4;
 }

 FUNC_3(VAR_1,
     FUNC_2(VAR_1) | FUNC_0(VAR_8));
 VAR_13 = FUNC_9((FUNC_2(VAR_3) &
   FUNC_0(VAR_8)), 100);
 if (VAR_13)
  FUNC_1("Failed to wait for infoframe to start: %d\n", VAR_13);
}
