
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {unsigned int rotation; int src; int fb; } ;
struct intel_plane_state {TYPE_5__ base; TYPE_3__* color_plane; int view; } ;
struct TYPE_13__ {int width; int height; TYPE_1__* format; } ;
struct intel_framebuffer {TYPE_6__ base; TYPE_4__* normal; TYPE_2__* rotated; } ;
struct TYPE_11__ {int y; int x; } ;
struct TYPE_10__ {int y; int x; scalar_t__ offset; int stride; } ;
struct TYPE_9__ {int y; int x; } ;
struct TYPE_8__ {int num_planes; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_6__*,int,unsigned int) ;
 int FUNC_3 (int *,TYPE_6__*,unsigned int) ;
 int FUNC_4 (struct intel_plane_state*) ;
 scalar_t__ FUNC_5 (struct intel_plane_state*) ;
 int FUNC_6 (struct intel_plane_state*) ;
 struct intel_framebuffer* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct intel_plane_state *VAR_1)
{
 const struct intel_framebuffer *VAR_2 =
  FUNC_7(VAR_1->base.fb);
 unsigned int VAR_3 = VAR_1->base.rotation;
 int VAR_4, VAR_5;

 if (!VAR_2)
  return 0;

 VAR_5 = VAR_2->base.format->num_planes;

 if (FUNC_5(VAR_1)) {
  FUNC_6(VAR_1);







  return FUNC_4(VAR_1);
 }

 FUNC_3(&VAR_1->view, &VAR_2->base, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_1->color_plane[VAR_4].stride = FUNC_2(&VAR_2->base, VAR_4, VAR_3);
  VAR_1->color_plane[VAR_4].offset = 0;

  if (FUNC_1(VAR_3)) {
   VAR_1->color_plane[VAR_4].x = VAR_2->rotated[VAR_4].x;
   VAR_1->color_plane[VAR_4].y = VAR_2->rotated[VAR_4].y;
  } else {
   VAR_1->color_plane[VAR_4].x = VAR_2->normal[VAR_4].x;
   VAR_1->color_plane[VAR_4].y = VAR_2->normal[VAR_4].y;
  }
 }


 if (FUNC_1(VAR_3))
  FUNC_0(&VAR_1->base.src,
    VAR_2->base.width << 16, VAR_2->base.height << 16,
    VAR_0);

 return FUNC_4(VAR_1);
}
