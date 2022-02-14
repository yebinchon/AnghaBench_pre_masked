
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct skl_ddb_entry {int dummy; } ;
struct TYPE_6__ {scalar_t__ visible; } ;
struct intel_plane_state {struct intel_plane* linked_plane; scalar_t__ slave; TYPE_3__ base; } ;
struct intel_plane {int dummy; } ;
struct TYPE_4__ {int plane_ddb_uv; int plane_ddb_y; } ;
struct TYPE_5__ {TYPE_1__ skl; } ;
struct intel_crtc_state {TYPE_2__ wm; int update_planes; } ;
struct intel_crtc {int dummy; } ;
struct intel_atomic_state {int dummy; } ;


 int VAR_0 ;
 struct intel_crtc_state* FUNC_0 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_plane_state* FUNC_1 (struct intel_atomic_state*,struct intel_plane*) ;
 struct intel_crtc_state* FUNC_2 (struct intel_atomic_state*,struct intel_crtc*) ;
 int FUNC_3 (struct intel_plane*,struct intel_crtc_state*) ;
 int FUNC_4 (struct intel_plane*,struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_5 (struct intel_plane*,struct intel_crtc_state*,struct intel_plane_state*) ;
 int FUNC_6 (struct skl_ddb_entry*,int ,int) ;
 struct intel_plane* FUNC_7 (struct intel_atomic_state*,struct intel_crtc*,struct skl_ddb_entry*,struct skl_ddb_entry*,int *) ;

void FUNC_8(struct intel_atomic_state *VAR_1,
          struct intel_crtc *VAR_2)
{
 struct intel_crtc_state *VAR_3 =
  FUNC_2(VAR_1, VAR_2);
 struct intel_crtc_state *VAR_4 =
  FUNC_0(VAR_1, VAR_2);
 struct skl_ddb_entry VAR_5[VAR_0];
 struct skl_ddb_entry VAR_6[VAR_0];
 u32 VAR_7 = VAR_4->update_planes;
 struct intel_plane *VAR_8;

 FUNC_6(VAR_5, VAR_3->wm.skl.plane_ddb_y,
        sizeof(VAR_3->wm.skl.plane_ddb_y));
 FUNC_6(VAR_6, VAR_3->wm.skl.plane_ddb_uv,
        sizeof(VAR_3->wm.skl.plane_ddb_uv));

 while ((VAR_8 = FUNC_7(VAR_1, VAR_2,
       VAR_5, VAR_6,
       &VAR_7))) {
  struct intel_plane_state *VAR_9 =
   FUNC_1(VAR_1, VAR_8);

  if (VAR_9->base.visible) {
   FUNC_4(VAR_8, VAR_4, VAR_9);
  } else if (VAR_9->slave) {
   struct intel_plane *VAR_10 =
    VAR_9->linked_plane;
   VAR_9 =
    FUNC_1(VAR_1, VAR_10);

   FUNC_5(VAR_8, VAR_4, VAR_9);
  } else {
   FUNC_3(VAR_8, VAR_4);
  }
 }
}
