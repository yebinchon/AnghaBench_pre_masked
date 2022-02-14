
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct sti_plane {TYPE_2__ drm_plane; } ;
typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct sti_plane*) ;

void FUNC_3(struct sti_plane *VAR_0,
        enum drm_plane_type VAR_1)
{
 FUNC_1(&VAR_0->drm_plane, VAR_1);

 FUNC_0("drm plane:%d mapped to %s\n",
    VAR_0->drm_plane.base.id, FUNC_2(VAR_0));
}
