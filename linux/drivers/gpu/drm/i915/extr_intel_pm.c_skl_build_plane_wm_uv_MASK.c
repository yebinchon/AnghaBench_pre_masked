
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct skl_wm_params {int dummy; } ;
struct skl_plane_wm {int is_planar; int uv_wm; } ;
struct intel_plane_state {int dummy; } ;
struct TYPE_4__ {struct skl_plane_wm* planes; } ;
struct TYPE_5__ {TYPE_1__ optimal; } ;
struct TYPE_6__ {TYPE_2__ skl; } ;
struct intel_crtc_state {TYPE_3__ wm; } ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;


 int FUNC_0 (struct intel_crtc_state*,struct intel_plane_state const*,struct skl_wm_params*,int) ;
 int FUNC_1 (struct intel_crtc_state*,struct skl_wm_params*,int ) ;

__attribute__((used)) static int FUNC_2(struct intel_crtc_state *VAR_0,
     const struct intel_plane_state *VAR_1,
     enum plane_id VAR_2)
{
 struct skl_plane_wm *VAR_3 = &VAR_0->wm.skl.optimal.planes[VAR_2];
 struct skl_wm_params VAR_4;
 int VAR_5;

 VAR_3->is_planar = 1;


 VAR_5 = FUNC_0(VAR_0, VAR_1,
       &VAR_4, 1);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_0, &VAR_4, VAR_3->uv_wm);

 return 0;
}
