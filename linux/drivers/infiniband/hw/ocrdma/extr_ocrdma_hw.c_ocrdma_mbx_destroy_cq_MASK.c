
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_mqe {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct ocrdma_dev {TYPE_2__ nic_info; } ;
struct ocrdma_destroy_cq {int bypass_flush_qid; int req; } ;
struct ocrdma_cq {int id; int pa; int va; int len; int eqn; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (struct ocrdma_destroy_cq*) ;
 struct ocrdma_destroy_cq* FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (struct ocrdma_dev*,struct ocrdma_mqe*) ;
 int FUNC_5 (struct ocrdma_dev*,int ) ;

void FUNC_6(struct ocrdma_dev *VAR_4, struct ocrdma_cq *VAR_5)
{
 struct ocrdma_destroy_cq *VAR_6;

 VAR_6 = FUNC_2(VAR_0, sizeof(*VAR_6));
 if (!VAR_6)
  return;
 FUNC_3(&VAR_6->req, VAR_0,
   VAR_3, sizeof(*VAR_6));

 VAR_6->bypass_flush_qid |=
     (VAR_5->id << VAR_2) &
     VAR_1;

 FUNC_4(VAR_4, (struct ocrdma_mqe *)VAR_6);
 FUNC_5(VAR_4, VAR_5->eqn);
 FUNC_0(&VAR_4->nic_info.pdev->dev, VAR_5->len, VAR_5->va, VAR_5->pa);
 FUNC_1(VAR_6);
}
