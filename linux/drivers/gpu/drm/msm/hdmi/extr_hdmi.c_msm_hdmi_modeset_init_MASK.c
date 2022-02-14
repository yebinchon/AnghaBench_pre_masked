
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int of_node; } ;
struct platform_device {TYPE_8__ dev; } ;
struct msm_drm_private {int num_connectors; TYPE_3__** connectors; int num_bridges; TYPE_3__** bridges; } ;
struct TYPE_12__ {int infoframe; } ;
struct hdmi {int irq; TYPE_3__* connector; TYPE_3__* bridge; struct platform_device* pdev; TYPE_1__ audio; struct drm_encoder* encoder; struct drm_device* dev; } ;
struct drm_encoder {TYPE_3__* bridge; } ;
struct drm_device {TYPE_8__* dev; struct msm_drm_private* dev_private; } ;
struct TYPE_14__ {TYPE_2__* funcs; } ;
struct TYPE_13__ {int (* destroy ) (TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_8__*,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_8__*,int,int ,int,char*,struct hdmi*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (struct hdmi*) ;
 TYPE_3__* FUNC_8 (struct hdmi*) ;
 int FUNC_9 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_10 (struct platform_device*,struct hdmi*) ;
 int FUNC_11 (TYPE_3__*) ;

int FUNC_12(struct hdmi *VAR_3,
  struct drm_device *VAR_4, struct drm_encoder *VAR_5)
{
 struct msm_drm_private *VAR_6 = VAR_4->dev_private;
 struct platform_device *VAR_7 = VAR_3->pdev;
 int VAR_8;

 VAR_3->dev = VAR_4;
 VAR_3->encoder = VAR_5;

 FUNC_4(&VAR_3->audio.infoframe);

 VAR_3->bridge = FUNC_7(VAR_3);
 if (FUNC_1(VAR_3->bridge)) {
  VAR_8 = FUNC_2(VAR_3->bridge);
  FUNC_0(VAR_4->dev, "failed to create HDMI bridge: %d\n", VAR_8);
  VAR_3->bridge = ((void*)0);
  goto fail;
 }

 VAR_3->connector = FUNC_8(VAR_3);
 if (FUNC_1(VAR_3->connector)) {
  VAR_8 = FUNC_2(VAR_3->connector);
  FUNC_0(VAR_4->dev, "failed to create HDMI connector: %d\n", VAR_8);
  VAR_3->connector = ((void*)0);
  goto fail;
 }

 VAR_3->irq = FUNC_5(VAR_7->dev.of_node, 0);
 if (VAR_3->irq < 0) {
  VAR_8 = VAR_3->irq;
  FUNC_0(VAR_4->dev, "failed to get irq: %d\n", VAR_8);
  goto fail;
 }

 VAR_8 = FUNC_3(&VAR_7->dev, VAR_3->irq,
   VAR_2, VAR_1 | VAR_0,
   "hdmi_isr", VAR_3);
 if (VAR_8 < 0) {
  FUNC_0(VAR_4->dev, "failed to request IRQ%u: %d\n",
    VAR_3->irq, VAR_8);
  goto fail;
 }

 VAR_8 = FUNC_9(VAR_3->connector);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_3->pdev->dev, "failed to enable HPD: %d\n", VAR_8);
  goto fail;
 }

 VAR_5->bridge = VAR_3->bridge;

 VAR_6->bridges[VAR_6->num_bridges++] = VAR_3->bridge;
 VAR_6->connectors[VAR_6->num_connectors++] = VAR_3->connector;

 FUNC_10(VAR_7, VAR_3);

 return 0;

fail:

 if (VAR_3->bridge) {
  FUNC_6(VAR_3->bridge);
  VAR_3->bridge = ((void*)0);
 }
 if (VAR_3->connector) {
  VAR_3->connector->funcs->destroy(VAR_3->connector);
  VAR_3->connector = ((void*)0);
 }

 return VAR_8;
}
