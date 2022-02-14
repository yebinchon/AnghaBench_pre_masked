
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_drain_cqe {int done; } ;
struct mlx4_ib_dev {int reset_flow_resource_lock; struct mlx4_dev* dev; } ;
struct TYPE_4__ {int reset_notify_added; int (* comp ) (TYPE_2__*) ;} ;
struct mlx4_ib_cq {TYPE_2__ mcq; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct ib_cq {int poll_ctx; int work; int iop; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ib_cq*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (TYPE_2__*) ;
 struct mlx4_ib_cq* FUNC_8 (struct ib_cq*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11(struct ib_cq *VAR_3,
        struct mlx4_ib_drain_cqe *VAR_4,
        struct mlx4_ib_dev *VAR_5)
{
 struct mlx4_dev *VAR_6 = VAR_5->dev;

 if (VAR_3->poll_ctx == VAR_1) {
  while (FUNC_10(&VAR_4->done, VAR_0 / 10) <= 0)
   FUNC_2(VAR_3, -1);
  return;
 }

 if (VAR_6->persist->state == VAR_2) {
  struct mlx4_ib_cq *VAR_7 = FUNC_8(VAR_3);
  bool VAR_8 = 0;
  unsigned long VAR_9;

  FUNC_5(&VAR_5->reset_flow_resource_lock, VAR_9);

  if (!VAR_7->mcq.reset_notify_added)
   VAR_7->mcq.reset_notify_added = 1;
  else
   VAR_8 = 1;
  FUNC_6(&VAR_5->reset_flow_resource_lock, VAR_9);

  if (VAR_8) {

   switch (VAR_3->poll_ctx) {
   case 129:
    FUNC_3(&VAR_3->iop);
    FUNC_4(&VAR_3->iop);
    break;
   case 128:
    FUNC_1(&VAR_3->work);
    break;
   default:
    FUNC_0(1);
   }
  }




  VAR_7->mcq.comp(&VAR_7->mcq);
 }

 FUNC_9(&VAR_4->done);
}
