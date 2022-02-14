
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hisi_zip_hw_error {int int_msk; scalar_t__ msg; } ;
struct TYPE_4__ {scalar_t__ io_base; TYPE_1__* pdev; } ;
struct hisi_zip {TYPE_2__ qm; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 int FUNC_1 (scalar_t__) ;
 struct hisi_zip_hw_error* VAR_4 ;

__attribute__((used)) static void FUNC_2(struct hisi_zip *VAR_5, u32 VAR_6)
{
 const struct hisi_zip_hw_error *VAR_7 = VAR_4;
 struct device *VAR_8 = &VAR_5->qm.pdev->dev;
 u32 VAR_9;

 while (VAR_7->msg) {
  if (VAR_7->int_msk & VAR_6) {
   FUNC_0(VAR_8, "%s [error status=0x%x] found\n",
     VAR_7->msg, VAR_7->int_msk);

   if (VAR_0 & VAR_7->int_msk) {
    VAR_9 = FUNC_1(VAR_5->qm.io_base +
      VAR_1);
    FUNC_0(VAR_8, "hisi-zip multi ecc sram num=0x%x\n",
      ((VAR_9 >> VAR_3) &
       0xFF));
    FUNC_0(VAR_8, "hisi-zip multi ecc sram addr=0x%x\n",
      (VAR_9 >> VAR_2));
   }
  }
  VAR_7++;
 }
}
