
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct komeda_pipeline_state {scalar_t__ active_comps; } ;
struct komeda_pipeline {int id; } ;
struct komeda_dev {TYPE_2__* funcs; } ;
struct komeda_crtc_state {int active_pipes; int affected_pipes; } ;
struct komeda_crtc {struct completion* disable_done; struct komeda_pipeline* master; struct komeda_pipeline* slave; } ;
struct drm_crtc_state {int state; } ;
struct drm_crtc {TYPE_4__* dev; TYPE_3__* state; } ;
struct completion {int dummy; } ;
struct TYPE_8__ {int event_lock; struct komeda_dev* dev_private; } ;
struct TYPE_7__ {scalar_t__ active; TYPE_1__* commit; } ;
struct TYPE_6__ {int (* flush ) (struct komeda_dev*,int ,int ) ;} ;
struct TYPE_5__ {struct completion flip_done; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct completion*) ;
 int FUNC_6 (struct komeda_crtc*) ;
 int FUNC_7 (struct komeda_pipeline*,int ) ;
 struct komeda_pipeline_state* FUNC_8 (struct komeda_pipeline*,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct komeda_dev*,int ,int ) ;
 struct komeda_crtc* FUNC_12 (struct drm_crtc*) ;
 struct komeda_crtc_state* FUNC_13 (struct drm_crtc_state*) ;
 int FUNC_14 (struct completion*,int ) ;

__attribute__((used)) static void
FUNC_15(struct drm_crtc *VAR_1,
      struct drm_crtc_state *VAR_2)
{
 struct komeda_crtc *VAR_3 = FUNC_12(VAR_1);
 struct komeda_crtc_state *VAR_4 = FUNC_13(VAR_2);
 struct komeda_dev *VAR_5 = VAR_1->dev->dev_private;
 struct komeda_pipeline *VAR_6 = VAR_3->master;
 struct komeda_pipeline *VAR_7 = VAR_3->slave;
 struct completion *VAR_8 = &VAR_1->state->commit->flip_done;
 struct completion VAR_9;
 int VAR_10;

 FUNC_0("CRTC%d_DISABLE: active_pipes: 0x%x, affected: 0x%x.\n",
    FUNC_2(VAR_1),
    VAR_4->active_pipes, VAR_4->affected_pipes);

 if (VAR_7 && FUNC_4(VAR_7->id, VAR_4->active_pipes))
  FUNC_7(VAR_7, VAR_2->state);

 if (FUNC_4(VAR_6->id, VAR_4->active_pipes))
  FUNC_7(VAR_6, VAR_2->state);
 if (VAR_1->state->active) {
  struct komeda_pipeline_state *VAR_11;

  VAR_11 = FUNC_8(VAR_6, VAR_2->state);
  VAR_11->active_comps = 0;

  FUNC_5(&VAR_9);
  VAR_3->disable_done = &VAR_9;
  VAR_8 = &VAR_9;
 }

 VAR_5->funcs->flush(VAR_5, VAR_6->id, 0);


 VAR_10 = FUNC_14(VAR_8, VAR_0);
 if (VAR_10 == 0) {
  FUNC_1("disable pipeline%d timeout.\n", VAR_3->master->id);
  if (VAR_1->state->active) {
   unsigned long VAR_12;

   FUNC_9(&VAR_1->dev->event_lock, VAR_12);
   VAR_3->disable_done = ((void*)0);
   FUNC_10(&VAR_1->dev->event_lock, VAR_12);
  }
 }

 FUNC_3(VAR_1);
 FUNC_6(VAR_3);
}
