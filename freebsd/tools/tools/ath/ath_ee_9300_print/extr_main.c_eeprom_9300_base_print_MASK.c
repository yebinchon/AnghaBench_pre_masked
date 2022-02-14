
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int op_flags; int eepMisc; } ;
struct TYPE_6__ {int* reg_dmn; int txrx_mask; int rf_silent; int blue_tooth_options; int device_cap; int device_type; int pwrTableOffset; int* params_for_tuning_caps; int feature_enable; int misc_configuration; int eeprom_write_enable_gpio; int wlan_disable_gpio; int wlan_led_gpio; int rx_band_select_gpio; int txrxgain; int swreg; TYPE_1__ op_cap_flags; } ;
struct TYPE_5__ {TYPE_3__ base_eep_header; } ;
typedef TYPE_2__ ar9300_eeprom_t ;
typedef TYPE_3__ OSPREY_BASE_EEP_HEADER ;


 int FUNC_0 (char*,int,int,...) ;

__attribute__((used)) static void
FUNC_1(const uint16_t *VAR_0)
{
 const ar9300_eeprom_t *VAR_1 = (ar9300_eeprom_t *) VAR_0;
 const OSPREY_BASE_EEP_HEADER *VAR_2 = &VAR_1->base_eep_header;

 FUNC_0("| RegDomain: 0x%02x 0x%02x TxRxMask: 0x%02x OpFlags: 0x%02x OpMisc: 0x%02x |\n",
     VAR_2->reg_dmn[0],
     VAR_2->reg_dmn[1],
     VAR_2->txrx_mask,
     VAR_2->op_cap_flags.op_flags,
     VAR_2->op_cap_flags.eepMisc);

 FUNC_0("| RfSilent: 0x%02x BtOptions: 0x%02x DeviceCap: 0x%02x DeviceType: 0x%02x |\n",
     VAR_2->rf_silent,
     VAR_2->blue_tooth_options,
     VAR_2->device_cap,
     VAR_2->device_type);

 FUNC_0("| pwrTableOffset: %d dB, TuningCaps=0x%02x 0x%02x feature_enable: 0x%02x MiscConfig: 0x%02x |\n",
     VAR_2->pwrTableOffset,
     VAR_2->params_for_tuning_caps[0],
     VAR_2->params_for_tuning_caps[1],
     VAR_2->feature_enable,
     VAR_2->misc_configuration);

 FUNC_0("| EepromWriteGpio: %d, WlanDisableGpio: %d, WlanLedGpio: %d RxBandSelectGpio: %d |\n",
     VAR_2->eeprom_write_enable_gpio,
     VAR_2->wlan_disable_gpio,
     VAR_2->wlan_led_gpio,
     VAR_2->rx_band_select_gpio);

 FUNC_0("| TxRxGain: %d, SwReg: %d |\n",
     VAR_2->txrxgain,
     VAR_2->swreg);
}
