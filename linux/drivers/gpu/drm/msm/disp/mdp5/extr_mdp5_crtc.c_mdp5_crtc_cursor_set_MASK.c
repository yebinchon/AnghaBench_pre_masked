
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct platform_device {int dev; } ;
struct msm_kms {int aspace; } ;
struct mdp5_pipeline {scalar_t__ r_mixer; } ;
struct TYPE_3__ {struct msm_kms base; } ;
struct mdp5_kms {TYPE_1__ base; struct platform_device* pdev; } ;
struct mdp5_ctl {int dummy; } ;
struct mdp5_crtc_state {struct mdp5_pipeline pipeline; struct mdp5_ctl* ctl; } ;
struct TYPE_4__ {int lock; void* height; void* width; struct drm_gem_object* scanout_bo; scalar_t__ iova; } ;
struct mdp5_crtc {int unref_cursor_work; TYPE_2__ cursor; int lm_cursor_enabled; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dev; } ;
struct drm_crtc {struct drm_device* dev; int state; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_crtc*,void*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_5 (struct drm_file*,void*) ;
 struct mdp5_kms* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (struct mdp5_ctl*,struct mdp5_pipeline*,int ,int) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (struct drm_gem_object*,int ,scalar_t__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct drm_crtc*,int ) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 struct mdp5_crtc* FUNC_16 (struct drm_crtc*) ;
 struct mdp5_crtc_state* FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct drm_crtc *VAR_5,
  struct drm_file *VAR_6, uint32_t VAR_7,
  uint32_t VAR_8, uint32_t VAR_9)
{
 struct mdp5_crtc *VAR_10 = FUNC_16(VAR_5);
 struct mdp5_crtc_state *VAR_11 = FUNC_17(VAR_5->state);
 struct mdp5_pipeline *VAR_12 = &VAR_11->pipeline;
 struct drm_device *VAR_13 = VAR_5->dev;
 struct mdp5_kms *VAR_14 = FUNC_6(VAR_5);
 struct platform_device *VAR_15 = VAR_14->pdev;
 struct msm_kms *VAR_16 = &VAR_14->base.base;
 struct drm_gem_object *VAR_17, *VAR_18 = ((void*)0);
 struct mdp5_ctl *VAR_19;
 int VAR_20;
 uint32_t VAR_21 = FUNC_9(0);
 bool VAR_22 = 1;
 unsigned long VAR_23;

 if (!VAR_10->lm_cursor_enabled) {
  FUNC_3(VAR_13->dev,
    "cursor_set is deprecated with cursor planes\n");
  return -VAR_2;
 }

 if ((VAR_8 > VAR_1) || (VAR_9 > VAR_0)) {
  FUNC_1(VAR_13->dev, "bad cursor size: %dx%d\n", VAR_8, VAR_9);
  return -VAR_2;
 }

 VAR_19 = VAR_11->ctl;
 if (!VAR_19)
  return -VAR_2;


 if (VAR_11->pipeline.r_mixer)
  return -VAR_2;

 if (!VAR_7) {
  FUNC_0("Cursor off");
  VAR_22 = 0;
  VAR_10->cursor.iova = 0;
  FUNC_11(&VAR_15->dev);
  goto set_cursor;
 }

 VAR_17 = FUNC_5(VAR_6, VAR_7);
 if (!VAR_17)
  return -VAR_3;

 VAR_20 = FUNC_10(VAR_17, VAR_16->aspace,
   &VAR_10->cursor.iova);
 if (VAR_20)
  return -VAR_2;

 FUNC_11(&VAR_15->dev);

 FUNC_14(&VAR_10->cursor.lock, VAR_23);
 VAR_18 = VAR_10->cursor.scanout_bo;

 VAR_10->cursor.scanout_bo = VAR_17;
 VAR_10->cursor.width = VAR_8;
 VAR_10->cursor.height = VAR_9;

 FUNC_7(VAR_5);

 FUNC_15(&VAR_10->cursor.lock, VAR_23);

set_cursor:
 VAR_20 = FUNC_8(VAR_19, VAR_12, 0, VAR_22);
 if (VAR_20) {
  FUNC_1(VAR_13->dev, "failed to %sable cursor: %d\n",
    VAR_22 ? "en" : "dis", VAR_20);
  goto end;
 }

 FUNC_2(VAR_5, VAR_21);

end:
 FUNC_12(&VAR_15->dev);
 if (VAR_18) {
  FUNC_4(&VAR_10->unref_cursor_work, VAR_18);

  FUNC_13(VAR_5, VAR_4);
 }
 return VAR_20;
}
