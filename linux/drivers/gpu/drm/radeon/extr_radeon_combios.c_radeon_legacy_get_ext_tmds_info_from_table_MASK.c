
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct radeon_i2c_bus_rec {int dummy; } ;
struct radeon_encoder_ext_tmds {int slave_addr; int dvo_chip; int i2c_bus; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_1__ base; } ;
struct TYPE_4__ {int connector_table; } ;
struct radeon_device {TYPE_2__ mode_info; } ;
struct drm_device {struct radeon_device* dev_private; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct radeon_i2c_bus_rec FUNC_0 (struct radeon_device*,int ,int ,int ) ;
 int FUNC_1 (struct radeon_device*,struct radeon_i2c_bus_rec*) ;

bool FUNC_2(struct radeon_encoder *VAR_2,
      struct radeon_encoder_ext_tmds *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct radeon_i2c_bus_rec VAR_6;


 VAR_6 = FUNC_0(VAR_5, VAR_0, 0, 0);
 VAR_3->i2c_bus = FUNC_1(VAR_5, &VAR_6);


 switch (VAR_5->mode_info.connector_table) {
 case 128:
 case 129:
 default:
  VAR_3->dvo_chip = VAR_1;
  VAR_3->slave_addr = 0x70 >> 1;
  break;
 }

 return 1;
}
