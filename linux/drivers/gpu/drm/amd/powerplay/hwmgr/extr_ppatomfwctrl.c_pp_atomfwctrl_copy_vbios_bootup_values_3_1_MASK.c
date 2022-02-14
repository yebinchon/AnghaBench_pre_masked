
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct pp_atomfwctrl_bios_boot_up_values {void* ulDClk; void* ulVClk; void* ulEClk; void* ulDCEFClk; void* ulSocClk; int ucCoolingID; int usVddGfx; int usMvddc; int usVddci; int usVddc; int ulUClk; int ulGfxClk; int ulRevision; } ;
struct atom_firmware_info_v3_1 {int coolingsolution_id; int bootup_vddgfx_mv; int bootup_mvddc_mv; int bootup_vddci_mv; int bootup_vddc_mv; int bootup_mclk_in10khz; int bootup_sclk_in10khz; int firmware_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ,void**) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_5,
   struct pp_atomfwctrl_bios_boot_up_values *VAR_6,
   struct atom_firmware_info_v3_1 *VAR_7)
{
 uint32_t VAR_8 = 0;

 VAR_6->ulRevision = VAR_7->firmware_revision;
 VAR_6->ulGfxClk = VAR_7->bootup_sclk_in10khz;
 VAR_6->ulUClk = VAR_7->bootup_mclk_in10khz;
 VAR_6->usVddc = VAR_7->bootup_vddc_mv;
 VAR_6->usVddci = VAR_7->bootup_vddci_mv;
 VAR_6->usMvddc = VAR_7->bootup_mvddc_mv;
 VAR_6->usVddGfx = VAR_7->bootup_vddgfx_mv;
 VAR_6->ucCoolingID = VAR_7->coolingsolution_id;
 VAR_6->ulSocClk = 0;
 VAR_6->ulDCEFClk = 0;

 if (!FUNC_0(VAR_5, VAR_3, 0, &VAR_8))
  VAR_6->ulSocClk = VAR_8;

 if (!FUNC_0(VAR_5, VAR_0, 0, &VAR_8))
  VAR_6->ulDCEFClk = VAR_8;

 if (!FUNC_0(VAR_5, VAR_2, 0, &VAR_8))
  VAR_6->ulEClk = VAR_8;

 if (!FUNC_0(VAR_5, VAR_4, 0, &VAR_8))
  VAR_6->ulVClk = VAR_8;

 if (!FUNC_0(VAR_5, VAR_1, 0, &VAR_8))
  VAR_6->ulDClk = VAR_8;
}
