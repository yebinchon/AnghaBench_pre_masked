
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_plane_state {TYPE_3__* fb; } ;
struct TYPE_4__ {int id; } ;
struct drm_plane {int name; TYPE_1__ base; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_6__ {TYPE_2__ base; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(struct drm_plane *VAR_0,
 struct drm_plane_state *VAR_1)
{
 FUNC_0("[PLANE:%d:%s] [FB:%d]\n",
  VAR_0->base.id, VAR_0->name,
  VAR_1->fb ? VAR_1->fb->base.id : 0);





 if (VAR_1->fb)
  FUNC_1(VAR_1->fb);
 return 0;
}
