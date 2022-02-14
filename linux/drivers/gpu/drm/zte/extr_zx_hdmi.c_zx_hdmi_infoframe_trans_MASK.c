
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union hdmi_infoframe {int dummy; } hdmi_infoframe ;
typedef int u8 ;
struct zx_hdmi {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (union hdmi_infoframe*,int *,int) ;
 int FUNC_2 (struct zx_hdmi*,scalar_t__,int ) ;
 int FUNC_3 (struct zx_hdmi*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct zx_hdmi *VAR_6,
       union hdmi_infoframe *VAR_7, u8 VAR_8)
{
 u8 VAR_9[VAR_5];
 int VAR_10;
 int VAR_11;

 FUNC_2(VAR_6, VAR_2, VAR_8);

 VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_5);
 if (VAR_10 < 0) {
  FUNC_0(VAR_6->dev, "failed to pack infoframe: %d\n", VAR_10);
  return VAR_10;
 }

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  FUNC_2(VAR_6, VAR_0 + VAR_11, VAR_9[VAR_11]);

 FUNC_3(VAR_6, VAR_1, VAR_4,
    VAR_4);
 FUNC_3(VAR_6, VAR_1, VAR_3,
    VAR_3);

 return VAR_10;
}
