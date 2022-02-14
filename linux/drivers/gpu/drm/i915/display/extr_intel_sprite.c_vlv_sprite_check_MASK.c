
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int visible; } ;
struct intel_plane_state {int ctl; TYPE_1__ base; } ;
struct intel_crtc_state {int base; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_plane_state*) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ,int,int) ;
 int FUNC_2 (struct intel_plane_state*) ;
 int FUNC_3 (struct intel_plane_state*) ;
 int FUNC_4 (struct intel_crtc_state*,struct intel_plane_state*) ;

__attribute__((used)) static int
FUNC_5(struct intel_crtc_state *VAR_1,
   struct intel_plane_state *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(&VAR_2->base,
        &VAR_1->base,
        VAR_0,
        VAR_0,
        1, 1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3)
  return VAR_3;

 if (!VAR_2->base.visible)
  return 0;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_2->ctl = FUNC_4(VAR_1, VAR_2);

 return 0;
}
