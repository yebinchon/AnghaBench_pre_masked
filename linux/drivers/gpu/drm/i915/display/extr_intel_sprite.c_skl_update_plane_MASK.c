
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_plane_state {int ctl; scalar_t__ linked_plane; } ;
struct intel_plane {int dummy; } ;
struct intel_crtc_state {int dummy; } ;


 int FUNC_0 (struct intel_plane*,struct intel_crtc_state const*,struct intel_plane_state const*,int,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct intel_plane *VAR_0,
   const struct intel_crtc_state *VAR_1,
   const struct intel_plane_state *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->linked_plane) {

  VAR_3 = 1;
 }

 FUNC_0(VAR_0, VAR_1, VAR_2,
     VAR_3, 0, VAR_2->ctl);
}
