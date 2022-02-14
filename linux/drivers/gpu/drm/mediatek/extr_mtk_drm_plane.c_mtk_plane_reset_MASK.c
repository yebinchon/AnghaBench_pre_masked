
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int format; } ;
struct TYPE_5__ {struct drm_plane* plane; } ;
struct mtk_plane_state {TYPE_1__ pending; TYPE_2__ base; } ;
struct drm_plane {TYPE_2__* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 struct mtk_plane_state* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mtk_plane_state*,int ,int) ;
 struct mtk_plane_state* FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(struct drm_plane *VAR_2)
{
 struct mtk_plane_state *VAR_3;

 if (VAR_2->state) {
  FUNC_0(VAR_2->state);

  VAR_3 = FUNC_3(VAR_2->state);
  FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 } else {
  VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
  if (!VAR_3)
   return;
  VAR_2->state = &VAR_3->base;
 }

 VAR_3->base.plane = VAR_2;
 VAR_3->pending.format = VAR_0;
}
