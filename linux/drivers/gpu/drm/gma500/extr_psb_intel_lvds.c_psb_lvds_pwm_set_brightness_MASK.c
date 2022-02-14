
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_psb_private {TYPE_1__* lvds_bl; } ;
struct drm_device {int dev; scalar_t__ dev_private; } ;
struct TYPE_2__ {scalar_t__ pol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static int FUNC_4(struct drm_device *VAR_5, int VAR_6)
{
 struct drm_psb_private *VAR_7 =
   (struct drm_psb_private *)VAR_5->dev_private;

 u32 VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_3(VAR_5);


 FUNC_0(VAR_8 == 0);

 VAR_9 = VAR_6 * VAR_8 / VAR_2;

 if (VAR_7->lvds_bl->pol == VAR_0)
  VAR_9 = VAR_8 - VAR_9;

 VAR_9 &= VAR_4;
 FUNC_1(VAR_1,
    (VAR_8 << VAR_3) |
    (VAR_9));

        FUNC_2(VAR_5->dev, "Backlight lvds set brightness %08x\n",
    (VAR_8 << VAR_3) |
    (VAR_9));

 return 0;
}
