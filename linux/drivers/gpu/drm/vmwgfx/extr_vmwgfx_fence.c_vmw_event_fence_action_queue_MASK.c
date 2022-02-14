
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct vmw_fence_obj {int dummy; } ;
struct vmw_fence_manager {TYPE_1__* dev_priv; } ;
struct TYPE_4__ {int type; int cleanup; int seq_passed; } ;
struct vmw_event_fence_action {TYPE_2__ action; int * tv_usec; int * tv_sec; int dev; int fence; struct drm_pending_event* event; } ;
struct drm_pending_event {int dummy; } ;
struct drm_file {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vmw_fence_manager* FUNC_0 (struct vmw_fence_obj*) ;
 struct vmw_event_fence_action* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct vmw_fence_obj*,TYPE_2__*) ;
 int FUNC_4 (struct vmw_fence_obj*) ;

int FUNC_5(struct drm_file *VAR_5,
     struct vmw_fence_obj *VAR_6,
     struct drm_pending_event *VAR_7,
     uint32_t *VAR_8,
     uint32_t *VAR_9,
     bool VAR_10)
{
 struct vmw_event_fence_action *VAR_11;
 struct vmw_fence_manager *VAR_12 = FUNC_0(VAR_6);

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_1);
 if (FUNC_2(!VAR_11))
  return -VAR_0;

 VAR_11->event = VAR_7;

 VAR_11->action.seq_passed = VAR_4;
 VAR_11->action.cleanup = VAR_3;
 VAR_11->action.type = VAR_2;

 VAR_11->fence = FUNC_4(VAR_6);
 VAR_11->dev = VAR_12->dev_priv->dev;
 VAR_11->tv_sec = VAR_8;
 VAR_11->tv_usec = VAR_9;

 FUNC_3(VAR_6, &VAR_11->action);

 return 0;
}
