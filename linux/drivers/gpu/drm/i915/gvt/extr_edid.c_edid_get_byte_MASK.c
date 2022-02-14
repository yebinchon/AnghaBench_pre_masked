
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_i2c_edid {scalar_t__ state; scalar_t__ current_edid_read; int port; int edid_available; int slave_selected; } ;
struct intel_vgpu_edid_data {unsigned char* edid_block; } ;
struct TYPE_3__ {struct intel_vgpu_i2c_edid i2c_edid; } ;
struct intel_vgpu {TYPE_1__ display; } ;
struct TYPE_4__ {struct intel_vgpu_edid_data* edid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct intel_vgpu*,int ) ;
 TYPE_2__* FUNC_2 (struct intel_vgpu*,int ) ;

__attribute__((used)) static unsigned char FUNC_3(struct intel_vgpu *VAR_2)
{
 struct intel_vgpu_i2c_edid *VAR_3 = &VAR_2->display.i2c_edid;
 unsigned char VAR_4 = 0;

 if (VAR_3->state == VAR_1 || !VAR_3->slave_selected) {
  FUNC_0("Driver tries to read EDID without proper sequence!\n");
  return 0;
 }
 if (VAR_3->current_edid_read >= VAR_0) {
  FUNC_0("edid_get_byte() exceeds the size of EDID!\n");
  return 0;
 }

 if (!VAR_3->edid_available) {
  FUNC_0("Reading EDID but EDID is not available!\n");
  return 0;
 }

 if (FUNC_1(VAR_2, VAR_3->port)) {
  struct intel_vgpu_edid_data *VAR_5 =
   FUNC_2(VAR_2, VAR_3->port)->edid;

  VAR_4 = VAR_5->edid_block[VAR_3->current_edid_read];
  VAR_3->current_edid_read++;
 } else {
  FUNC_0("No EDID available during the reading?\n");
 }
 return VAR_4;
}
