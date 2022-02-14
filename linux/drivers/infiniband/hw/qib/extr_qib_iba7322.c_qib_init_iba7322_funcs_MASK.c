
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct qib_pportdata {int dummy; } ;
struct qib_msix_entry {int dummy; } ;
struct qib_devdata {scalar_t__ num_pports; int first_user_ctxt; int flags; int pcidev; TYPE_1__* cspec; scalar_t__* rcd; int f_notify_dca; int f_tempsense_rd; int f_writescratch; int f_sdma_init_early; int f_sdma_hw_start_up; int f_sdma_hw_clean_up; int f_xgxs_reset; int f_wantpiobuf_intr; int f_update_usrhead; int f_txchk_change; int f_setextled; int f_set_intr_state; int f_set_ib_table; int f_get_ib_table; int f_set_ib_loopback; int f_set_ib_cfg; int f_get_ib_cfg; int f_ibphys_portstate; int f_iblink_state; int f_set_cntr_sample; int f_set_armlaunch; int f_sendctrl; int f_sdma_update_tail; int f_sdma_set_desc_cnt; int f_sdma_sendctrl; int f_sdma_gethead; int f_sdma_busy; int f_init_sdma_regs; int f_reset; int f_read_portcntrs; int f_read_cntrs; int f_rcvctrl; int f_quiet_serdes; int f_put_tid; int f_portcntr; int f_setpbc_control; int f_late_initreg; int f_intr_fallback; int f_initvl15_bufs; int f_init_ctxt; int f_ib_updown; int f_hdrqempty; int f_eeprom_wen; int f_gpio_mod; int f_getsendbuf; int f_get_msgheader; int f_get_base_info; int f_free_irq; int f_clear_tids; int f_cleanup; int f_bringup_serdes; } ;
struct qib_chippport_specific {int dummy; } ;
struct qib_chip_specific {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_5__ {scalar_t__ port; } ;
struct TYPE_4__ {int num_msix_entries; int msix_entries; } ;


 int FUNC_0 (TYPE_2__*) ;
 struct qib_devdata* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct qib_devdata*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (int,int,int ) ;
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
 struct qib_devdata* FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct qib_devdata*,char*) ;
 int FUNC_7 (int ,char*) ;
 int VAR_38 ;
 int FUNC_8 (struct qib_devdata*) ;
 int FUNC_9 (struct qib_devdata*) ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int FUNC_10 (struct qib_devdata*) ;
 int FUNC_11 (struct qib_devdata*,struct pci_dev*,struct pci_device_id const*) ;
 scalar_t__ FUNC_12 (struct qib_devdata*,int,int*) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_13 (struct qib_devdata*,int) ;
 int VAR_52 ;
 int FUNC_14 (struct qib_devdata*) ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_15 (struct qib_devdata*,int ,int ) ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;

