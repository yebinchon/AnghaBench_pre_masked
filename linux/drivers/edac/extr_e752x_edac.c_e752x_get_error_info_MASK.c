
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mem_ctl_info {scalar_t__ pvt_info; } ;
struct e752x_pvt {struct pci_dev* dev_d0f1; TYPE_1__* dev_info; } ;
struct e752x_error_info {int ferr_global; int nsi_ferr; int hi_ferr; int buf_ferr; int dram_sec1_add; int dram_ded_add; int dram_scrb_add; int dram_retr_add; int nerr_global; int nsi_nerr; int hi_nerr; int buf_nerr; int dram_sec2_add; scalar_t__ dram_nerr; scalar_t__ sysbus_nerr; scalar_t__ dram_sec2_syndrome; scalar_t__ dram_ferr; scalar_t__ sysbus_ferr; scalar_t__ dram_sec1_syndrome; } ;
struct TYPE_2__ {scalar_t__ err_dev; } ;


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
 scalar_t__ VAR_20 ;
 int FUNC_0 (struct e752x_error_info*,int ,int) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,scalar_t__*) ;
 int FUNC_4 (struct pci_dev*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 int FUNC_7 (struct pci_dev*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct mem_ctl_info *VAR_21,
     struct e752x_error_info *VAR_22)
{
 struct pci_dev *VAR_23;
 struct e752x_pvt *VAR_24;

 FUNC_0(VAR_22, 0, sizeof(*VAR_22));
 VAR_24 = (struct e752x_pvt *)VAR_21->pvt_info;
 VAR_23 = VAR_24->dev_d0f1;
 FUNC_2(VAR_23, VAR_11, &VAR_22->ferr_global);

 if (VAR_22->ferr_global) {
  if (VAR_24->dev_info->err_dev == VAR_20) {
   FUNC_2(VAR_23, VAR_17,
          &VAR_22->nsi_ferr);
   VAR_22->hi_ferr = 0;
  } else {
   FUNC_1(VAR_23, VAR_12,
          &VAR_22->hi_ferr);
   VAR_22->nsi_ferr = 0;
  }
  FUNC_3(VAR_23, VAR_15,
    &VAR_22->sysbus_ferr);
  FUNC_1(VAR_23, VAR_0, &VAR_22->buf_ferr);
  FUNC_3(VAR_23, VAR_3, &VAR_22->dram_ferr);
  FUNC_2(VAR_23, VAR_7,
    &VAR_22->dram_sec1_add);
  FUNC_3(VAR_23, VAR_8,
    &VAR_22->dram_sec1_syndrome);
  FUNC_2(VAR_23, VAR_2,
    &VAR_22->dram_ded_add);
  FUNC_2(VAR_23, VAR_6,
    &VAR_22->dram_scrb_add);
  FUNC_2(VAR_23, VAR_5,
    &VAR_22->dram_retr_add);


  if (VAR_22->hi_ferr & 0x7f)
   FUNC_5(VAR_23, VAR_12,
     VAR_22->hi_ferr);

  if (VAR_22->nsi_ferr & VAR_19)
   FUNC_6(VAR_23, VAR_17,
     VAR_22->nsi_ferr);

  if (VAR_22->sysbus_ferr)
   FUNC_7(VAR_23, VAR_15,
     VAR_22->sysbus_ferr);

  if (VAR_22->buf_ferr & 0x0f)
   FUNC_5(VAR_23, VAR_0,
     VAR_22->buf_ferr);

  if (VAR_22->dram_ferr)
   FUNC_4(VAR_24->dev_d0f1, VAR_3,
      VAR_22->dram_ferr, VAR_22->dram_ferr);

  FUNC_6(VAR_23, VAR_11,
    VAR_22->ferr_global);
 }

 FUNC_2(VAR_23, VAR_14, &VAR_22->nerr_global);

 if (VAR_22->nerr_global) {
  if (VAR_24->dev_info->err_dev == VAR_20) {
   FUNC_2(VAR_23, VAR_18,
          &VAR_22->nsi_nerr);
   VAR_22->hi_nerr = 0;
  } else {
   FUNC_1(VAR_23, VAR_13,
          &VAR_22->hi_nerr);
   VAR_22->nsi_nerr = 0;
  }
  FUNC_3(VAR_23, VAR_16,
    &VAR_22->sysbus_nerr);
  FUNC_1(VAR_23, VAR_1, &VAR_22->buf_nerr);
  FUNC_3(VAR_23, VAR_4, &VAR_22->dram_nerr);
  FUNC_2(VAR_23, VAR_9,
    &VAR_22->dram_sec2_add);
  FUNC_3(VAR_23, VAR_10,
    &VAR_22->dram_sec2_syndrome);

  if (VAR_22->hi_nerr & 0x7f)
   FUNC_5(VAR_23, VAR_13,
     VAR_22->hi_nerr);

  if (VAR_22->nsi_nerr & VAR_19)
   FUNC_6(VAR_23, VAR_18,
     VAR_22->nsi_nerr);

  if (VAR_22->sysbus_nerr)
   FUNC_7(VAR_23, VAR_16,
     VAR_22->sysbus_nerr);

  if (VAR_22->buf_nerr & 0x0f)
   FUNC_5(VAR_23, VAR_1,
     VAR_22->buf_nerr);

  if (VAR_22->dram_nerr)
   FUNC_4(VAR_24->dev_d0f1, VAR_4,
      VAR_22->dram_nerr, VAR_22->dram_nerr);

  FUNC_6(VAR_23, VAR_14,
    VAR_22->nerr_global);
 }
}
