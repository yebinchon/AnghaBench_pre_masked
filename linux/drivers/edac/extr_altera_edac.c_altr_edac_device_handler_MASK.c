
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_device_prv_data {scalar_t__ ue_clear_mask; scalar_t__ ce_clear_mask; } ;
struct edac_device_ctl_info {struct altr_edac_device_dev* pvt_info; } ;
struct altr_edac_device_dev {int sb_irq; int db_irq; int edac_dev_name; int base; struct edac_device_prv_data* data; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_2 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 irqreturn_t VAR_4 = VAR_1;
 struct edac_device_ctl_info *VAR_5 = VAR_3;
 struct altr_edac_device_dev *VAR_6 = VAR_5->pvt_info;
 const struct edac_device_prv_data *VAR_7 = VAR_6->data;

 if (VAR_2 == VAR_6->sb_irq) {
  if (VAR_7->ce_clear_mask)
   FUNC_4(VAR_7->ce_clear_mask, VAR_6->base);
  FUNC_1(VAR_5, 0, 0, VAR_6->edac_dev_name);
  VAR_4 = VAR_0;
 } else if (VAR_2 == VAR_6->db_irq) {
  if (VAR_7->ue_clear_mask)
   FUNC_4(VAR_7->ue_clear_mask, VAR_6->base);
  FUNC_2(VAR_5, 0, 0, VAR_6->edac_dev_name);
  FUNC_3("\nEDAC:ECC_DEVICE[Uncorrectable errors]\n");
  VAR_4 = VAR_0;
 } else {
  FUNC_0(1);
 }

 return VAR_4;
}
