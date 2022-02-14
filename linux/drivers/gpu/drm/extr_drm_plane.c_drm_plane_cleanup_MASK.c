
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_plane {int name; scalar_t__ state; TYPE_2__* funcs; int head; int base; int modifiers; int format_types; int mutex; struct drm_device* dev; } ;
struct TYPE_3__ {int num_total_plane; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct TYPE_4__ {int (* atomic_destroy_state ) (struct drm_plane*,scalar_t__) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct drm_device*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_plane*,int ,int) ;
 int FUNC_8 (struct drm_plane*,scalar_t__) ;

void FUNC_9(struct drm_plane *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;

 FUNC_3(&VAR_0->mutex);

 FUNC_4(VAR_0->format_types);
 FUNC_4(VAR_0->modifiers);
 FUNC_2(VAR_1, &VAR_0->base);

 FUNC_0(FUNC_6(&VAR_0->head));






 FUNC_5(&VAR_0->head);
 VAR_1->mode_config.num_total_plane--;

 FUNC_1(VAR_0->state && !VAR_0->funcs->atomic_destroy_state);
 if (VAR_0->state && VAR_0->funcs->atomic_destroy_state)
  VAR_0->funcs->atomic_destroy_state(VAR_0, VAR_0->state);

 FUNC_4(VAR_0->name);

 FUNC_7(VAR_0, 0, sizeof(*VAR_0));
}
