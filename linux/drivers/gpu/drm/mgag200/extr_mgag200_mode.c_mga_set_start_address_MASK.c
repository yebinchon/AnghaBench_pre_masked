
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mga_device {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct mga_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct drm_crtc *VAR_3, unsigned VAR_4)
{
 struct mga_device *VAR_5 = VAR_3->dev->dev_private;
 u32 VAR_6;
 int VAR_7;
 u8 VAR_8;

 while (FUNC_0(0x1fda) & 0x08);
 while (!(FUNC_0(0x1fda) & 0x08));

 VAR_7 = FUNC_0(VAR_2) + 2;
 while (FUNC_0(VAR_2) < VAR_7);

 FUNC_2(VAR_1, 0);
 VAR_8 = FUNC_0(VAR_0);
 VAR_8 &= 0xB0;
 VAR_6 = VAR_4 / 8;


 FUNC_1(VAR_6 > 0x1fffff);
 VAR_8 |= (!!(VAR_6 & (1<<20)))<<6;
 FUNC_3(0x0d, (u8)(VAR_6 & 0xff));
 FUNC_3(0x0c, (u8)(VAR_6 >> 8) & 0xff);
 FUNC_4(0x0, ((u8)(VAR_6 >> 16) & 0xf) | VAR_8);
}
