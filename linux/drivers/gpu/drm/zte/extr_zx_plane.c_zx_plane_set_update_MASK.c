
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zx_plane {int dummy; } ;
struct drm_plane {int type; TYPE_1__* state; } ;
struct TYPE_2__ {int crtc; } ;




 int FUNC_0 (int,char*,int) ;
 struct zx_plane* FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (struct zx_plane*) ;
 int FUNC_3 (struct zx_plane*) ;
 int FUNC_4 (struct zx_plane*) ;
 int FUNC_5 (struct zx_plane*) ;

void FUNC_6(struct drm_plane *VAR_0)
{
 struct zx_plane *VAR_1 = FUNC_1(VAR_0);


 if (!VAR_0->state->crtc)
  return;

 switch (VAR_0->type) {
 case 128:
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
  break;
 case 129:
  FUNC_4(VAR_1);
  FUNC_5(VAR_1);
  break;
 default:
  FUNC_0(1, "unsupported plane type %d\n", VAR_0->type);
 }
}
