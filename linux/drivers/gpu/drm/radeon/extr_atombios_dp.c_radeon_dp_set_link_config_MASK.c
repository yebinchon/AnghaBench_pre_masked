
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_connector_atom_dig {scalar_t__ dp_sink_type; scalar_t__ dp_lane_count; scalar_t__ dp_clock; int dpcd; } ;
struct radeon_connector {struct radeon_connector_atom_dig* con_priv; } ;
struct drm_display_mode {int clock; } ;
struct drm_connector {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_connector*,int ,int ,scalar_t__*,scalar_t__*) ;
 struct radeon_connector* FUNC_1 (struct drm_connector*) ;

void FUNC_2(struct drm_connector *VAR_2,
          const struct drm_display_mode *VAR_3)
{
 struct radeon_connector *VAR_4 = FUNC_1(VAR_2);
 struct radeon_connector_atom_dig *VAR_5;
 int VAR_6;

 if (!VAR_4->con_priv)
  return;
 VAR_5 = VAR_4->con_priv;

 if ((VAR_5->dp_sink_type == VAR_0) ||
     (VAR_5->dp_sink_type == VAR_1)) {
  VAR_6 = FUNC_0(VAR_2, VAR_5->dpcd,
         VAR_3->clock,
         &VAR_5->dp_lane_count,
         &VAR_5->dp_clock);
  if (VAR_6) {
   VAR_5->dp_clock = 0;
   VAR_5->dp_lane_count = 0;
  }
 }
}
