
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct hisi_qm {TYPE_2__* ops; TYPE_1__* pdev; } ;
struct TYPE_4__ {int (* qm_db ) (struct hisi_qm*,int ,int ,int ,int ) ;} ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (struct hisi_qm*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hisi_qm *VAR_0, u16 VAR_1, u8 VAR_2, u16 VAR_3, u8 VAR_4)
{
 FUNC_0(&VAR_0->pdev->dev, "QM doorbell request: qn=%u, cmd=%u, index=%u\n",
  VAR_1, VAR_2, VAR_3);

 VAR_0->ops->qm_db(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
