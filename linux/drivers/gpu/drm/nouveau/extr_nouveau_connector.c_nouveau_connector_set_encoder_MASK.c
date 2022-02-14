
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nouveau_encoder {TYPE_6__* dcb; } ;
struct TYPE_7__ {scalar_t__ family; } ;
struct TYPE_8__ {TYPE_1__ info; } ;
struct TYPE_9__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct nouveau_connector {scalar_t__ type; struct nouveau_encoder* detected_encoder; } ;
struct TYPE_11__ {int dvi_i_subconnector_property; } ;
struct drm_device {TYPE_5__ mode_config; TYPE_4__* pdev; } ;
struct drm_connector {int interlace_allowed; int doublescan_allowed; int base; struct drm_device* dev; } ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_10__ {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *,int ,int ) ;
 struct nouveau_connector* FUNC_1 (struct drm_connector*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_3(struct drm_connector *VAR_8,
         struct nouveau_encoder *VAR_9)
{
 struct nouveau_connector *VAR_10 = FUNC_1(VAR_8);
 struct nouveau_drm *VAR_11 = FUNC_2(VAR_8->dev);
 struct drm_device *VAR_12 = VAR_8->dev;

 if (VAR_10->detected_encoder == VAR_9)
  return;
 VAR_10->detected_encoder = VAR_9;

 if (VAR_11->client.device.info.family >= VAR_7) {
  VAR_8->interlace_allowed = 1;
  VAR_8->doublescan_allowed = 1;
 } else
 if (VAR_9->dcb->type == VAR_1 ||
     VAR_9->dcb->type == VAR_2) {
  VAR_8->doublescan_allowed = 0;
  VAR_8->interlace_allowed = 0;
 } else {
  VAR_8->doublescan_allowed = 1;
  if (VAR_11->client.device.info.family == VAR_6 ||
      (VAR_11->client.device.info.family == VAR_5 &&
       (VAR_12->pdev->device & 0x0ff0) != 0x0100 &&
       (VAR_12->pdev->device & 0x0ff0) != 0x0150))

   VAR_8->interlace_allowed = 0;
  else
   VAR_8->interlace_allowed = 1;
 }

 if (VAR_10->type == VAR_0) {
  FUNC_0(&VAR_8->base,
   VAR_12->mode_config.dvi_i_subconnector_property,
   VAR_9->dcb->type == VAR_2 ?
   VAR_4 :
   VAR_3);
 }
}
