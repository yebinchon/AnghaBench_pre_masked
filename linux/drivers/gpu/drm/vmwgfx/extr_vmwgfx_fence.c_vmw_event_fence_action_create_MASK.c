
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vmw_fence_obj {int dummy; } ;
struct vmw_fence_manager {TYPE_1__* dev_priv; } ;
struct TYPE_6__ {int length; int type; } ;
struct TYPE_5__ {int tv_usec; int tv_sec; TYPE_3__ base; int user_data; } ;
struct vmw_event_fence_pending {int base; TYPE_2__ event; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {struct drm_device* dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_device*,int *) ;
 int FUNC_2 (struct drm_device*,struct drm_file*,int *,TYPE_3__*) ;
 struct vmw_fence_manager* FUNC_3 (struct vmw_fence_obj*) ;
 int FUNC_4 (struct vmw_event_fence_pending*) ;
 struct vmw_event_fence_pending* FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct drm_file*,struct vmw_fence_obj*,int *,int *,int *,int) ;

__attribute__((used)) static int FUNC_8(struct drm_file *VAR_4,
      struct vmw_fence_obj *VAR_5,
      uint32_t VAR_6,
      uint64_t VAR_7,
      bool VAR_8)
{
 struct vmw_event_fence_pending *VAR_9;
 struct vmw_fence_manager *VAR_10 = FUNC_3(VAR_5);
 struct drm_device *VAR_11 = VAR_10->dev_priv->dev;
 int VAR_12;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_3);
 if (FUNC_6(!VAR_9)) {
  FUNC_0("Failed to allocate an event.\n");
  VAR_12 = -VAR_2;
  goto out_no_space;
 }

 VAR_9->event.base.type = VAR_0;
 VAR_9->event.base.length = sizeof(*VAR_9);
 VAR_9->event.user_data = VAR_7;

 VAR_12 = FUNC_2(VAR_11, VAR_4, &VAR_9->base, &VAR_9->event.base);

 if (FUNC_6(VAR_12 != 0)) {
  FUNC_0("Failed to allocate event space for this file.\n");
  FUNC_4(VAR_9);
  goto out_no_space;
 }

 if (VAR_6 & VAR_1)
  VAR_12 = FUNC_7(VAR_4, VAR_5,
         &VAR_9->base,
         &VAR_9->event.tv_sec,
         &VAR_9->event.tv_usec,
         VAR_8);
 else
  VAR_12 = FUNC_7(VAR_4, VAR_5,
         &VAR_9->base,
         ((void*)0),
         ((void*)0),
         VAR_8);
 if (VAR_12 != 0)
  goto out_no_queue;

 return 0;

out_no_queue:
 FUNC_1(VAR_11, &VAR_9->base);
out_no_space:
 return VAR_12;
}
