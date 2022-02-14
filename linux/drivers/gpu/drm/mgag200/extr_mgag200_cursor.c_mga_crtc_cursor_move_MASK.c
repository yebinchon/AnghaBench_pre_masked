
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mga_device {int dummy; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ dev_private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;

int FUNC_2(struct drm_crtc *VAR_4, int VAR_5, int VAR_6)
{
 struct mga_device *VAR_7 = (struct mga_device *)VAR_4->dev->dev_private;

 VAR_5 += 64;
 VAR_6 += 64;

 FUNC_0(VAR_5 <= 0);
 FUNC_0(VAR_6 <= 0);
 FUNC_0(VAR_5 & ~0xffff);
 FUNC_0(VAR_6 & ~0xffff);

 FUNC_1(VAR_1, VAR_5 & 0xff);
 FUNC_1(VAR_0, (VAR_5>>8) & 0xff);

 FUNC_1(VAR_3, VAR_6 & 0xff);
 FUNC_1(VAR_2, (VAR_6>>8) & 0xff);
 return 0;
}
