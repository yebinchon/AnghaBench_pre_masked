
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hisi_qm_hw_error {int int_msk; scalar_t__ msg; } ;
struct hisi_qm {scalar_t__ io_base; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct device*,char*,...) ;
 int * VAR_10 ;
 int * VAR_11 ;
 struct hisi_qm_hw_error* VAR_12 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct hisi_qm *VAR_13, u32 VAR_14)
{
 const struct hisi_qm_hw_error *VAR_15 = VAR_12;
 struct device *VAR_16 = &VAR_13->pdev->dev;
 u32 VAR_17, VAR_18, VAR_19;

 while (VAR_15->msg) {
  if (VAR_15->int_msk & VAR_14) {
   FUNC_1(VAR_16, "%s [error status=0x%x] found\n",
    VAR_15->msg, VAR_15->int_msk);

   if (VAR_14 & VAR_2) {
    VAR_17 = FUNC_2(VAR_13->io_base +
      VAR_1);
    VAR_18 = (VAR_17 & VAR_3) >>
           VAR_4;
    VAR_19 = VAR_17 & VAR_5;
    FUNC_1(VAR_16, "qm %s doorbell timeout in function %u\n",
     VAR_10[VAR_18], VAR_19);
   }

   if (VAR_14 & VAR_9) {
    VAR_17 = FUNC_2(VAR_13->io_base +
      VAR_0);
    VAR_18 = (VAR_17 & VAR_6) >>
           VAR_7;
    VAR_19 = VAR_17 & VAR_8;

    if (VAR_18 < FUNC_0(VAR_11))
     FUNC_1(VAR_16, "qm %s fifo overflow in function %u\n",
      VAR_11[VAR_18],
      VAR_19);
    else
     FUNC_1(VAR_16, "unknown error type\n");
   }
  }
  VAR_15++;
 }
}