struct qib_devdata *FUNC_16(struct pci_dev *VAR_58,
        const struct pci_device_id *VAR_59)
{
 struct qib_devdata *VAR_60;
 int VAR_61, VAR_62;
 u32 VAR_63, VAR_64 = 0;

 VAR_60 = FUNC_5(VAR_58,
  VAR_1 * sizeof(struct qib_pportdata) +
  sizeof(struct qib_chip_specific) +
  VAR_1 * sizeof(struct qib_chippport_specific));
 if (FUNC_2(VAR_60))
  goto bail;

 VAR_60->f_bringup_serdes = VAR_7;
 VAR_60->f_cleanup = VAR_51;
 VAR_60->f_clear_tids = VAR_8;
 VAR_60->f_free_irq = VAR_10;
 VAR_60->f_get_base_info = VAR_11;
 VAR_60->f_get_msgheader = VAR_14;
 VAR_60->f_getsendbuf = VAR_15;
 VAR_60->f_gpio_mod = VAR_3;
 VAR_60->f_eeprom_wen = VAR_9;
 VAR_60->f_hdrqempty = VAR_16;
 VAR_60->f_ib_updown = VAR_17;
 VAR_60->f_init_ctxt = VAR_19;
 VAR_60->f_initvl15_bufs = VAR_20;
 VAR_60->f_intr_fallback = VAR_21;
 VAR_60->f_late_initreg = VAR_40;
 VAR_60->f_setpbc_control = VAR_35;
 VAR_60->f_portcntr = VAR_42;
 VAR_60->f_put_tid = VAR_26;
 VAR_60->f_quiet_serdes = VAR_23;
 VAR_60->f_rcvctrl = VAR_55;
 VAR_60->f_read_cntrs = VAR_43;
 VAR_60->f_read_portcntrs = VAR_44;
 VAR_60->f_reset = VAR_38;
 VAR_60->f_init_sdma_regs = VAR_4;
 VAR_60->f_sdma_busy = VAR_45;
 VAR_60->f_sdma_gethead = VAR_46;
 VAR_60->f_sdma_sendctrl = VAR_30;
 VAR_60->f_sdma_set_desc_cnt = VAR_47;
 VAR_60->f_sdma_update_tail = VAR_48;
 VAR_60->f_sendctrl = VAR_56;
 VAR_60->f_set_armlaunch = VAR_49;
 VAR_60->f_set_cntr_sample = VAR_50;
 VAR_60->f_iblink_state = VAR_18;
 VAR_60->f_ibphys_portstate = VAR_25;
 VAR_60->f_get_ib_cfg = VAR_12;
 VAR_60->f_set_ib_cfg = VAR_31;
 VAR_60->f_set_ib_loopback = VAR_34;
 VAR_60->f_get_ib_table = VAR_13;
 VAR_60->f_set_ib_table = VAR_32;
 VAR_60->f_set_intr_state = VAR_33;
 VAR_60->f_setextled = VAR_52;
 VAR_60->f_txchk_change = VAR_37;
 VAR_60->f_update_usrhead = VAR_53;
 VAR_60->f_wantpiobuf_intr = VAR_54;
 VAR_60->f_xgxs_reset = VAR_22;
 VAR_60->f_sdma_hw_clean_up = VAR_27;
 VAR_60->f_sdma_hw_start_up = VAR_28;
 VAR_60->f_sdma_init_early = VAR_29;
 VAR_60->f_writescratch = VAR_57;
 VAR_60->f_tempsense_rd = VAR_36;
 VAR_61 = FUNC_11(VAR_60, VAR_58, VAR_59);
 if (VAR_61 < 0)
  goto bail_free;


 VAR_61 = FUNC_9(VAR_60);
 if (VAR_61)
  goto bail_cleanup;

 if (VAR_41 || !VAR_60->num_pports)
  goto bail;







 VAR_63 = VAR_60->first_user_ctxt + FUNC_0(VAR_5);
 for (VAR_62 = 0; VAR_62 < VAR_63; VAR_62++)
  if ((VAR_62 < FUNC_0(VAR_5) &&
       VAR_5[VAR_62].port <= VAR_60->num_pports) ||
      (VAR_62 >= FUNC_0(VAR_5) &&
       VAR_60->rcd[VAR_62 - FUNC_0(VAR_5)]))
   VAR_64++;

 if (VAR_39)
  VAR_64 -= VAR_60->num_pports;

 VAR_63 = VAR_64;
 VAR_60->cspec->msix_entries = FUNC_4(VAR_63,
       sizeof(struct qib_msix_entry),
       VAR_0);
 if (!VAR_60->cspec->msix_entries)
  VAR_63 = 0;

 if (FUNC_12(VAR_60, 8, &VAR_63))
  FUNC_6(VAR_60,
   "Failed to setup PCIe or interrupts; continuing anyway\n");

 VAR_60->cspec->num_msix_entries = VAR_63;


 FUNC_13(VAR_60, 1);


 FUNC_15(VAR_60, VAR_6, 0);







 goto bail;

bail_cleanup:
 FUNC_10(VAR_60);
bail_free:
 FUNC_8(VAR_60);
 VAR_60 = FUNC_1(VAR_61);
bail:
 return VAR_60;
}
