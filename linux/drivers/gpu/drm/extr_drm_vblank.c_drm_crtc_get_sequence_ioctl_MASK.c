
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_vblank_crtc {int enabled; } ;
struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ vblank_disable_immediate; struct drm_vblank_crtc* vblank; int irq_enabled; } ;
struct drm_crtc_get_sequence {int sequence_ns; int sequence; int active; int crtc_id; } ;
struct drm_crtc {int mutex; int enabled; TYPE_1__* state; } ;
typedef int ktime_t ;
struct TYPE_2__ {int enable; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct drm_device*,int ) ;
 struct drm_crtc* FUNC_3 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_4 (struct drm_crtc*) ;
 int FUNC_5 (struct drm_crtc*) ;
 int FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_device*,int,int *) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct drm_device *VAR_4, void *VAR_5,
    struct drm_file *VAR_6)
{
 struct drm_crtc *VAR_7;
 struct drm_vblank_crtc *VAR_8;
 int VAR_9;
 struct drm_crtc_get_sequence *VAR_10 = VAR_5;
 ktime_t VAR_11;
 bool VAR_12;
 int VAR_13;

 if (!FUNC_2(VAR_4, VAR_0))
  return -VAR_3;

 if (!VAR_4->irq_enabled)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_10->crtc_id);
 if (!VAR_7)
  return -VAR_2;

 VAR_9 = FUNC_4(VAR_7);

 VAR_8 = &VAR_4->vblank[VAR_9];
 VAR_12 = VAR_4->vblank_disable_immediate && FUNC_1(VAR_8->enabled);

 if (!VAR_12) {
  VAR_13 = FUNC_5(VAR_7);
  if (VAR_13) {
   FUNC_0("crtc %d failed to acquire vblank counter, %d\n", VAR_9, VAR_13);
   return VAR_13;
  }
 }
 FUNC_7(&VAR_7->mutex, ((void*)0));
 if (VAR_7->state)
  VAR_10->active = VAR_7->state->enable;
 else
  VAR_10->active = VAR_7->enabled;
 FUNC_8(&VAR_7->mutex);
 VAR_10->sequence = FUNC_9(VAR_4, VAR_9, &VAR_11);
 VAR_10->sequence_ns = FUNC_10(VAR_11);
 if (!VAR_12)
  FUNC_6(VAR_7);
 return 0;
}
