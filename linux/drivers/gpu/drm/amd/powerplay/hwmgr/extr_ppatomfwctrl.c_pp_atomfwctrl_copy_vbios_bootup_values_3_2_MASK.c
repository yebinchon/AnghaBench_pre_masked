
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct pp_hwmgr {int dummy; } ;
struct pp_atomfwctrl_bios_boot_up_values {void* ulFClk; void* ulDClk; void* ulVClk; void* ulEClk; void* ulDCEFClk; void* ulSocClk; int ucCoolingID; int usVddGfx; int usMvddc; int usVddci; int usVddc; int ulUClk; int ulGfxClk; int ulRevision; } ;
struct atom_firmware_info_v3_2 {int coolingsolution_id; int bootup_vddgfx_mv; int bootup_mvddc_mv; int bootup_vddci_mv; int bootup_vddc_mv; int bootup_mclk_in10khz; int bootup_sclk_in10khz; int firmware_revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ,void**) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_8,
   struct pp_atomfwctrl_bios_boot_up_values *VAR_9,
   struct atom_firmware_info_v3_2 *VAR_10)
{
 uint32_t VAR_11 = 0;

 VAR_9->ulRevision = VAR_10->firmware_revision;
 VAR_9->ulGfxClk = VAR_10->bootup_sclk_in10khz;
 VAR_9->ulUClk = VAR_10->bootup_mclk_in10khz;
 VAR_9->usVddc = VAR_10->bootup_vddc_mv;
 VAR_9->usVddci = VAR_10->bootup_vddci_mv;
 VAR_9->usMvddc = VAR_10->bootup_mvddc_mv;
 VAR_9->usVddGfx = VAR_10->bootup_vddgfx_mv;
 VAR_9->ucCoolingID = VAR_10->coolingsolution_id;
 VAR_9->ulSocClk = 0;
 VAR_9->ulDCEFClk = 0;

 if (!FUNC_0(VAR_8, VAR_4, VAR_3, &VAR_11))
  VAR_9->ulSocClk = VAR_11;

 if (!FUNC_0(VAR_8, VAR_0, VAR_3, &VAR_11))
  VAR_9->ulDCEFClk = VAR_11;

 if (!FUNC_0(VAR_8, VAR_2, VAR_3, &VAR_11))
  VAR_9->ulEClk = VAR_11;

 if (!FUNC_0(VAR_8, VAR_5, VAR_3, &VAR_11))
  VAR_9->ulVClk = VAR_11;

 if (!FUNC_0(VAR_8, VAR_1, VAR_3, &VAR_11))
  VAR_9->ulDClk = VAR_11;

 if (!FUNC_0(VAR_8, VAR_6, VAR_7, &VAR_11))
  VAR_9->ulFClk = VAR_11;
}
