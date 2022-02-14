
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_property {struct drm_device* dev; } ;
struct drm_modeset_acquire_ctx {int dummy; } ;
struct drm_mode_object {scalar_t__ type; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {TYPE_2__* dev; struct drm_modeset_acquire_ctx* acquire_ctx; } ;
struct TYPE_3__ {struct drm_property* dpms_property; } ;
struct TYPE_4__ {TYPE_1__ mode_config; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_atomic_state*,int ,int ) ;
 int FUNC_2 (struct drm_atomic_state*,struct drm_file*,struct drm_mode_object*,struct drm_property*,int ) ;
 struct drm_atomic_state* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_atomic_state*) ;
 int FUNC_5 (struct drm_atomic_state*) ;
 int FUNC_6 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_7 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_8 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_9 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_10 (struct drm_mode_object*) ;

__attribute__((used)) static int FUNC_11(struct drm_mode_object *VAR_4,
          struct drm_file *VAR_5,
          struct drm_property *VAR_6,
          uint64_t VAR_7)
{
 struct drm_device *VAR_8 = VAR_6->dev;
 struct drm_atomic_state *VAR_9;
 struct drm_modeset_acquire_ctx VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_8);
 if (!VAR_9)
  return -VAR_3;

 FUNC_7(&VAR_10, 0);
 VAR_9->acquire_ctx = &VAR_10;

retry:
 if (VAR_6 == VAR_9->dev->mode_config.dpms_property) {
  if (VAR_4->type != VAR_0) {
   VAR_11 = -VAR_2;
   goto out;
  }

  VAR_11 = FUNC_1(VAR_9,
             FUNC_10(VAR_4),
             VAR_7);
 } else {
  VAR_11 = FUNC_2(VAR_9, VAR_5, VAR_4, VAR_6, VAR_7);
  if (VAR_11)
   goto out;
  VAR_11 = FUNC_0(VAR_9);
 }
out:
 if (VAR_11 == -VAR_1) {
  FUNC_4(VAR_9);
  FUNC_8(&VAR_10);
  goto retry;
 }

 FUNC_5(VAR_9);

 FUNC_9(&VAR_10);
 FUNC_6(&VAR_10);

 return VAR_11;
}
