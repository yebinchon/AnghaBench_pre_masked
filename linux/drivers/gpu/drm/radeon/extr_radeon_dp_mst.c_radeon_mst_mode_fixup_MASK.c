
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_encoder_mst {TYPE_3__* connector; TYPE_2__* primary; int pbn; } ;
struct radeon_encoder {struct radeon_encoder_mst* enc_priv; } ;
struct radeon_connector_atom_dig {int dp_clock; int dp_lane_count; int dpcd; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int clock; } ;
struct TYPE_6__ {int devices; struct radeon_connector_atom_dig* con_priv; } ;
struct TYPE_4__ {int encoder_type; } ;
struct TYPE_5__ {int active_device; int devices; TYPE_1__ base; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_display_mode*,int ) ;
 struct radeon_encoder* FUNC_5 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_6(struct drm_encoder *VAR_0,
       const struct drm_display_mode *VAR_1,
       struct drm_display_mode *VAR_2)
{
 struct radeon_encoder_mst *VAR_3;
 struct radeon_encoder *VAR_4 = FUNC_5(VAR_0);
 struct radeon_connector_atom_dig *VAR_5;
 int VAR_6 = 24;

 VAR_3 = VAR_4->enc_priv;

 VAR_3->pbn = FUNC_1(VAR_2->clock, VAR_6);

 VAR_3->primary->active_device = VAR_3->primary->devices & VAR_3->connector->devices;
 FUNC_0("setting active device to %08x from %08x %08x for encoder %d\n",
        VAR_3->primary->active_device, VAR_3->primary->devices,
        VAR_3->connector->devices, VAR_3->primary->base.encoder_type);


 FUNC_4(VAR_2, 0);
 VAR_5 = VAR_3->connector->con_priv;
 VAR_5->dp_lane_count = FUNC_2(VAR_5->dpcd);
 VAR_5->dp_clock = FUNC_3(VAR_5->dpcd);
 FUNC_0("dig clock %p %d %d\n", VAR_5,
        VAR_5->dp_lane_count, VAR_5->dp_clock);
 return 1;
}
