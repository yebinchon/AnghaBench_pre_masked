
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qm_mailbox {int w0; scalar_t__ rsvd; int base_h; int base_l; int queue_num; } ;
struct hisi_qm {int mailbox_lock; TYPE_1__* pdev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int,unsigned long long) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hisi_qm*,struct qm_mailbox*) ;
 int FUNC_6 (struct hisi_qm*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct hisi_qm *VAR_3, u8 VAR_4, dma_addr_t VAR_5, u16 VAR_6,
   bool VAR_7)
{
 struct qm_mailbox VAR_8;
 int VAR_9 = 0;

 FUNC_0(&VAR_3->pdev->dev, "QM mailbox request to q%u: %u-%llx\n",
  VAR_6, VAR_4, (unsigned long long)VAR_5);

 VAR_8.w0 = VAR_4 |
       (VAR_7 ? 0x1 << VAR_2 : 0) |
       (0x1 << VAR_1);
 VAR_8.queue_num = VAR_6;
 VAR_8.base_l = FUNC_2(VAR_5);
 VAR_8.base_h = FUNC_8(VAR_5);
 VAR_8.rsvd = 0;

 FUNC_3(&VAR_3->mailbox_lock);

 if (FUNC_7(FUNC_6(VAR_3))) {
  VAR_9 = -VAR_0;
  FUNC_1(&VAR_3->pdev->dev, "QM mailbox is busy to start!\n");
  goto busy_unlock;
 }

 FUNC_5(VAR_3, &VAR_8);

 if (FUNC_7(FUNC_6(VAR_3))) {
  VAR_9 = -VAR_0;
  FUNC_1(&VAR_3->pdev->dev, "QM mailbox operation timeout!\n");
  goto busy_unlock;
 }

busy_unlock:
 FUNC_4(&VAR_3->mailbox_lock);

 return VAR_9;
}
