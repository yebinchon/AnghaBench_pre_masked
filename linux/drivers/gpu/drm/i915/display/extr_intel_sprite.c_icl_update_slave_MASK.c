
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_plane_state {int ctl; } ;
struct intel_plane {int dummy; } ;
struct intel_crtc_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_plane*,struct intel_crtc_state const*,struct intel_plane_state const*,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct intel_plane *VAR_1,
   const struct intel_crtc_state *VAR_2,
   const struct intel_plane_state *VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_3, 0, 1,
     VAR_3->ctl | VAR_0);
}
