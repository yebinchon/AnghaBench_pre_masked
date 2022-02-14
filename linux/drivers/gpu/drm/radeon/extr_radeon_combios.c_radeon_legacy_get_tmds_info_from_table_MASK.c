
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_encoder_int_tmds {TYPE_1__* tmds_pll; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_2__ base; } ;
struct radeon_device {size_t family; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct TYPE_6__ {int freq; int value; } ;
struct TYPE_4__ {int freq; int value; } ;


 TYPE_3__** VAR_0 ;

bool FUNC_0(struct radeon_encoder *VAR_1,
         struct radeon_encoder_int_tmds *VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->base.dev;
 struct radeon_device *VAR_4 = VAR_3->dev_private;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_2->tmds_pll[VAR_5].value =
   VAR_0[VAR_4->family][VAR_5].value;
  VAR_2->tmds_pll[VAR_5].freq = VAR_0[VAR_4->family][VAR_5].freq;
 }

 return 1;
}
