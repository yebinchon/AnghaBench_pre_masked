
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nouveau_encoder {struct dcb_output* dcb; } ;
struct TYPE_12__ {int chipset; scalar_t__ family; } ;
struct TYPE_13__ {TYPE_5__ info; } ;
struct TYPE_14__ {TYPE_6__ device; } ;
struct nouveau_drm {TYPE_7__ client; } ;
struct TYPE_9__ {scalar_t__ supported; } ;
struct TYPE_10__ {TYPE_2__ scrambling; } ;
struct TYPE_11__ {TYPE_3__ scdc; } ;
struct drm_display_info {int max_tmds_clock; TYPE_4__ hdmi; } ;
struct TYPE_8__ {struct drm_display_info display_info; } ;
struct nouveau_connector {TYPE_1__ base; int edid; struct nouveau_encoder* detected_encoder; } ;
struct drm_connector {int dev; } ;
struct dcb_output {scalar_t__ location; scalar_t__ duallink_possible; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int const) ;
 struct nouveau_connector* FUNC_2 (struct drm_connector*) ;
 struct nouveau_drm* FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static unsigned
FUNC_4(struct drm_connector *VAR_5)
{
 struct nouveau_connector *VAR_6 = FUNC_2(VAR_5);
 struct nouveau_encoder *VAR_7 = VAR_6->detected_encoder;
 struct nouveau_drm *VAR_8 = FUNC_3(VAR_5->dev);
 struct dcb_output *VAR_9 = VAR_6->detected_encoder->dcb;
 struct drm_display_info *VAR_10 = ((void*)0);
 unsigned VAR_11 =
  VAR_3 && VAR_7->dcb->duallink_possible ? 2 : 1;

 if (FUNC_0(VAR_6->edid)) {
  VAR_10 = &VAR_6->base.display_info;
  VAR_11 = 1;
 }

 if (VAR_10) {
  if (VAR_4 > 0)
   return VAR_4 * 1000;



  if (VAR_8->client.device.info.chipset >= 0x120) {
   const int VAR_12 =
    VAR_10->hdmi.scdc.scrambling.supported ?
    594000 : 340000;
   return VAR_10->max_tmds_clock ?
    FUNC_1(VAR_10->max_tmds_clock, VAR_12) :
    VAR_12;
  }
  if (VAR_8->client.device.info.family >= VAR_2)
   return 297000;
  if (VAR_8->client.device.info.family >= VAR_1)
   return 225000;
 }

 if (VAR_9->location != VAR_0 ||
     VAR_8->client.device.info.chipset >= 0x46)
  return 165000 * VAR_11;
 else if (VAR_8->client.device.info.chipset >= 0x40)
  return 155000 * VAR_11;
 else if (VAR_8->client.device.info.chipset >= 0x18)
  return 135000 * VAR_11;
 else
  return 112000 * VAR_11;
}
