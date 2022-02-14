
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tilcdc_drm_private {struct drm_crtc* crtc; scalar_t__ is_componentized; } ;
struct drm_crtc {int port; } ;
struct tilcdc_crtc {int primary; int recover_work; int irq_lock; int frame_done_wq; int enable_lock; struct drm_crtc base; int * palette_base; int palette_dma_handle; int palette_loaded; } ;
struct drm_device {TYPE_1__* dev; struct tilcdc_drm_private* dev_private; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 struct tilcdc_crtc* FUNC_2 (TYPE_1__*,int,int) ;
 int * FUNC_3 (TYPE_1__*,int ,int *,int) ;
 int FUNC_4 (struct drm_crtc*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_crtc*,int *,int *,int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct drm_crtc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (struct drm_device*,int *) ;

int FUNC_13(struct drm_device *VAR_9)
{
 struct tilcdc_drm_private *VAR_10 = VAR_9->dev_private;
 struct tilcdc_crtc *VAR_11;
 struct drm_crtc *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_9->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 FUNC_6(&VAR_11->palette_loaded);
 VAR_11->palette_base = FUNC_3(VAR_9->dev,
     VAR_4,
     &VAR_11->palette_dma_handle,
     VAR_2 | VAR_5);
 if (!VAR_11->palette_base)
  return -VAR_1;
 *VAR_11->palette_base = VAR_3;

 VAR_12 = &VAR_11->base;

 VAR_13 = FUNC_12(VAR_9, &VAR_11->primary);
 if (VAR_13 < 0)
  goto fail;

 FUNC_8(&VAR_11->enable_lock);

 FUNC_7(&VAR_11->frame_done_wq);

 FUNC_10(&VAR_11->irq_lock);
 FUNC_0(&VAR_11->recover_work, VAR_8);

 VAR_13 = FUNC_5(VAR_9, VAR_12,
     &VAR_11->primary,
     ((void*)0),
     &VAR_6,
     "tilcdc crtc");
 if (VAR_13 < 0)
  goto fail;

 FUNC_4(VAR_12, &VAR_7);

 if (VAR_10->is_componentized) {
  VAR_12->port = FUNC_9(VAR_9->dev->of_node, 0);
  if (!VAR_12->port) {
   FUNC_1(VAR_9->dev, "Port node not found in %pOF\n",
    VAR_9->dev->of_node);
   VAR_13 = -VAR_0;
   goto fail;
  }
 }

 VAR_10->crtc = VAR_12;
 return 0;

fail:
 FUNC_11(VAR_12);
 return VAR_13;
}
