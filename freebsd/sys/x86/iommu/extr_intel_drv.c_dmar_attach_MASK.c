
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct dmar_unit {int hw_cap; int hw_ecap; int ctx_obj; int domids; int domains; int lock; TYPE_1__* intrs; int hw_ver; int * regs; int reg_rid; int base; int segment; int unit; int dev; } ;
typedef int device_t ;
struct TYPE_6__ {int Address; int Segment; } ;
struct TYPE_5__ {int irq; char* name; int disable_intr; int enable_intr; int msi_uaddr_reg; int msi_addr_reg; int msi_data_reg; int handler; int irq_rid; } ;
typedef TYPE_2__ ACPI_DMAR_HARDWARE_UNIT ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct dmar_unit*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct dmar_unit*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct dmar_unit*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ VAR_26 ;
 int * FUNC_8 (int ,int ,int *,int ) ;
 struct dmar_unit* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,struct dmar_unit*,size_t) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_13 (struct dmar_unit*) ;
 int VAR_31 ;
 TYPE_2__* FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (struct dmar_unit*) ;
 int FUNC_17 (struct dmar_unit*) ;
 int FUNC_18 (struct dmar_unit*) ;
 int FUNC_19 (struct dmar_unit*) ;
 int FUNC_20 (struct dmar_unit*) ;
 int FUNC_21 (struct dmar_unit*) ;
 int FUNC_22 (struct dmar_unit*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ,int ,int) ;
 int FUNC_25 (int ,struct dmar_unit*,TYPE_2__*) ;
 int VAR_32 ;
 int FUNC_26 (struct dmar_unit*) ;
 int FUNC_27 (struct dmar_unit*,int ) ;
 void* FUNC_28 (struct dmar_unit*,int ) ;
 int FUNC_29 (int ,struct dmar_unit*) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int *,char*,int *,int ) ;
 int FUNC_32 (int ,int ,int *) ;
 int FUNC_33 (int ,int *,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_34(device_t VAR_33)
{
 struct dmar_unit *VAR_34;
 ACPI_DMAR_HARDWARE_UNIT *VAR_35;
 uint64_t VAR_36;
 int VAR_37, VAR_38;

 VAR_34 = FUNC_9(VAR_33);
 VAR_34->dev = VAR_33;
 VAR_34->unit = FUNC_10(VAR_33);
 VAR_35 = FUNC_14(VAR_34->unit);
 if (VAR_35 == ((void*)0))
  return (VAR_20);
 VAR_34->segment = VAR_35->Segment;
 VAR_34->base = VAR_35->Address;
 VAR_34->reg_rid = VAR_18;
 VAR_34->regs = FUNC_8(VAR_33, VAR_25,
     &VAR_34->reg_rid, VAR_24);
 if (VAR_34->regs == ((void*)0)) {
  FUNC_11(VAR_33, "cannot allocate register window\n");
  return (VAR_21);
 }
 VAR_34->hw_ver = FUNC_27(VAR_34, VAR_19);
 VAR_34->hw_cap = FUNC_28(VAR_34, VAR_1);
 VAR_34->hw_ecap = FUNC_28(VAR_34, VAR_4);
 if (VAR_26)
  FUNC_25(VAR_33, VAR_34, VAR_35);
 FUNC_26(VAR_34);

 VAR_36 = FUNC_15();
 FUNC_6("hw.dmar.timeout", &VAR_36);
 FUNC_30(VAR_36);

 for (VAR_37 = 0; VAR_37 < VAR_14; VAR_37++)
  VAR_34->intrs[VAR_37].irq = -1;

 VAR_34->intrs[VAR_12].name = "fault";
 VAR_34->intrs[VAR_12].irq_rid = VAR_5;
 VAR_34->intrs[VAR_12].handler = VAR_31;
 VAR_34->intrs[VAR_12].msi_data_reg = VAR_7;
 VAR_34->intrs[VAR_12].msi_addr_reg = VAR_6;
 VAR_34->intrs[VAR_12].msi_uaddr_reg = VAR_8;
 VAR_34->intrs[VAR_12].enable_intr = VAR_29;
 VAR_34->intrs[VAR_12].disable_intr = VAR_27;
 VAR_38 = FUNC_12(VAR_33, VAR_34, VAR_12);
 if (VAR_38 != 0) {
  FUNC_29(VAR_33, VAR_34);
  return (VAR_38);
 }
 if (FUNC_1(VAR_34)) {
  VAR_34->intrs[VAR_13].name = "qi";
  VAR_34->intrs[VAR_13].irq_rid = VAR_17;
  VAR_34->intrs[VAR_13].handler = VAR_32;
  VAR_34->intrs[VAR_13].msi_data_reg = VAR_10;
  VAR_34->intrs[VAR_13].msi_addr_reg = VAR_9;
  VAR_34->intrs[VAR_13].msi_uaddr_reg = VAR_11;
  VAR_34->intrs[VAR_13].enable_intr = VAR_30;
  VAR_34->intrs[VAR_13].disable_intr = VAR_28;
  VAR_38 = FUNC_12(VAR_33, VAR_34, VAR_13);
  if (VAR_38 != 0) {
   FUNC_29(VAR_33, VAR_34);
   return (VAR_38);
  }
 }

 FUNC_31(&VAR_34->lock, "dmarhw", ((void*)0), VAR_22);
 VAR_34->domids = FUNC_32(0, FUNC_23(FUNC_0(VAR_34->hw_cap)),
     &VAR_34->lock);
 FUNC_5(&VAR_34->domains);
 if ((VAR_34->hw_cap & VAR_0) != 0)
  FUNC_7(VAR_34->domids, 0);

 VAR_34->ctx_obj = FUNC_33(VAR_23, ((void*)0), FUNC_4(1 +
     VAR_2), 0, 0, ((void*)0));






 FUNC_24(VAR_34->ctx_obj, 0, VAR_15 | VAR_16);
 FUNC_2(VAR_34);
 VAR_38 = FUNC_22(VAR_34);
 if (VAR_38 != 0) {
  FUNC_3(VAR_34);
  FUNC_29(VAR_33, VAR_34);
  return (VAR_38);
 }
 VAR_38 = FUNC_20(VAR_34);
 if (VAR_38 != 0) {
  FUNC_3(VAR_34);
  FUNC_29(VAR_33, VAR_34);
  return (VAR_38);
 }
 if ((VAR_34->hw_ecap & VAR_3) != 0) {
  VAR_38 = FUNC_21(VAR_34);
  if (VAR_38 != 0) {
   FUNC_3(VAR_34);
   FUNC_29(VAR_33, VAR_34);
   return (VAR_38);
  }
 }

 FUNC_3(VAR_34);
 VAR_38 = FUNC_17(VAR_34);
 if (VAR_38 != 0) {
  FUNC_29(VAR_33, VAR_34);
  return (VAR_38);
 }
 VAR_38 = FUNC_19(VAR_34);
 if (VAR_38 != 0) {
  FUNC_29(VAR_33, VAR_34);
  return (VAR_38);
 }
 VAR_38 = FUNC_18(VAR_34);
 if (VAR_38 != 0) {
  FUNC_29(VAR_33, VAR_34);
  return (VAR_38);
 }
 VAR_38 = FUNC_16(VAR_34);
 if (VAR_38 != 0) {
  FUNC_29(VAR_33, VAR_34);
  return (VAR_38);
 }
 return (0);
}
