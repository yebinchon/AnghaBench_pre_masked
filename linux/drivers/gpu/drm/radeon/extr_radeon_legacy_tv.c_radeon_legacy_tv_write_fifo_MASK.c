
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct radeon_encoder *VAR_4,
     uint16_t VAR_5, uint32_t VAR_6)
{
 struct drm_device *VAR_7 = VAR_4->base.dev;
 struct radeon_device *VAR_8 = VAR_7->dev_private;
 uint32_t VAR_9;
 int VAR_10 = 0;

 FUNC_1(VAR_3, VAR_6);

 FUNC_1(VAR_2, VAR_5);
 FUNC_1(VAR_2, VAR_5 | VAR_0);

 do {
  VAR_9 = FUNC_0(VAR_2);
  if ((VAR_9 & VAR_1) == 0)
   break;
  VAR_10++;
 } while (VAR_10 < 10000);
 FUNC_1(VAR_2, 0);
}
