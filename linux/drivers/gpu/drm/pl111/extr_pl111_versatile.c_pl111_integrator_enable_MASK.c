
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_9, u32 VAR_10)
{
 u32 VAR_11;

 FUNC_1(VAR_9->dev, "enable Integrator CLCD connectors\n");


 VAR_11 = VAR_4 | VAR_5 |
  VAR_0 | VAR_1;

 switch (VAR_10) {
 case 130:
 case 128:

  VAR_11 |= VAR_2;
  break;
 case 131:
 case 129:

  VAR_11 |= VAR_3;
  break;
 default:
  FUNC_0(VAR_9->dev, "unhandled format on Integrator 0x%08x\n",
   VAR_10);
  break;
 }

 FUNC_2(VAR_8,
      VAR_7,
      VAR_6,
      VAR_11);
}
