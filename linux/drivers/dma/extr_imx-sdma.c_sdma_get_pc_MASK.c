
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_engine {TYPE_1__* script_addrs; } ;
struct sdma_channel {int pc_from_device; int pc_to_device; int device_to_device; int pc_to_pc; struct sdma_engine* sdma; } ;
typedef enum sdma_peripheral_type { ____Placeholder_sdma_peripheral_type } sdma_peripheral_type ;
struct TYPE_2__ {int ap_2_ap_addr; int bp_2_ap_addr; int ap_2_bp_addr; int firi_2_mcu_addr; int mcu_2_firi_addr; int uart_2_mcu_addr; int mcu_2_app_addr; int uartsh_2_mcu_addr; int mcu_2_shp_addr; int ata_2_mcu_addr; int mcu_2_ata_addr; int app_2_mcu_addr; int ssish_2_mcu_addr; int mcu_2_ssish_addr; int shp_2_mcu_addr; int asrc_2_mcu_addr; int per_2_per_addr; int mshc_2_mcu_addr; int mcu_2_mshc_addr; int dptc_dvfs_addr; int spdif_2_mcu_addr; int mcu_2_spdif_addr; int ext_mem_2_ipu_addr; } ;
__attribute__((used)) static void FUNC_0(struct sdma_channel *VAR_0,
  enum sdma_peripheral_type VAR_1)
{
 struct sdma_engine *VAR_2 = VAR_0->sdma;
 int VAR_3 = 0, VAR_4 = 0;




 int VAR_5 = 0, VAR_6 = 0;

 VAR_0->pc_from_device = 0;
 VAR_0->pc_to_device = 0;
 VAR_0->device_to_device = 0;
 VAR_0->pc_to_pc = 0;

 switch (VAR_1) {
 case 139:
  VAR_6 = VAR_2->script_addrs->ap_2_ap_addr;
  break;
 case 144:
  VAR_4 = VAR_2->script_addrs->bp_2_ap_addr;
  VAR_3 = VAR_2->script_addrs->ap_2_bp_addr;
  break;
 case 141:
  VAR_3 = VAR_2->script_addrs->firi_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->mcu_2_firi_addr;
  break;
 case 129:
  VAR_3 = VAR_2->script_addrs->uart_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->mcu_2_app_addr;
  break;
 case 128:
  VAR_3 = VAR_2->script_addrs->uartsh_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->mcu_2_shp_addr;
  break;
 case 148:
  VAR_3 = VAR_2->script_addrs->ata_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->mcu_2_ata_addr;
  break;
 case 146:
 case 142:
 case 132:
 case 135:
  VAR_3 = VAR_2->script_addrs->app_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->mcu_2_app_addr;
  break;
 case 131:
  VAR_3 = VAR_2->script_addrs->ssish_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->mcu_2_ssish_addr;
  break;
 case 130:
 case 138:
 case 134:
 case 145:
 case 143:
 case 136:
  VAR_3 = VAR_2->script_addrs->shp_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->mcu_2_shp_addr;
  break;
 case 150:
  VAR_3 = VAR_2->script_addrs->asrc_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->asrc_2_mcu_addr;
  VAR_5 = VAR_2->script_addrs->per_2_per_addr;
  break;
 case 149:
  VAR_3 = VAR_2->script_addrs->shp_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->mcu_2_shp_addr;
  VAR_5 = VAR_2->script_addrs->per_2_per_addr;
  break;
 case 137:
  VAR_3 = VAR_2->script_addrs->mshc_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->mcu_2_mshc_addr;
  break;
 case 147:
  VAR_3 = VAR_2->script_addrs->dptc_dvfs_addr;
  break;
 case 133:
  VAR_3 = VAR_2->script_addrs->spdif_2_mcu_addr;
  VAR_4 = VAR_2->script_addrs->mcu_2_spdif_addr;
  break;
 case 140:
  VAR_4 = VAR_2->script_addrs->ext_mem_2_ipu_addr;
  break;
 default:
  break;
 }

 VAR_0->pc_from_device = VAR_3;
 VAR_0->pc_to_device = VAR_4;
 VAR_0->device_to_device = VAR_5;
 VAR_0->pc_to_pc = VAR_6;
}
