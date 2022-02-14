
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct malidp_plane {TYPE_1__* layer; int hwdev; } ;
struct drm_plane_state {int dummy; } ;
struct drm_plane {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int,scalar_t__) ;
 struct malidp_plane* FUNC_2 (struct drm_plane*) ;

__attribute__((used)) static void FUNC_3(struct drm_plane *VAR_3,
        struct drm_plane_state *VAR_4)
{
 struct malidp_plane *VAR_5 = FUNC_2(VAR_3);

 FUNC_1(VAR_5->hwdev,
       VAR_0 | FUNC_0(VAR_1),
       VAR_5->layer->base + VAR_2);
}
