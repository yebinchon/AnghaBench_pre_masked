
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mtk_hdmi {int dev; } ;
typedef enum hdmi_infoframe_type { ____Placeholder_hdmi_infoframe_type } hdmi_infoframe_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct mtk_hdmi*,int ,int) ;
 int FUNC_3 (struct mtk_hdmi*,int ,int) ;
 int FUNC_4 (struct mtk_hdmi*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct mtk_hdmi *VAR_10, u8 *VAR_11,
     u8 VAR_12)
{
 u32 VAR_13 = VAR_4;
 int VAR_14;
 u8 *VAR_15;
 enum hdmi_infoframe_type VAR_16;
 u8 VAR_17;
 u8 VAR_18;
 u8 VAR_19;
 int VAR_20 = 0;

 VAR_16 = *VAR_11;
 VAR_11 += 1;
 VAR_17 = *VAR_11;
 VAR_11 += 1;
 VAR_18 = *VAR_11;
 VAR_11 += 1;
 VAR_19 = *VAR_11;
 VAR_11 += 1;
 VAR_15 = VAR_11;

 FUNC_0(VAR_10->dev,
  "frame_type:0x%x,frame_ver:0x%x,frame_len:0x%x,checksum:0x%x\n",
  VAR_16, VAR_17, VAR_18, VAR_19);

 switch (VAR_16) {
 case 130:
  VAR_20 = VAR_1;
  VAR_13 = VAR_4;
  break;
 case 129:
  VAR_20 = VAR_2;
  VAR_13 = VAR_4;
  break;
 case 131:
  VAR_20 = VAR_0;
  VAR_13 = VAR_4;
  break;
 case 128:
  VAR_20 = VAR_9;
  VAR_13 = VAR_3;
  break;
 default:
  FUNC_1(VAR_10->dev, "Unknown infoframe type %d\n", VAR_16);
  return;
 }
 FUNC_2(VAR_10, VAR_13, VAR_20);
 FUNC_4(VAR_10, VAR_7, VAR_16);
 FUNC_4(VAR_10, VAR_8, VAR_17);
 FUNC_4(VAR_10, VAR_6, VAR_18);

 FUNC_4(VAR_10, VAR_5, VAR_19);
 for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++)
  FUNC_4(VAR_10, VAR_5, VAR_15[VAR_14]);

 FUNC_3(VAR_10, VAR_13, VAR_20);
}
