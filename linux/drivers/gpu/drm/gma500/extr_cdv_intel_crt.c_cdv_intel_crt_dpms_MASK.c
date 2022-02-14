
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct drm_encoder *VAR_4, int VAR_5)
{
 struct drm_device *VAR_6 = VAR_4->dev;
 u32 VAR_7, VAR_8;
 VAR_8 = VAR_0;

 VAR_7 = FUNC_0(VAR_8);
 VAR_7 &= ~(VAR_2 | VAR_3);
 VAR_7 &= ~VAR_1;

 switch (VAR_5) {
 case 130:
  VAR_7 |= VAR_1;
  break;
 case 129:
  VAR_7 |= VAR_1 | VAR_2;
  break;
 case 128:
  VAR_7 |= VAR_1 | VAR_3;
  break;
 case 131:
  VAR_7 |= VAR_2 | VAR_3;
  break;
 }

 FUNC_1(VAR_8, VAR_7);
}
