
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_drm_private {int num_crtcs; struct drm_plane** crtcs; int num_planes; struct drm_plane** planes; } ;
struct mdp4_kms {struct drm_device* dev; } ;
struct drm_plane {int dummy; } ;
struct drm_device {int dev; struct msm_drm_private* dev_private; } ;
typedef struct drm_plane drm_crtc ;
typedef enum mdp4_pipe { ____Placeholder_mdp4_pipe } mdp4_pipe ;
typedef enum mdp4_dma { ____Placeholder_mdp4_dma } mdp4_dma ;


 int FUNC_0 (int const*) ;


 int FUNC_1 (int ,char*,...) ;



 scalar_t__ FUNC_2 (struct drm_plane*) ;
 int FUNC_3 (struct drm_plane*) ;




 struct drm_plane* FUNC_4 (struct drm_device*,struct drm_plane*,int ,int,int const) ;
 int FUNC_5 (struct mdp4_kms*,int const) ;
 struct drm_plane* FUNC_6 (struct drm_device*,int const,int) ;

__attribute__((used)) static int FUNC_7(struct mdp4_kms *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct msm_drm_private *VAR_2 = VAR_1->dev_private;
 struct drm_plane *VAR_3;
 struct drm_crtc *VAR_4;
 int VAR_5, VAR_6;
 static const enum mdp4_pipe VAR_7[] = {
  131, 130,
 };
 static const enum mdp4_pipe VAR_8[] = {
  129, 128,
 };
 static const enum mdp4_dma VAR_9[] = {
  135, 136,
 };
 static const char * const VAR_10[] = {
  "DMA_P", "DMA_E",
 };
 static const int VAR_11[] = {
  133,
  134,
  132,
 };


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_8); VAR_5++) {
  VAR_3 = FUNC_6(VAR_1, VAR_8[VAR_5], 0);
  if (FUNC_2(VAR_3)) {
   FUNC_1(VAR_1->dev,
    "failed to construct plane for VG%d\n", VAR_5 + 1);
   VAR_6 = FUNC_3(VAR_3);
   goto fail;
  }
  VAR_2->planes[VAR_2->num_planes++] = VAR_3;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_9); VAR_5++) {
  VAR_3 = FUNC_6(VAR_1, VAR_7[VAR_5], 1);
  if (FUNC_2(VAR_3)) {
   FUNC_1(VAR_1->dev,
    "failed to construct plane for RGB%d\n", VAR_5 + 1);
   VAR_6 = FUNC_3(VAR_3);
   goto fail;
  }

  VAR_4 = FUNC_4(VAR_1, VAR_3, VAR_2->num_crtcs, VAR_5,
    VAR_9[VAR_5]);
  if (FUNC_2(VAR_4)) {
   FUNC_1(VAR_1->dev, "failed to construct crtc for %s\n",
    VAR_10[VAR_5]);
   VAR_6 = FUNC_3(VAR_4);
   goto fail;
  }

  VAR_2->crtcs[VAR_2->num_crtcs++] = VAR_4;
 }
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_11); VAR_5++) {
  VAR_6 = FUNC_5(VAR_0, VAR_11[VAR_5]);
  if (VAR_6) {
   FUNC_1(VAR_1->dev, "failed to initialize intf: %d, %d\n",
    VAR_5, VAR_6);
   goto fail;
  }
 }

 return 0;

fail:
 return VAR_6;
}
