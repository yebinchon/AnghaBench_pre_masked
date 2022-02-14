
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_rect {int x1; int y1; } ;
struct TYPE_3__ {struct drm_rect dst; } ;
struct rcar_du_plane_state {TYPE_1__ state; } ;
struct rcar_du_group {struct rcar_du_device* dev; } ;
struct rcar_du_device {TYPE_2__* info; } ;
struct TYPE_4__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct drm_rect const*) ;
 int FUNC_1 (struct drm_rect const*) ;
 int FUNC_2 (struct rcar_du_group*,unsigned int,struct rcar_du_plane_state const*) ;
 int FUNC_3 (struct rcar_du_group*,unsigned int,struct rcar_du_plane_state const*) ;
 int FUNC_4 (struct rcar_du_group*,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_5(struct rcar_du_group *VAR_8,
           unsigned int VAR_9,
           const struct rcar_du_plane_state *VAR_10)
{
 struct rcar_du_device *VAR_11 = VAR_8->dev;
 const struct drm_rect *VAR_12 = &VAR_10->state.dst;

 if (VAR_11->info->gen < 3)
  FUNC_2(VAR_8, VAR_9, VAR_10);
 else
  FUNC_3(VAR_8, VAR_9, VAR_10);


 FUNC_4(VAR_8, VAR_9, VAR_3, FUNC_1(VAR_12));
 FUNC_4(VAR_8, VAR_9, VAR_4, FUNC_0(VAR_12));
 FUNC_4(VAR_8, VAR_9, VAR_1, VAR_12->x1);
 FUNC_4(VAR_8, VAR_9, VAR_2, VAR_12->y1);

 if (VAR_11->info->gen < 3) {

  FUNC_4(VAR_8, VAR_9, VAR_7, 0);
  FUNC_4(VAR_8, VAR_9, VAR_6, 4095);
  FUNC_4(VAR_8, VAR_9, VAR_0, 0);
  FUNC_4(VAR_8, VAR_9, VAR_5, 0);
 }
}
