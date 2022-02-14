
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_i2c_gmbus {int dummy; } ;
struct TYPE_3__ {int i2c_over_aux_ch; int aux_ch_mot; } ;
struct intel_vgpu_i2c_edid {int port; int slave_selected; int edid_available; TYPE_1__ aux_ch; int gmbus; scalar_t__ current_edid_read; int state; } ;
struct TYPE_4__ {struct intel_vgpu_i2c_edid i2c_edid; } ;
struct intel_vgpu {TYPE_2__ display; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

void FUNC_1(struct intel_vgpu *VAR_1)
{
 struct intel_vgpu_i2c_edid *VAR_2 = &VAR_1->display.i2c_edid;

 VAR_2->state = VAR_0;

 VAR_2->port = -1;
 VAR_2->slave_selected = 0;
 VAR_2->edid_available = 0;
 VAR_2->current_edid_read = 0;

 FUNC_0(&VAR_2->gmbus, 0, sizeof(struct intel_vgpu_i2c_gmbus));

 VAR_2->aux_ch.i2c_over_aux_ch = 0;
 VAR_2->aux_ch.aux_ch_mot = 0;
}
