
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dpu_encoder_phys {int pending_kickoff_wq; TYPE_2__* hw_pp; int parent; int enc_spinlock; int pending_kickoff_cnt; TYPE_1__* parent_ops; } ;
struct TYPE_4__ {scalar_t__ idx; } ;
struct TYPE_3__ {int (* handle_frame_done ) (int ,struct dpu_encoder_phys*,int ) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,struct dpu_encoder_phys*,int ) ;
 int FUNC_7 (int ,scalar_t__,int,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(void *VAR_2, int VAR_3)
{
 struct dpu_encoder_phys *VAR_4 = VAR_2;
 unsigned long VAR_5;
 int VAR_6;
 u32 VAR_7 = VAR_0;

 if (!VAR_4 || !VAR_4->hw_pp)
  return;

 FUNC_0("pp_done_irq");

 if (VAR_4->parent_ops->handle_frame_done)
  VAR_4->parent_ops->handle_frame_done(VAR_4->parent,
    VAR_4, VAR_7);

 FUNC_4(VAR_4->enc_spinlock, VAR_5);
 VAR_6 = FUNC_3(&VAR_4->pending_kickoff_cnt, -1, 0);
 FUNC_5(VAR_4->enc_spinlock, VAR_5);

 FUNC_7(FUNC_2(VAR_4->parent),
       VAR_4->hw_pp->idx - VAR_1,
       VAR_6, VAR_7);


 FUNC_8(&VAR_4->pending_kickoff_wq);
 FUNC_1("pp_done_irq");
}
