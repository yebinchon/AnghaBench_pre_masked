
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qib_devdata {int revision; int f_notify_dca; int f_tempsense_rd; int f_writescratch; int f_xgxs_reset; int f_wantpiobuf_intr; int f_update_usrhead; int f_txchk_change; int f_setextled; int f_set_intr_state; int f_set_ib_loopback; int f_set_ib_cfg; int f_get_ib_cfg; int f_ibphys_portstate; int f_iblink_state; int f_set_cntr_sample; int f_set_armlaunch; int f_sendctrl; int f_sdma_init_early; int f_sdma_hw_start_up; int f_sdma_hw_clean_up; int f_sdma_update_tail; int f_sdma_set_desc_cnt; int f_sdma_sendctrl; int f_sdma_gethead; int f_sdma_busy; int f_init_sdma_regs; int f_reset; int f_read_portcntrs; int f_read_cntrs; int f_rcvctrl; int f_quiet_serdes; int f_put_tid; int f_portcntr; int f_setpbc_control; int f_late_initreg; int f_intr_fallback; int f_initvl15_bufs; int f_init_ctxt; int f_ib_updown; int f_hdrqempty; int f_eeprom_wen; int f_gpio_mod; int f_getsendbuf; int f_get_msgheader; int f_get_base_info; int f_free_irq; int f_clear_tids; int f_cleanup; int f_bringup_serdes; } ;
struct qib_chippport_specific {int dummy; } ;
struct qib_chip_specific {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 struct qib_devdata* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct qib_devdata*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ) ;
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
 int FUNC_3 (struct qib_devdata*) ;
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
 struct qib_devdata* FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct qib_devdata*,char*) ;
 int FUNC_6 (struct qib_devdata*) ;
 int VAR_36 ;
 int FUNC_7 (struct qib_devdata*) ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int FUNC_8 (struct qib_devdata*) ;
 int FUNC_9 (struct qib_devdata*,struct pci_dev*,struct pci_device_id const*) ;
 scalar_t__ FUNC_10 (struct qib_devdata*,int,int *) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_11 (struct qib_devdata*,int ) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_12 (struct qib_devdata*) ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_13 (struct qib_devdata*,int ,int) ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;

struct qib_devdata *FUNC_14(struct pci_dev *VAR_56,
        const struct pci_device_id *VAR_57)
{
 struct qib_devdata *VAR_58;
 int VAR_59;
 u32 VAR_60, VAR_61;

 VAR_58 = FUNC_4(VAR_56, sizeof(struct qib_chip_specific) +
  sizeof(struct qib_chippport_specific));
 if (FUNC_1(VAR_58))
  goto bail;

 VAR_58->f_bringup_serdes = VAR_8;
 VAR_58->f_cleanup = VAR_48;
 VAR_58->f_clear_tids = VAR_9;
 VAR_58->f_free_irq = VAR_36;
 VAR_58->f_get_base_info = VAR_11;
 VAR_58->f_get_msgheader = VAR_13;
 VAR_58->f_getsendbuf = VAR_14;
 VAR_58->f_gpio_mod = VAR_3;
 VAR_58->f_eeprom_wen = VAR_10;
 VAR_58->f_hdrqempty = VAR_15;
 VAR_58->f_ib_updown = VAR_16;
 VAR_58->f_init_ctxt = VAR_18;
 VAR_58->f_initvl15_bufs = VAR_19;
 VAR_58->f_intr_fallback = VAR_20;
 VAR_58->f_late_initreg = VAR_37;
 VAR_58->f_setpbc_control = VAR_32;
 VAR_58->f_portcntr = VAR_39;
 VAR_58->f_put_tid = VAR_23;
 VAR_58->f_quiet_serdes = VAR_24;
 VAR_58->f_rcvctrl = VAR_53;
 VAR_58->f_read_cntrs = VAR_40;
 VAR_58->f_read_portcntrs = VAR_41;
 VAR_58->f_reset = VAR_49;
 VAR_58->f_init_sdma_regs = VAR_4;
 VAR_58->f_sdma_busy = VAR_42;
 VAR_58->f_sdma_gethead = VAR_43;
 VAR_58->f_sdma_sendctrl = VAR_28;
 VAR_58->f_sdma_set_desc_cnt = VAR_44;
 VAR_58->f_sdma_update_tail = VAR_45;
 VAR_58->f_sdma_hw_clean_up = VAR_25;
 VAR_58->f_sdma_hw_start_up = VAR_26;
 VAR_58->f_sdma_init_early = VAR_27;
 VAR_58->f_sendctrl = VAR_54;
 VAR_58->f_set_armlaunch = VAR_46;
 VAR_58->f_set_cntr_sample = VAR_47;
 VAR_58->f_iblink_state = VAR_17;
 VAR_58->f_ibphys_portstate = VAR_22;
 VAR_58->f_get_ib_cfg = VAR_12;
 VAR_58->f_set_ib_cfg = VAR_29;
 VAR_58->f_set_ib_loopback = VAR_31;
 VAR_58->f_set_intr_state = VAR_30;
 VAR_58->f_setextled = VAR_50;
 VAR_58->f_txchk_change = VAR_34;
 VAR_58->f_update_usrhead = VAR_51;
 VAR_58->f_wantpiobuf_intr = VAR_52;
 VAR_58->f_xgxs_reset = VAR_35;
 VAR_58->f_writescratch = VAR_55;
 VAR_58->f_tempsense_rd = VAR_33;
 VAR_59 = FUNC_9(VAR_58, VAR_56, VAR_57);
 if (VAR_59 < 0)
  goto bail_free;


 VAR_59 = FUNC_7(VAR_58);
 if (VAR_59)
  goto bail_cleanup;

 if (VAR_38)
  goto bail;

 VAR_60 = FUNC_2(VAR_58->revision, VAR_2,
       VAR_0);
 switch (VAR_60) {
 case 0:
 case 2:
 case 10:
 case 12:
  VAR_61 = 16;
  break;
 default:
  VAR_61 = 8;
  break;
 }
 if (FUNC_10(VAR_58, VAR_61, ((void*)0)))
  FUNC_5(VAR_58,
   "Failed to setup PCIe or interrupts; continuing anyway\n");

 if (FUNC_11(VAR_58, VAR_7) &
     VAR_1)
  FUNC_13(VAR_58, VAR_6,
          VAR_1);


 FUNC_12(VAR_58);
 FUNC_3(VAR_58);


 FUNC_13(VAR_58, VAR_5, 0);

 goto bail;

bail_cleanup:
 FUNC_8(VAR_58);
bail_free:
 FUNC_6(VAR_58);
 VAR_58 = FUNC_0(VAR_59);
bail:
 return VAR_58;
}
