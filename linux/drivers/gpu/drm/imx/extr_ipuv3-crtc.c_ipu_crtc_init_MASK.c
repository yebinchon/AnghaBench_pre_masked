
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ipu_soc {int dummy; } ;
struct drm_crtc {int port; } ;
struct ipu_crtc {TYPE_1__** plane; int irq; TYPE_4__* dev; struct drm_crtc base; } ;
struct ipu_client_platformdata {scalar_t__ dp; int * dma; int of_node; } ;
struct drm_device {int dummy; } ;
struct TYPE_9__ {int parent; } ;
struct TYPE_8__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 struct ipu_soc* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ,int ,char*,struct ipu_crtc*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_crtc*,int *) ;
 int FUNC_7 (struct drm_device*,struct drm_crtc*,int *,int *,int *,int *) ;
 int FUNC_8 (struct drm_crtc*) ;
 int VAR_5 ;
 int FUNC_9 (struct ipu_crtc*,struct ipu_client_platformdata*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_10 (TYPE_1__*) ;
 void* FUNC_11 (struct drm_device*,struct ipu_soc*,int ,int,int ,int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (struct ipu_crtc*) ;

__attribute__((used)) static int FUNC_15(struct ipu_crtc *VAR_8,
 struct ipu_client_platformdata *VAR_9, struct drm_device *VAR_10)
{
 struct ipu_soc *VAR_11 = FUNC_3(VAR_8->dev->parent);
 struct drm_crtc *VAR_12 = &VAR_8->base;
 int VAR_13 = -VAR_2;
 int VAR_14;

 VAR_14 = FUNC_9(VAR_8, VAR_9);
 if (VAR_14) {
  FUNC_2(VAR_8->dev, "getting resources failed with %d.\n",
    VAR_14);
  return VAR_14;
 }

 if (VAR_9->dp >= 0)
  VAR_13 = VAR_3;
 VAR_8->plane[0] = FUNC_11(VAR_10, VAR_11, VAR_9->dma[0], VAR_13, 0,
         VAR_1);
 if (FUNC_0(VAR_8->plane[0])) {
  VAR_14 = FUNC_1(VAR_8->plane[0]);
  goto err_put_resources;
 }

 VAR_12->port = VAR_9->of_node;
 FUNC_6(VAR_12, &VAR_6);
 FUNC_7(VAR_10, VAR_12, &VAR_8->plane[0]->base, ((void*)0),
      &VAR_5, ((void*)0));

 VAR_14 = FUNC_10(VAR_8->plane[0]);
 if (VAR_14) {
  FUNC_2(VAR_8->dev, "getting plane 0 resources failed with %d.\n",
   VAR_14);
  goto err_put_resources;
 }


 if (VAR_9->dp >= 0 && VAR_9->dma[1] > 0) {
  VAR_8->plane[1] = FUNC_11(VAR_10, VAR_11, VAR_9->dma[1],
      VAR_4,
      FUNC_8(&VAR_8->base),
      VAR_0);
  if (FUNC_0(VAR_8->plane[1])) {
   VAR_8->plane[1] = ((void*)0);
  } else {
   VAR_14 = FUNC_10(VAR_8->plane[1]);
   if (VAR_14) {
    FUNC_2(VAR_8->dev, "getting plane 1 "
     "resources failed with %d.\n", VAR_14);
    goto err_put_plane0_res;
   }
  }
 }

 VAR_8->irq = FUNC_12(VAR_8->plane[0]);
 VAR_14 = FUNC_4(VAR_8->dev, VAR_8->irq, VAR_7, 0,
   "imx_drm", VAR_8);
 if (VAR_14 < 0) {
  FUNC_2(VAR_8->dev, "irq request failed with %d.\n", VAR_14);
  goto err_put_plane1_res;
 }

 FUNC_5(VAR_8->irq);

 return 0;

err_put_plane1_res:
 if (VAR_8->plane[1])
  FUNC_13(VAR_8->plane[1]);
err_put_plane0_res:
 FUNC_13(VAR_8->plane[0]);
err_put_resources:
 FUNC_14(VAR_8);

 return VAR_14;
}
