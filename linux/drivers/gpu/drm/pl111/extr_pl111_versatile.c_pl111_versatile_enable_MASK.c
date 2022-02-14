
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_10, u32 VAR_11)
{
 u32 VAR_12 = 0;

 FUNC_1(VAR_10->dev, "enable Versatile CLCD connectors\n");

 switch (VAR_11) {
 case 136:
 case 130:
 case 134:
 case 128:
  VAR_12 |= VAR_5;
  break;
 case 133:
  VAR_12 |= VAR_4;
  break;
 case 132:
  VAR_12 |= VAR_3;
  break;
 case 137:
 case 131:
 case 135:
 case 129:
  VAR_12 |= VAR_2;
  break;
 default:
  FUNC_0(VAR_10->dev, "unhandled format on Versatile 0x%08x\n",
   VAR_11);
  break;
 }


 FUNC_2(VAR_9,
      VAR_0,
      VAR_6,
      VAR_12);


 FUNC_2(VAR_9,
      VAR_0,
      VAR_1,
      VAR_7 | VAR_8);
}
