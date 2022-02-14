
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {int get_modes; int power_off; int power_on_start; int dev_type; TYPE_2__* encoder; } ;
struct rockchip_dp_device {TYPE_2__ encoder; int adp; TYPE_3__ plat_data; struct drm_device* drm_dev; struct rockchip_dp_chip_data const* data; } ;
struct rockchip_dp_chip_data {int chip_type; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int (* destroy ) (TYPE_2__*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,struct drm_device*,TYPE_3__*) ;
 struct rockchip_dp_device* FUNC_4 (struct device*) ;
 struct rockchip_dp_chip_data* FUNC_5 (struct device*) ;
 int FUNC_6 (struct rockchip_dp_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_4, struct device *VAR_5,
       void *VAR_6)
{
 struct rockchip_dp_device *VAR_7 = FUNC_4(VAR_4);
 const struct rockchip_dp_chip_data *VAR_8;
 struct drm_device *VAR_9 = VAR_6;
 int VAR_10;

 VAR_8 = FUNC_5(VAR_4);
 if (!VAR_8)
  return -VAR_0;

 VAR_7->data = VAR_8;
 VAR_7->drm_dev = VAR_9;

 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10) {
  FUNC_0("failed to create drm encoder\n");
  return VAR_10;
 }

 VAR_7->plat_data.encoder = &VAR_7->encoder;

 VAR_7->plat_data.dev_type = VAR_7->data->chip_type;
 VAR_7->plat_data.power_on_start = VAR_3;
 VAR_7->plat_data.power_off = VAR_2;
 VAR_7->plat_data.get_modes = VAR_1;

 VAR_7->adp = FUNC_3(VAR_4, VAR_7->drm_dev, &VAR_7->plat_data);
 if (FUNC_1(VAR_7->adp)) {
  VAR_10 = FUNC_2(VAR_7->adp);
  goto err_cleanup_encoder;
 }

 return 0;
err_cleanup_encoder:
 VAR_7->encoder.funcs->destroy(&VAR_7->encoder);
 return VAR_10;
}
