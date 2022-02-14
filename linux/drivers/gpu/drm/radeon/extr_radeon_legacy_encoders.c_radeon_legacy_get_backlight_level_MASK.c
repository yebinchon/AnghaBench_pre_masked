
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

u8
FUNC_1(struct radeon_encoder *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->base.dev;
 struct radeon_device *VAR_4 = VAR_3->dev_private;
 u8 VAR_5;

 VAR_5 = (FUNC_0(VAR_1) >>
      VAR_0) & 0xff;

 return VAR_5;
}
