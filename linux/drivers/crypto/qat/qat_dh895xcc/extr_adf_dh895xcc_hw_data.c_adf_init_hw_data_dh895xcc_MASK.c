
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adf_hw_device_data {int num_logical_accel; int min_iov_compat_ver; int reset_device; int enable_vf2pf_comms; int enable_ints; int get_arb_mapping; int exit_arb; int init_arb; int send_admin_init; int disable_iov; int exit_admin_comms; int init_admin_comms; int fw_mmp_name; int fw_name; int get_sku; int get_sram_bar_id; int get_vintmsk_offset; int get_pf2vf_offset; int get_misc_bar_id; int get_etr_bar_id; int get_num_aes; int get_num_accels; int get_ae_mask; int get_accel_mask; int enable_error_correction; int free_irq; int alloc_irq; int tx_rings_mask; int tx_rx_gap; int num_engines; int num_accel; int num_banks; scalar_t__ instance_id; TYPE_1__* dev_class; } ;
struct TYPE_2__ {int instances; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_1__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;

void FUNC_0(struct adf_hw_device_data *VAR_32)
{
 VAR_32->dev_class = &VAR_21;
 VAR_32->instance_id = VAR_21.instances++;
 VAR_32->num_banks = VAR_0;
 VAR_32->num_accel = VAR_3;
 VAR_32->num_logical_accel = 1;
 VAR_32->num_engines = VAR_2;
 VAR_32->tx_rx_gap = VAR_5;
 VAR_32->tx_rings_mask = VAR_6;
 VAR_32->alloc_irq = VAR_16;
 VAR_32->free_irq = VAR_17;
 VAR_32->enable_error_correction = VAR_9;
 VAR_32->get_accel_mask = VAR_22;
 VAR_32->get_ae_mask = VAR_23;
 VAR_32->get_num_accels = VAR_26;
 VAR_32->get_num_aes = VAR_27;
 VAR_32->get_etr_bar_id = VAR_24;
 VAR_32->get_misc_bar_id = VAR_25;
 VAR_32->get_pf2vf_offset = VAR_28;
 VAR_32->get_vintmsk_offset = VAR_31;
 VAR_32->get_sram_bar_id = VAR_30;
 VAR_32->get_sku = VAR_29;
 VAR_32->fw_name = VAR_1;
 VAR_32->fw_mmp_name = VAR_4;
 VAR_32->init_admin_comms = VAR_14;
 VAR_32->exit_admin_comms = VAR_11;
 VAR_32->disable_iov = VAR_8;
 VAR_32->send_admin_init = VAR_20;
 VAR_32->init_arb = VAR_15;
 VAR_32->exit_arb = VAR_12;
 VAR_32->get_arb_mapping = VAR_13;
 VAR_32->enable_ints = VAR_10;
 VAR_32->enable_vf2pf_comms = VAR_18;
 VAR_32->reset_device = VAR_19;
 VAR_32->min_iov_compat_ver = VAR_7;
}
