
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_pending_timer {int timer; } ;
struct msm_kms {unsigned int pending_crtc_mask; TYPE_1__* funcs; int commit_lock; struct msm_pending_timer* pending_timers; } ;
struct msm_drm_private {struct msm_kms* kms; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct drm_atomic_state {struct drm_device* dev; } ;
typedef int ktime_t ;
struct TYPE_2__ {int (* disable_commit ) (struct msm_kms*) ;int (* complete_commit ) (struct msm_kms*,unsigned int) ;int (* wait_flush ) (struct msm_kms*,unsigned int) ;int (* flush_commit ) (struct msm_kms*,unsigned int) ;int (* vsync_time ) (struct msm_kms*,struct drm_crtc*) ;int (* prepare_commit ) (struct msm_kms*,struct drm_atomic_state*) ;int (* enable_commit ) (struct msm_kms*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_atomic_state*,struct drm_crtc**) ;
 int FUNC_2 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_5 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_6 (struct drm_device*,struct drm_atomic_state*,int ) ;
 size_t FUNC_7 (struct drm_crtc*) ;
 unsigned int FUNC_8 (struct drm_crtc*) ;
 unsigned int FUNC_9 (struct drm_atomic_state*) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct msm_kms*) ;
 int FUNC_16 (struct msm_kms*,unsigned int) ;
 int FUNC_17 (struct msm_kms*,struct drm_atomic_state*) ;
 int FUNC_18 (struct msm_kms*,struct drm_crtc*) ;
 int FUNC_19 (struct msm_kms*) ;
 int FUNC_20 (struct msm_kms*,unsigned int) ;
 int FUNC_21 (struct msm_kms*,unsigned int) ;
 int FUNC_22 (struct msm_kms*,unsigned int) ;
 int FUNC_23 (struct msm_kms*) ;
 int FUNC_24 (int,unsigned int) ;
 int FUNC_25 (int,unsigned int) ;
 int FUNC_26 (unsigned int) ;
 int FUNC_27 (unsigned int) ;
 int FUNC_28 (unsigned int) ;

void FUNC_29(struct drm_atomic_state *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->dev;
 struct msm_drm_private *VAR_3 = VAR_2->dev_private;
 struct msm_kms *VAR_4 = VAR_3->kms;
 struct drm_crtc *VAR_5 = ((void*)0);
 unsigned VAR_6 = FUNC_9(VAR_1);
 bool VAR_7 = VAR_4->funcs->vsync_time &&
   FUNC_1(VAR_1, &VAR_5);

 FUNC_25(VAR_7, VAR_6);

 VAR_4->funcs->enable_commit(VAR_4);





 FUNC_28(VAR_6);
 VAR_4->funcs->wait_flush(VAR_4, VAR_6);
 FUNC_27(VAR_6);

 FUNC_13(&VAR_4->commit_lock);





 VAR_4->funcs->prepare_commit(VAR_4, VAR_1);




 FUNC_4(VAR_2, VAR_1);
 FUNC_6(VAR_2, VAR_1, 0);
 FUNC_5(VAR_2, VAR_1);

 if (VAR_7) {
  struct msm_pending_timer *VAR_8 =
   &VAR_4->pending_timers[FUNC_7(VAR_5)];


  FUNC_0(VAR_6 != FUNC_8(VAR_5));





  if (!(VAR_4->pending_crtc_mask & VAR_6)) {
   ktime_t VAR_9, VAR_10;

   VAR_4->pending_crtc_mask |= VAR_6;

   VAR_9 = VAR_4->funcs->vsync_time(VAR_4, VAR_5);
   VAR_10 = FUNC_11(VAR_9, FUNC_12(1));

   FUNC_10(&VAR_8->timer, VAR_10,
     VAR_0);
  }

  VAR_4->funcs->disable_commit(VAR_4);
  FUNC_14(&VAR_4->commit_lock);






  FUNC_3(VAR_1);
  FUNC_2(VAR_2, VAR_1);

  FUNC_24(VAR_7, VAR_6);

  return;
 }





 VAR_4->pending_crtc_mask &= ~VAR_6;




 FUNC_26(VAR_6);
 VAR_4->funcs->flush_commit(VAR_4, VAR_6);
 FUNC_14(&VAR_4->commit_lock);




 FUNC_28(VAR_6);
 VAR_4->funcs->wait_flush(VAR_4, VAR_6);
 FUNC_27(VAR_6);

 FUNC_13(&VAR_4->commit_lock);
 VAR_4->funcs->complete_commit(VAR_4, VAR_6);
 FUNC_14(&VAR_4->commit_lock);
 VAR_4->funcs->disable_commit(VAR_4);

 FUNC_3(VAR_1);
 FUNC_2(VAR_2, VAR_1);

 FUNC_24(VAR_7, VAR_6);
}
