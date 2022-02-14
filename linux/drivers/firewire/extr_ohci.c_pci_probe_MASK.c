
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ vendor; unsigned short device; unsigned short revision; int irq; int dev; } ;
struct iso_context {int dummy; } ;
struct TYPE_6__ {int device; int index; } ;
struct fw_ohci {int quirks; unsigned long long ir_context_channels; int ir_context_support; int ir_context_mask; int n_ir; int it_context_support; int it_context_mask; int n_it; int * registers; scalar_t__ misc_buffer_bus; scalar_t__ misc_buffer; TYPE_2__ card; int ar_request_ctx; int ar_response_ctx; int at_request_ctx; int at_response_ctx; struct fw_ohci* it_context_list; struct fw_ohci* ir_context_list; scalar_t__ self_id_bus; scalar_t__ self_id; int bus_reset_work; int phy_reg_mutex; int lock; } ;
struct descriptor {int dummy; } ;
struct TYPE_5__ {scalar_t__ vendor; unsigned short device; unsigned short revision; int flags; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
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
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (int *,struct fw_ohci*,int,int ) ;
 int FUNC_4 (int *) ;
 int VAR_28 ;
 int FUNC_5 (int *,struct fw_ohci*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int ,int,scalar_t__*,int ) ;
 int FUNC_9 (int ,int,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,struct fw_ohci*) ;
 int FUNC_11 (TYPE_2__*,int,int,int) ;
 int FUNC_12 (TYPE_2__*,int *,int *) ;
 int VAR_29 ;
 void* FUNC_13 (int) ;
 int VAR_30 ;
 int FUNC_14 (struct fw_ohci*) ;
 void* FUNC_15 (size_t,int ) ;
 int FUNC_16 (int *) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_17 (struct fw_ohci*,char*,...) ;
 int FUNC_18 (struct fw_ohci*,char*,...) ;
 TYPE_1__* VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*) ;
 int * FUNC_24 (struct pci_dev*,int ,scalar_t__) ;
 int FUNC_25 (struct pci_dev*,int *) ;
 int FUNC_26 (struct pci_dev*,int ) ;
 int FUNC_27 (struct pci_dev*,int ,int ) ;
 int FUNC_28 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_29 (struct pci_dev*,int ) ;
 int FUNC_30 (struct pci_dev*,struct fw_ohci*) ;
 int FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (struct pci_dev*,int ,int ) ;
 int FUNC_33 (struct pci_dev*) ;
 int FUNC_34 (struct pci_dev*) ;
 int FUNC_35 (struct fw_ohci*,int ) ;
 int FUNC_36 (struct fw_ohci*,int ,int ) ;
 scalar_t__ FUNC_37 (int ,int ,int ,int ,struct fw_ohci*) ;
 int FUNC_38 (int *) ;

