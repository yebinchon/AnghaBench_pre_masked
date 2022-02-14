
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hisi_qm_hw_error {int int_msk; scalar_t__ msg; } ;
struct hisi_qm {int msi_mask; scalar_t__ io_base; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,scalar_t__,int) ;
 struct hisi_qm_hw_error* VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 const struct hisi_qm_hw_error *VAR_6 = VAR_3;
 struct hisi_qm *VAR_7 = VAR_5;
 struct device *VAR_8 = &VAR_7->pdev->dev;
 u32 VAR_9, VAR_10;


 VAR_10 = FUNC_1(VAR_7->io_base + VAR_2);
 VAR_9 = VAR_7->msi_mask & VAR_10;

 while (VAR_6->msg) {
  if (VAR_6->int_msk & VAR_9)
   FUNC_0(VAR_8, "%s [error status=0x%x] found\n",
    VAR_6->msg, VAR_6->int_msk);

  VAR_6++;
 }


 FUNC_2(VAR_9, VAR_7->io_base + VAR_1);

 return VAR_0;
}
