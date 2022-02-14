
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {unsigned int rotation; int visible; struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_2__* color_plane; TYPE_1__ base; } ;
struct TYPE_11__ {int id; } ;
struct TYPE_12__ {int name; TYPE_5__ base; } ;
struct intel_plane {scalar_t__ (* max_stride ) (struct intel_plane*,int ,int ,unsigned int) ;TYPE_6__ base; } ;
struct TYPE_10__ {int id; } ;
struct drm_framebuffer {TYPE_4__ base; int modifier; TYPE_3__* format; } ;
struct TYPE_9__ {int format; } ;
struct TYPE_8__ {scalar_t__ stride; } ;


 int FUNC_0 (char*,int ,scalar_t__,int ,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct intel_plane_state const*) ;
 scalar_t__ FUNC_2 (struct intel_plane*,int ,int ,unsigned int) ;
 struct intel_plane* FUNC_3 (int ) ;

int FUNC_4(const struct intel_plane_state *VAR_1)
{
 struct intel_plane *VAR_2 = FUNC_3(VAR_1->base.plane);
 const struct drm_framebuffer *VAR_3 = VAR_1->base.fb;
 unsigned int VAR_4 = VAR_1->base.rotation;
 u32 VAR_5, VAR_6;







 if (FUNC_1(VAR_1) &&
     !VAR_1->base.visible)
  return 0;


 VAR_5 = VAR_1->color_plane[0].stride;
 VAR_6 = VAR_2->max_stride(VAR_2, VAR_3->format->format,
           VAR_3->modifier, VAR_4);

 if (VAR_5 > VAR_6) {
  FUNC_0("[FB:%d] stride (%d) exceeds [PLANE:%d:%s] max stride (%d)\n",
         VAR_3->base.id, VAR_5,
         VAR_2->base.base.id, VAR_2->base.name, VAR_6);
  return -VAR_0;
 }

 return 0;
}
