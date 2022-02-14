
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct drm_plane {int dummy; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct TYPE_3__ {int id; } ;
struct drm_crtc {TYPE_1__ base; struct drm_device* dev; } ;
struct dpu_kms {int dummy; } ;
struct dpu_crtc {int name; int event_lock; TYPE_2__* frame_events; int frame_event_list; int frame_done_comp; int frame_pending; int spin_lock; struct drm_crtc base; } ;
struct TYPE_4__ {int work; int list; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 struct drm_crtc* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct drm_crtc*,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_crtc*,struct drm_plane*,struct drm_plane*,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 struct dpu_crtc* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,int ,char*,int) ;
 int FUNC_12 (int *) ;
 struct dpu_kms* FUNC_13 (int ) ;

struct drm_crtc *FUNC_14(struct drm_device *VAR_6, struct drm_plane *VAR_7,
    struct drm_plane *VAR_8)
{
 struct drm_crtc *VAR_9 = ((void*)0);
 struct dpu_crtc *VAR_10 = ((void*)0);
 struct msm_drm_private *VAR_11 = ((void*)0);
 struct dpu_kms *VAR_12 = ((void*)0);
 int VAR_13;

 VAR_11 = VAR_6->dev_private;
 VAR_12 = FUNC_13(VAR_11->kms);

 VAR_10 = FUNC_9(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return FUNC_2(-VAR_1);

 VAR_9 = &VAR_10->base;
 VAR_9->dev = VAR_6;

 FUNC_12(&VAR_10->spin_lock);
 FUNC_4(&VAR_10->frame_pending, 0);

 FUNC_7(&VAR_10->frame_done_comp);

 FUNC_3(&VAR_10->frame_event_list);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_10->frame_events); VAR_13++) {
  FUNC_3(&VAR_10->frame_events[VAR_13].list);
  FUNC_10(&VAR_10->frame_events[VAR_13].list,
    &VAR_10->frame_event_list);
  FUNC_8(&VAR_10->frame_events[VAR_13].work,
    VAR_3);
 }

 FUNC_6(VAR_6, VAR_9, VAR_7, VAR_8, &VAR_4,
    ((void*)0));

 FUNC_5(VAR_9, &VAR_5);


 FUNC_11(VAR_10->name, VAR_0, "crtc%u", VAR_9->base.id);


 FUNC_12(&VAR_10->event_lock);

 FUNC_1("%s: successfully initialized crtc\n", VAR_10->name);
 return VAR_9;
}
