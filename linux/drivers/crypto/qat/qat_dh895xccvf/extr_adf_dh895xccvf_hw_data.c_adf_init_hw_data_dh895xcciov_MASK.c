
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adf_hw_device_data {int num_logical_accel; TYPE_1__* dev_class; int min_iov_compat_ver; int enable_vf2pf_comms; void* enable_ints; int get_sku; int get_vintmsk_offset; int get_pf2vf_offset; int get_misc_bar_id; int get_etr_bar_id; int get_num_aes; int get_num_accels; int get_ae_mask; int get_accel_mask; int disable_iov; void* exit_arb; void* init_arb; int send_admin_init; void* exit_admin_comms; void* init_admin_comms; void* enable_error_correction; int free_irq; int alloc_irq; int tx_rings_mask; int tx_rx_gap; int num_engines; int num_accel; int num_banks; } ;
struct TYPE_2__ {int instances; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct adf_hw_device_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

void FUNC_1(struct adf_hw_device_data *VAR_23)
{
 VAR_23->dev_class = &VAR_13;
 VAR_23->num_banks = VAR_0;
 VAR_23->num_accel = VAR_2;
 VAR_23->num_logical_accel = 1;
 VAR_23->num_engines = VAR_1;
 VAR_23->tx_rx_gap = VAR_3;
 VAR_23->tx_rings_mask = VAR_4;
 VAR_23->alloc_irq = VAR_10;
 VAR_23->free_irq = VAR_11;
 VAR_23->enable_error_correction = VAR_12;
 VAR_23->init_admin_comms = VAR_9;
 VAR_23->exit_admin_comms = VAR_12;
 VAR_23->send_admin_init = VAR_7;
 VAR_23->init_arb = VAR_9;
 VAR_23->exit_arb = VAR_12;
 VAR_23->disable_iov = VAR_8;
 VAR_23->get_accel_mask = VAR_14;
 VAR_23->get_ae_mask = VAR_15;
 VAR_23->get_num_accels = VAR_18;
 VAR_23->get_num_aes = VAR_19;
 VAR_23->get_etr_bar_id = VAR_16;
 VAR_23->get_misc_bar_id = VAR_17;
 VAR_23->get_pf2vf_offset = VAR_20;
 VAR_23->get_vintmsk_offset = VAR_22;
 VAR_23->get_sku = VAR_21;
 VAR_23->enable_ints = VAR_12;
 VAR_23->enable_vf2pf_comms = VAR_6;
 VAR_23->min_iov_compat_ver = VAR_5;
 VAR_23->dev_class->instances++;
 FUNC_0(VAR_23);
}
