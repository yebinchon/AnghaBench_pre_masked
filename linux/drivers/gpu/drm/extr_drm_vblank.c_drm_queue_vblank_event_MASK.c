
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {void* sequence; } ;
struct TYPE_8__ {int signal; } ;
union drm_wait_vblank {TYPE_5__ reply; TYPE_1__ request; } ;
typedef void* u64 ;
struct drm_vblank_crtc {int enabled; } ;
struct TYPE_13__ {int link; } ;
struct TYPE_14__ {int length; int type; } ;
struct TYPE_9__ {scalar_t__ crtc_id; int user_data; } ;
struct TYPE_11__ {TYPE_7__ base; TYPE_2__ vbl; } ;
struct drm_pending_vblank_event {unsigned int pipe; TYPE_6__ base; void* sequence; TYPE_4__ event; } ;
struct drm_file {int dummy; } ;
struct drm_device {int event_lock; int vblank_event_list; struct drm_vblank_crtc* vblank; } ;
struct TYPE_10__ {scalar_t__ id; } ;
struct drm_crtc {TYPE_3__ base; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (char*,void*,void*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_device*,int ) ;
 struct drm_crtc* FUNC_3 (struct drm_device*,unsigned int) ;
 int FUNC_4 (struct drm_device*,struct drm_file*,TYPE_6__*,TYPE_7__*) ;
 void* FUNC_5 (struct drm_device*,unsigned int,int *) ;
 int FUNC_6 (struct drm_device*,unsigned int) ;
 int FUNC_7 (struct drm_pending_vblank_event*) ;
 struct drm_pending_vblank_event* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct drm_device*,struct drm_pending_vblank_event*,void*,int ) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct drm_file*,unsigned int,void*) ;
 scalar_t__ FUNC_14 (void*,void*) ;

__attribute__((used)) static int FUNC_15(struct drm_device *VAR_5, unsigned int VAR_6,
      u64 VAR_7,
      union drm_wait_vblank *VAR_8,
      struct drm_file *VAR_9)
{
 struct drm_vblank_crtc *VAR_10 = &VAR_5->vblank[VAR_6];
 struct drm_pending_vblank_event *VAR_11;
 ktime_t VAR_12;
 unsigned long VAR_13;
 u64 VAR_14;
 int VAR_15;

 VAR_11 = FUNC_8(sizeof(*VAR_11), VAR_4);
 if (VAR_11 == ((void*)0)) {
  VAR_15 = -VAR_3;
  goto err_put;
 }

 VAR_11->pipe = VAR_6;
 VAR_11->event.base.type = VAR_1;
 VAR_11->event.base.length = sizeof(VAR_11->event.vbl);
 VAR_11->event.vbl.user_data = VAR_8->request.signal;
 VAR_11->event.vbl.crtc_id = 0;
 if (FUNC_2(VAR_5, VAR_0)) {
  struct drm_crtc *VAR_16 = FUNC_3(VAR_5, VAR_6);
  if (VAR_16)
   VAR_11->event.vbl.crtc_id = VAR_16->base.id;
 }

 FUNC_11(&VAR_5->event_lock, VAR_13);







 if (!FUNC_1(VAR_10->enabled)) {
  VAR_15 = -VAR_2;
  goto err_unlock;
 }

 VAR_15 = FUNC_4(VAR_5, VAR_9, &VAR_11->base,
         &VAR_11->event.base);

 if (VAR_15)
  goto err_unlock;

 VAR_14 = FUNC_5(VAR_5, VAR_6, &VAR_12);

 FUNC_0("event on vblank count %llu, current %llu, crtc %u\n",
    VAR_7, VAR_14, VAR_6);

 FUNC_13(VAR_9, VAR_6, VAR_7);

 VAR_11->sequence = VAR_7;
 if (FUNC_14(VAR_14, VAR_7)) {
  FUNC_6(VAR_5, VAR_6);
  FUNC_10(VAR_5, VAR_11, VAR_14, VAR_12);
  VAR_8->reply.sequence = VAR_14;
 } else {

  FUNC_9(&VAR_11->base.link, &VAR_5->vblank_event_list);
  VAR_8->reply.sequence = VAR_7;
 }

 FUNC_12(&VAR_5->event_lock, VAR_13);

 return 0;

err_unlock:
 FUNC_12(&VAR_5->event_lock, VAR_13);
 FUNC_7(VAR_11);
err_put:
 FUNC_6(VAR_5, VAR_6);
 return VAR_15;
}
