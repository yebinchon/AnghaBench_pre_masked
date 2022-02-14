
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mga_device {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct mga_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct drm_crtc *VAR_5)
{
 struct mga_device *VAR_6 = VAR_5->dev->dev_private;
 u8 VAR_7;
 int VAR_8;




 FUNC_1(VAR_1, VAR_2);
 VAR_7 = FUNC_0(VAR_0);
 VAR_7 |= 0x10;
 FUNC_2(VAR_2, VAR_7);


 FUNC_1(VAR_1, VAR_3);
 VAR_7 = FUNC_0(VAR_0);
 VAR_7 |= 0x10;
 FUNC_2(VAR_3, VAR_7);




 FUNC_1(VAR_1, VAR_4);
 VAR_7 = FUNC_0(VAR_0);
 VAR_7 |= 0x80;
 FUNC_2(VAR_4, VAR_7);




 VAR_8 = 300;
 while (!(VAR_7 & 0x1) && VAR_8) {
  FUNC_1(VAR_1, VAR_4);
  VAR_7 = FUNC_0(VAR_0);
  FUNC_3(1000);
  VAR_8--;
 }





 if (VAR_8) {
  VAR_8 = 300;
  while ((VAR_7 & 0x2) && VAR_8) {
   FUNC_1(VAR_1, VAR_4);
   VAR_7 = FUNC_0(VAR_0);
   FUNC_3(1000);
   VAR_8--;
  }
 }
}
