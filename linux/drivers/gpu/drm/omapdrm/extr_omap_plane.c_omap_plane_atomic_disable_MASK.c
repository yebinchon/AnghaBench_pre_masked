
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_plane {int id; } ;
struct omap_drm_private {int dispc; TYPE_1__* dispc_ops; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {scalar_t__ type; TYPE_3__* state; TYPE_2__* dev; } ;
struct TYPE_6__ {int zpos; int rotation; } ;
struct TYPE_5__ {struct omap_drm_private* dev_private; } ;
struct TYPE_4__ {int (* ovl_enable ) (int ,int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct omap_plane* FUNC_1 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_2(struct drm_plane *VAR_2,
          struct drm_plane_state *VAR_3)
{
 struct omap_drm_private *VAR_4 = VAR_2->dev->dev_private;
 struct omap_plane *VAR_5 = FUNC_1(VAR_2);

 VAR_2->state->rotation = VAR_0;
 VAR_2->state->zpos = VAR_2->type == VAR_1
      ? 0 : VAR_5->id;

 VAR_4->dispc_ops->ovl_enable(VAR_4->dispc, VAR_5->id, 0);
}
