
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hb_l2_drvdata {int sb_irq; int db_irq; scalar_t__ base; } ;
struct edac_device_ctl_info {int ctl_name; struct hb_l2_drvdata* pvt_info; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_1 (struct edac_device_ctl_info*,int ,int ,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct edac_device_ctl_info *VAR_5 = VAR_4;
 struct hb_l2_drvdata *VAR_6 = VAR_5->pvt_info;

 if (VAR_3 == VAR_6->sb_irq) {
  FUNC_2(1, VAR_6->base + VAR_2);
  FUNC_0(VAR_5, 0, 0, VAR_5->ctl_name);
 }
 if (VAR_3 == VAR_6->db_irq) {
  FUNC_2(1, VAR_6->base + VAR_1);
  FUNC_1(VAR_5, 0, 0, VAR_5->ctl_name);
 }

 return VAR_0;
}
