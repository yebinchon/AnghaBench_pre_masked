
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct sun4i_layer {TYPE_1__* backend; } ;
struct drm_plane {int dummy; } ;
struct TYPE_2__ {int frontend; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct sun4i_layer* FUNC_1 (struct drm_plane*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static bool FUNC_4(struct drm_plane *VAR_0,
          uint32_t VAR_1, uint64_t VAR_2)
{
 struct sun4i_layer *VAR_3 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_3->backend->frontend))
  FUNC_2(VAR_1, VAR_2);

 return FUNC_2(VAR_1, VAR_2) ||
        FUNC_3(VAR_1, VAR_2);
}
