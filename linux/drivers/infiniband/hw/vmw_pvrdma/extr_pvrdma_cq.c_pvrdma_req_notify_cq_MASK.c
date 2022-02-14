
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pvrdma_dev {TYPE_3__* pdev; } ;
struct TYPE_5__ {int cqe; } ;
struct pvrdma_cq {int cq_lock; TYPE_2__ ibcq; TYPE_1__* ring_state; int cq_handle; } ;
struct ib_cq {int device; } ;
typedef enum ib_cq_notify_flags { ____Placeholder_ib_cq_notify_flags } ib_cq_notify_flags ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,unsigned int*) ;
 int FUNC_2 (struct pvrdma_dev*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct pvrdma_cq* FUNC_5 (struct ib_cq*) ;
 struct pvrdma_dev* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct ib_cq *VAR_6,
    enum ib_cq_notify_flags VAR_7)
{
 struct pvrdma_dev *VAR_8 = FUNC_6(VAR_6->device);
 struct pvrdma_cq *VAR_9 = FUNC_5(VAR_6);
 u32 VAR_10 = VAR_9->cq_handle;
 unsigned long VAR_11;
 int VAR_12 = 0;

 VAR_10 |= (VAR_7 & VAR_2) == VAR_1 ?
  VAR_5 : VAR_4;

 FUNC_3(&VAR_9->cq_lock, VAR_11);

 FUNC_2(VAR_8, VAR_10);

 if (VAR_7 & VAR_0) {
  unsigned int VAR_13;

  VAR_12 = FUNC_1(&VAR_9->ring_state->rx,
          VAR_9->ibcq.cqe, &VAR_13);
  if (FUNC_7(VAR_12 == VAR_3))
   FUNC_0(&VAR_8->pdev->dev, "CQ ring state invalid\n");
 }

 FUNC_4(&VAR_9->cq_lock, VAR_11);

 return VAR_12;
}
