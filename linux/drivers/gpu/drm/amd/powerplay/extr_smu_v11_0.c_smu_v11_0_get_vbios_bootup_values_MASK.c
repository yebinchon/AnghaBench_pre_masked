
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int format_revision; int content_revision; int pp_table_id; int cooling_id; int vdd_gfx; int mvddc; int vddci; int vddc; int dcefclk; int socclk; int uclk; int gfxclk; int revision; } ;
struct TYPE_4__ {TYPE_1__ boot_values; } ;
struct smu_context {TYPE_2__ smu_table; } ;
struct atom_firmware_info_v3_3 {int pplib_pptable_id; int coolingsolution_id; int bootup_vddgfx_mv; int bootup_mvddc_mv; int bootup_vddci_mv; int bootup_vddc_mv; int bootup_mclk_in10khz; int bootup_sclk_in10khz; int firmware_revision; } ;
struct atom_firmware_info_v3_1 {int coolingsolution_id; int bootup_vddgfx_mv; int bootup_mvddc_mv; int bootup_vddci_mv; int bootup_vddc_mv; int bootup_mclk_in10khz; int bootup_sclk_in10khz; int firmware_revision; } ;
struct atom_common_table_header {int format_revision; int content_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct smu_context*,int,int *,int *,int *,int **) ;

int FUNC_3(struct smu_context *VAR_3)
{
 int VAR_4, VAR_5;
 uint16_t VAR_6;
 uint8_t VAR_7, VAR_8;
 struct atom_common_table_header *VAR_9;
 struct atom_firmware_info_v3_3 *VAR_10;
 struct atom_firmware_info_v3_1 *VAR_11;

 VAR_5 = FUNC_0(VAR_1,
         VAR_2);

 VAR_4 = FUNC_2(VAR_3, VAR_5, &VAR_6, &VAR_7, &VAR_8,
          (uint8_t **)&VAR_9);
 if (VAR_4)
  return VAR_4;

 if (VAR_9->format_revision != 3) {
  FUNC_1("unknown atom_firmware_info version! for smu11\n");
  return -VAR_0;
 }

 switch (VAR_9->content_revision) {
 case 0:
 case 1:
 case 2:
  VAR_11 = (struct atom_firmware_info_v3_1 *)VAR_9;
  VAR_3->smu_table.boot_values.revision = VAR_11->firmware_revision;
  VAR_3->smu_table.boot_values.gfxclk = VAR_11->bootup_sclk_in10khz;
  VAR_3->smu_table.boot_values.uclk = VAR_11->bootup_mclk_in10khz;
  VAR_3->smu_table.boot_values.socclk = 0;
  VAR_3->smu_table.boot_values.dcefclk = 0;
  VAR_3->smu_table.boot_values.vddc = VAR_11->bootup_vddc_mv;
  VAR_3->smu_table.boot_values.vddci = VAR_11->bootup_vddci_mv;
  VAR_3->smu_table.boot_values.mvddc = VAR_11->bootup_mvddc_mv;
  VAR_3->smu_table.boot_values.vdd_gfx = VAR_11->bootup_vddgfx_mv;
  VAR_3->smu_table.boot_values.cooling_id = VAR_11->coolingsolution_id;
  VAR_3->smu_table.boot_values.pp_table_id = 0;
  break;
 case 3:
 default:
  VAR_10 = (struct atom_firmware_info_v3_3 *)VAR_9;
  VAR_3->smu_table.boot_values.revision = VAR_10->firmware_revision;
  VAR_3->smu_table.boot_values.gfxclk = VAR_10->bootup_sclk_in10khz;
  VAR_3->smu_table.boot_values.uclk = VAR_10->bootup_mclk_in10khz;
  VAR_3->smu_table.boot_values.socclk = 0;
  VAR_3->smu_table.boot_values.dcefclk = 0;
  VAR_3->smu_table.boot_values.vddc = VAR_10->bootup_vddc_mv;
  VAR_3->smu_table.boot_values.vddci = VAR_10->bootup_vddci_mv;
  VAR_3->smu_table.boot_values.mvddc = VAR_10->bootup_mvddc_mv;
  VAR_3->smu_table.boot_values.vdd_gfx = VAR_10->bootup_vddgfx_mv;
  VAR_3->smu_table.boot_values.cooling_id = VAR_10->coolingsolution_id;
  VAR_3->smu_table.boot_values.pp_table_id = VAR_10->pplib_pptable_id;
 }

 VAR_3->smu_table.boot_values.format_revision = VAR_9->format_revision;
 VAR_3->smu_table.boot_values.content_revision = VAR_9->content_revision;

 return 0;
}
