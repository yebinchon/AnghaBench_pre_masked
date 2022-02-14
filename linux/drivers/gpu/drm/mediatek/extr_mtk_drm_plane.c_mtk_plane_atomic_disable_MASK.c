
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enable; int dirty; } ;
struct mtk_plane_state {TYPE_1__ pending; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int state; } ;


 struct mtk_plane_state* FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_0,
         struct drm_plane_state *VAR_1)
{
 struct mtk_plane_state *VAR_2 = FUNC_0(VAR_0->state);

 VAR_2->pending.enable = 0;
 FUNC_1();
 VAR_2->pending.dirty = 1;
}
