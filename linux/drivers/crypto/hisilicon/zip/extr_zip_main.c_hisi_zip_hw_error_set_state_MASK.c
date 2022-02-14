
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hisi_qm {scalar_t__ ver; scalar_t__ io_base; TYPE_1__* pdev; } ;
struct hisi_zip {struct hisi_qm qm; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct hisi_zip *VAR_4, bool VAR_5)
{
 struct hisi_qm *VAR_6 = &VAR_4->qm;

 if (VAR_6->ver == VAR_3) {
  FUNC_1(VAR_0, VAR_6->io_base + VAR_1);
  FUNC_0(&VAR_6->pdev->dev, "ZIP v%d does not support hw error handle\n",
    VAR_6->ver);
  return;
 }

 if (VAR_5) {

  FUNC_1(VAR_0, VAR_4->qm.io_base +
           VAR_2);

  FUNC_1(0, VAR_4->qm.io_base + VAR_1);
 } else {

  FUNC_1(VAR_0,
         VAR_4->qm.io_base + VAR_1);
 }
}
