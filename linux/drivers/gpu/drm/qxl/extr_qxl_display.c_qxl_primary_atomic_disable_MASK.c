
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qxl_device {int dummy; } ;
struct qxl_bo {int is_primary; } ;
struct drm_plane_state {TYPE_2__* fb; } ;
struct drm_plane {TYPE_1__* dev; } ;
struct TYPE_4__ {int * obj; } ;
struct TYPE_3__ {struct qxl_device* dev_private; } ;


 struct qxl_bo* FUNC_0 (int ) ;
 int FUNC_1 (struct qxl_device*) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_0,
           struct drm_plane_state *VAR_1)
{
 struct qxl_device *VAR_2 = VAR_0->dev->dev_private;

 if (VAR_1->fb) {
  struct qxl_bo *VAR_3 = FUNC_0(VAR_1->fb->obj[0]);

  if (VAR_3->is_primary) {
   FUNC_1(VAR_2);
   VAR_3->is_primary = 0;
  }
 }
}
