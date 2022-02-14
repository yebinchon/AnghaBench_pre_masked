
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct radeon_device {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int) ;

void FUNC_3(struct drm_encoder *VAR_4,
 u8 *VAR_5, int VAR_6)
{
 struct radeon_device *VAR_7 = VAR_4->dev->dev_private;
 u32 VAR_8;


 VAR_8 = FUNC_0(0, VAR_0);
 VAR_8 &= ~(VAR_1 | VAR_3);

 VAR_8 |= VAR_2;
 if (VAR_6)
  VAR_8 |= FUNC_1(VAR_5[0]);
 else
  VAR_8 |= FUNC_1(5);
 FUNC_2(0, VAR_0, VAR_8);
}
