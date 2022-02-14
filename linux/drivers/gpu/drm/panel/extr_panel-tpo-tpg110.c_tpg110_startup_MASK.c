
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpg110_panel_mode {int magic; } ;
struct tpg110 {int dev; struct tpg110_panel_mode const* panel_mode; int grestb; } ;


 int FUNC_0 (struct tpg110_panel_mode*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 struct tpg110_panel_mode* VAR_7 ;
 int FUNC_5 (struct tpg110*,int ) ;
 int FUNC_6 (struct tpg110*,int ,int) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct tpg110 *VAR_8)
{
 u8 VAR_9;
 int VAR_10;


 FUNC_4(VAR_8->grestb, 0);
 FUNC_7(1000, 2000);
 FUNC_1(VAR_8->dev, "de-asserted GRESTB\n");


 FUNC_6(VAR_8, VAR_6, 0x55);
 VAR_9 = FUNC_5(VAR_8, VAR_6);
 if (VAR_9 != 0x55) {
  FUNC_2(VAR_8->dev, "failed communication test\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_8, VAR_1);
 FUNC_3(VAR_8->dev, "TPG110 chip ID: %d version: %d\n",
   VAR_9 >> 4, VAR_9 & 0x0f);


 VAR_9 = FUNC_5(VAR_8, VAR_2);
 VAR_9 &= VAR_5;
 switch (VAR_9) {
 case 133:
  FUNC_3(VAR_8->dev,
    "IN 400x240 RGB -> OUT 800x480 RGB (dual scan)\n");
  break;
 case 131:
  FUNC_3(VAR_8->dev,
    "IN 480x272 RGB -> OUT 800x480 RGB (dual scan)\n");
  break;
 case 130:
  FUNC_3(VAR_8->dev, "480x640 RGB\n");
  break;
 case 132:
  FUNC_3(VAR_8->dev, "480x272 RGB\n");
  break;
 case 129:
  FUNC_3(VAR_8->dev, "640x480 RGB\n");
  break;
 case 128:
  FUNC_3(VAR_8->dev, "800x480 RGB\n");
  break;
 default:
  FUNC_2(VAR_8->dev, "ILLEGAL RESOLUTION 0x%02x\n", VAR_9);
  break;
 }


 if (VAR_9 == 131)
  VAR_9 = 132;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_7); VAR_10++) {
  const struct tpg110_panel_mode *VAR_11;

  VAR_11 = &VAR_7[VAR_10];
  if (VAR_11->magic == VAR_9) {
   VAR_8->panel_mode = VAR_11;
   break;
  }
 }
 if (VAR_10 == FUNC_0(VAR_7)) {
  FUNC_2(VAR_8->dev, "unsupported mode (%02x) detected\n",
   VAR_9);
  return -VAR_0;
 }

 VAR_9 = FUNC_5(VAR_8, VAR_3);
 FUNC_3(VAR_8->dev, "resolution and standby is controlled by %s\n",
   (VAR_9 & VAR_4) ? "software" : "hardware");

 VAR_9 |= VAR_4;
 FUNC_6(VAR_8, VAR_3, VAR_9);

 return 0;
}
