
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_sci_rm_udmap_ops {int rx_flow_cfg; int rx_ch_cfg; int tx_ch_cfg; } ;
struct ti_sci_rm_ringacc_ops {int get_config; int config; } ;
struct ti_sci_rm_psil_ops {int unpair; int pair; } ;
struct ti_sci_rm_irq_ops {int free_event_map; int free_irq; int set_event_map; int set_irq; } ;
struct ti_sci_rm_core_ops {int get_range_from_shost; int get_range; } ;
struct ti_sci_proc_ops {int get_status; int set_control; int set_config; int handover; int release; int request; } ;
struct ti_sci_clk_ops {int get_freq; int set_freq; int get_best_match_freq; int get_num_parents; int get_parent; int set_parent; int is_off; int is_on; int is_auto; int put_clock; int idle_clock; int get_clock; } ;
struct ti_sci_dev_ops {int get_device_resets; int set_device_resets; int is_transitioning; int is_on; int is_stop; int is_idle; int get_context_loss_count; int is_valid; int put_device; int idle_device_exclusive; int idle_device; int get_device_exclusive; int get_device; } ;
struct ti_sci_core_ops {int reboot_device; } ;
struct ti_sci_ops {struct ti_sci_proc_ops proc_ops; struct ti_sci_rm_udmap_ops rm_udmap_ops; struct ti_sci_rm_psil_ops rm_psil_ops; struct ti_sci_rm_ringacc_ops rm_ring_ops; struct ti_sci_rm_irq_ops rm_irq_ops; struct ti_sci_rm_core_ops rm_core_ops; struct ti_sci_clk_ops clk_ops; struct ti_sci_dev_ops dev_ops; struct ti_sci_core_ops core_ops; } ;
struct TYPE_2__ {struct ti_sci_ops ops; } ;
struct ti_sci_info {TYPE_1__ handle; } ;


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
 int VAR_21 ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;

__attribute__((used)) static void FUNC_0(struct ti_sci_info *VAR_45)
{
 struct ti_sci_ops *VAR_46 = &VAR_45->handle.ops;
 struct ti_sci_core_ops *VAR_47 = &VAR_46->core_ops;
 struct ti_sci_dev_ops *VAR_48 = &VAR_46->dev_ops;
 struct ti_sci_clk_ops *VAR_49 = &VAR_46->clk_ops;
 struct ti_sci_rm_core_ops *VAR_50 = &VAR_46->rm_core_ops;
 struct ti_sci_rm_irq_ops *VAR_51 = &VAR_46->rm_irq_ops;
 struct ti_sci_rm_ringacc_ops *VAR_52 = &VAR_46->rm_ring_ops;
 struct ti_sci_rm_psil_ops *VAR_53 = &VAR_46->rm_psil_ops;
 struct ti_sci_rm_udmap_ops *VAR_54 = &VAR_46->rm_udmap_ops;
 struct ti_sci_proc_ops *VAR_55 = &VAR_46->proc_ops;

 VAR_47->reboot_device = VAR_9;

 VAR_48->get_device = VAR_19;
 VAR_48->get_device_exclusive = VAR_20;
 VAR_48->idle_device = VAR_25;
 VAR_48->idle_device_exclusive = VAR_26;
 VAR_48->put_device = VAR_34;

 VAR_48->is_valid = VAR_15;
 VAR_48->get_context_loss_count = VAR_10;
 VAR_48->is_idle = VAR_11;
 VAR_48->is_stop = VAR_13;
 VAR_48->is_on = VAR_12;
 VAR_48->is_transitioning = VAR_14;
 VAR_48->set_device_resets = VAR_42;
 VAR_48->get_device_resets = VAR_21;

 VAR_49->get_clock = VAR_18;
 VAR_49->idle_clock = VAR_24;
 VAR_49->put_clock = VAR_33;
 VAR_49->is_auto = VAR_4;
 VAR_49->is_on = VAR_6;
 VAR_49->is_off = VAR_5;

 VAR_49->set_parent = VAR_8;
 VAR_49->get_parent = VAR_3;
 VAR_49->get_num_parents = VAR_2;

 VAR_49->get_best_match_freq = VAR_1;
 VAR_49->set_freq = VAR_7;
 VAR_49->get_freq = VAR_0;

 VAR_50->get_range = VAR_22;
 VAR_50->get_range_from_shost =
    VAR_23;

 VAR_51->set_irq = VAR_44;
 VAR_51->set_event_map = VAR_43;
 VAR_51->free_irq = VAR_17;
 VAR_51->free_event_map = VAR_16;

 VAR_52->config = VAR_35;
 VAR_52->get_config = VAR_36;

 VAR_53->pair = VAR_37;
 VAR_53->unpair = VAR_38;

 VAR_54->tx_ch_cfg = VAR_41;
 VAR_54->rx_ch_cfg = VAR_39;
 VAR_54->rx_flow_cfg = VAR_40;

 VAR_55->request = VAR_30;
 VAR_55->release = VAR_29;
 VAR_55->handover = VAR_28;
 VAR_55->set_config = VAR_31;
 VAR_55->set_control = VAR_32;
 VAR_55->get_status = VAR_27;
}