__attribute__((used)) static int FUNC_39(struct pci_dev *VAR_35,
          const struct pci_device_id *VAR_36)
{
 struct fw_ohci *VAR_37;
 u32 VAR_38, VAR_39, VAR_40, VAR_41;
 u64 VAR_42;
 int VAR_43, VAR_44;
 size_t VAR_45;

 if (VAR_35->vendor == VAR_25) {
  FUNC_7(&VAR_35->dev, "Pinnacle MovieBoard is not yet supported\n");
  return -VAR_3;
 }

 VAR_37 = FUNC_15(sizeof(*VAR_37), VAR_5);
 if (VAR_37 == ((void*)0)) {
  VAR_44 = -VAR_2;
  goto fail;
 }

 FUNC_12(&VAR_37->card, &VAR_31, &VAR_35->dev);

 FUNC_34(VAR_35);

 VAR_44 = FUNC_22(VAR_35);
 if (VAR_44) {
  FUNC_7(&VAR_35->dev, "failed to enable OHCI hardware\n");
  goto fail_free;
 }

 FUNC_31(VAR_35);
 FUNC_32(VAR_35, VAR_19, 0);
 FUNC_30(VAR_35, VAR_37);

 FUNC_38(&VAR_37->lock);
 FUNC_16(&VAR_37->phy_reg_mutex);

 FUNC_2(&VAR_37->bus_reset_work, VAR_28);

 if (!(FUNC_28(VAR_35, 0) & VAR_6) ||
     FUNC_29(VAR_35, 0) < VAR_21) {
  FUNC_17(VAR_37, "invalid MMIO resource\n");
  VAR_44 = -VAR_4;
  goto fail_disable;
 }

 VAR_44 = FUNC_27(VAR_35, 0, VAR_32);
 if (VAR_44) {
  FUNC_17(VAR_37, "MMIO resource unavailable\n");
  goto fail_disable;
 }

 VAR_37->registers = FUNC_24(VAR_35, 0, VAR_21);
 if (VAR_37->registers == ((void*)0)) {
  FUNC_17(VAR_37, "failed to remap registers\n");
  VAR_44 = -VAR_4;
  goto fail_iomem;
 }

 for (VAR_43 = 0; VAR_43 < FUNC_0(VAR_33); VAR_43++)
  if ((VAR_33[VAR_43].vendor == VAR_35->vendor) &&
      (VAR_33[VAR_43].device == (unsigned short)VAR_24 ||
       VAR_33[VAR_43].device == VAR_35->device) &&
      (VAR_33[VAR_43].revision == (unsigned short)VAR_24 ||
       VAR_33[VAR_43].revision >= VAR_35->revision)) {
   VAR_37->quirks = VAR_33[VAR_43].flags;
   break;
  }
 if (VAR_34)
  VAR_37->quirks = VAR_34;






 FUNC_1(VAR_0 * sizeof(struct descriptor) > VAR_23/4);
 FUNC_1(VAR_27 > VAR_23/2);
 VAR_37->misc_buffer = FUNC_8(VAR_37->card.device,
            VAR_23,
            &VAR_37->misc_buffer_bus,
            VAR_5);
 if (!VAR_37->misc_buffer) {
  VAR_44 = -VAR_2;
  goto fail_iounmap;
 }

 VAR_44 = FUNC_3(&VAR_37->ar_request_ctx, VAR_37, 0,
         VAR_8);
 if (VAR_44 < 0)
  goto fail_misc_buf;

 VAR_44 = FUNC_3(&VAR_37->ar_response_ctx, VAR_37, VAR_23/4,
         VAR_10);
 if (VAR_44 < 0)
  goto fail_arreq_ctx;

 VAR_44 = FUNC_5(&VAR_37->at_request_ctx, VAR_37,
      VAR_9, VAR_29);
 if (VAR_44 < 0)
  goto fail_arrsp_ctx;

 VAR_44 = FUNC_5(&VAR_37->at_response_ctx, VAR_37,
      VAR_11, VAR_29);
 if (VAR_44 < 0)
  goto fail_atreq_ctx;

 FUNC_36(VAR_37, VAR_16, ~0);
 VAR_37->ir_context_channels = ~0ULL;
 VAR_37->ir_context_support = FUNC_35(VAR_37, VAR_16);
 FUNC_36(VAR_37, VAR_15, ~0);
 VAR_37->ir_context_mask = VAR_37->ir_context_support;
 VAR_37->n_ir = FUNC_13(VAR_37->ir_context_mask);
 VAR_45 = sizeof(struct iso_context) * VAR_37->n_ir;
 VAR_37->ir_context_list = FUNC_15(VAR_45, VAR_5);

 FUNC_36(VAR_37, VAR_18, ~0);
 VAR_37->it_context_support = FUNC_35(VAR_37, VAR_18);

 if (!VAR_37->it_context_support) {
  FUNC_18(VAR_37, "overriding IsoXmitIntMask\n");
  VAR_37->it_context_support = 0xf;
 }
 FUNC_36(VAR_37, VAR_17, ~0);
 VAR_37->it_context_mask = VAR_37->it_context_support;
 VAR_37->n_it = FUNC_13(VAR_37->it_context_mask);
 VAR_45 = sizeof(struct iso_context) * VAR_37->n_it;
 VAR_37->it_context_list = FUNC_15(VAR_45, VAR_5);

 if (VAR_37->it_context_list == ((void*)0) || VAR_37->ir_context_list == ((void*)0)) {
  VAR_44 = -VAR_2;
  goto fail_contexts;
 }

 VAR_37->self_id = VAR_37->misc_buffer + VAR_23/2;
 VAR_37->self_id_bus = VAR_37->misc_buffer_bus + VAR_23/2;

 VAR_38 = FUNC_35(VAR_37, VAR_12);
 VAR_39 = (VAR_38 >> 12) & 0xf;
 VAR_40 = VAR_38 & 0x7;
 VAR_42 = ((u64) FUNC_35(VAR_37, VAR_13) << 32) |
  FUNC_35(VAR_37, VAR_14);

 if (!(VAR_37->quirks & VAR_26))
  FUNC_23(VAR_35);
 if (FUNC_37(VAR_35->irq, VAR_30,
   FUNC_19(VAR_35) ? 0 : VAR_7,
   VAR_32, VAR_37)) {
  FUNC_17(VAR_37, "failed to allocate interrupt %d\n", VAR_35->irq);
  VAR_44 = -VAR_1;
  goto fail_msi;
 }

 VAR_44 = FUNC_11(&VAR_37->card, VAR_39, VAR_40, VAR_42);
 if (VAR_44)
  goto fail_irq;

 VAR_41 = FUNC_35(VAR_37, VAR_22) & 0x00ff00ff;
 FUNC_18(VAR_37,
      "added OHCI v%x.%x device as card %d, "
      "%d IR + %d IT contexts, quirks 0x%x%s\n",
      VAR_41 >> 16, VAR_41 & 0xff, VAR_37->card.index,
      VAR_37->n_ir, VAR_37->n_it, VAR_37->quirks,
      FUNC_35(VAR_37, VAR_20) ?
   ", physUB" : "");

 return 0;

 fail_irq:
 FUNC_10(VAR_35->irq, VAR_37);
 fail_msi:
 FUNC_21(VAR_35);
 fail_contexts:
 FUNC_14(VAR_37->ir_context_list);
 FUNC_14(VAR_37->it_context_list);
 FUNC_6(&VAR_37->at_response_ctx);
 fail_atreq_ctx:
 FUNC_6(&VAR_37->at_request_ctx);
 fail_arrsp_ctx:
 FUNC_4(&VAR_37->ar_response_ctx);
 fail_arreq_ctx:
 FUNC_4(&VAR_37->ar_request_ctx);
 fail_misc_buf:
 FUNC_9(VAR_37->card.device, VAR_23,
     VAR_37->misc_buffer, VAR_37->misc_buffer_bus);
 fail_iounmap:
 FUNC_25(VAR_35, VAR_37->registers);
 fail_iomem:
 FUNC_26(VAR_35, 0);
 fail_disable:
 FUNC_20(VAR_35);
 fail_free:
 FUNC_14(VAR_37);
 FUNC_33(VAR_35);
 fail:
 return VAR_44;
}
