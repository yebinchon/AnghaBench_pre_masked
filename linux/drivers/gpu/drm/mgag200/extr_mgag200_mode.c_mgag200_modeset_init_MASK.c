
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vram_base; } ;
struct TYPE_7__ {int mode_config_initialized; } ;
struct mga_device {TYPE_4__* dev; TYPE_1__ mc; TYPE_2__ mode_info; } ;
struct drm_encoder {int dummy; } ;
struct drm_connector {int dummy; } ;
struct TYPE_8__ {int fb_base; int max_height; int max_width; } ;
struct TYPE_9__ {TYPE_3__ mode_config; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_connector*,struct drm_encoder*) ;
 int FUNC_2 (struct mga_device*) ;
 struct drm_encoder* FUNC_3 (TYPE_4__*) ;
 struct drm_connector* FUNC_4 (TYPE_4__*) ;

int FUNC_5(struct mga_device *VAR_2)
{
 struct drm_encoder *VAR_3;
 struct drm_connector *VAR_4;

 VAR_2->mode_info.mode_config_initialized = 1;

 VAR_2->dev->mode_config.max_width = VAR_1;
 VAR_2->dev->mode_config.max_height = VAR_0;

 VAR_2->dev->mode_config.fb_base = VAR_2->mc.vram_base;

 FUNC_2(VAR_2);

 VAR_3 = FUNC_3(VAR_2->dev);
 if (!VAR_3) {
  FUNC_0("mga_encoder_init failed\n");
  return -1;
 }

 VAR_4 = FUNC_4(VAR_2->dev);
 if (!VAR_4) {
  FUNC_0("mga_vga_init failed\n");
  return -1;
 }

 FUNC_1(VAR_4, VAR_3);

 return 0;
}
