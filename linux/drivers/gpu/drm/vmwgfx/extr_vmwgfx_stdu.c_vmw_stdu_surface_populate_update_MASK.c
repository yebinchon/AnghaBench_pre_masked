
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct vmw_stdu_update {int dummy; } ;
struct vmw_du_update_plane {TYPE_1__* du; } ;
struct drm_rect {int y2; int y1; int x2; int x1; } ;
struct TYPE_2__ {int unit; } ;


 int FUNC_0 (void*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct vmw_du_update_plane *VAR_0, void *VAR_1,
     struct drm_rect *VAR_2)
{
 FUNC_0(VAR_1, VAR_0->du->unit, VAR_2->x1, VAR_2->x2, VAR_2->y1,
     VAR_2->y2);

 return sizeof(struct vmw_stdu_update);
}
