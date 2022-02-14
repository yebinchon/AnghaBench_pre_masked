
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* get_flush_register ) (struct dpu_hw_ctl*) ;int (* get_pending_flush ) (struct dpu_hw_ctl*) ;} ;
struct dpu_hw_ctl {TYPE_1__ ops; } ;
struct dpu_encoder_phys {int parent; TYPE_2__* parent_ops; int pending_kickoff_wq; int enc_spinlock; int pending_kickoff_cnt; struct dpu_hw_ctl* hw_ctl; } ;
struct TYPE_4__ {int (* handle_frame_done ) (int ,struct dpu_encoder_phys*,int ) ;int (* handle_vblank_virt ) (int ,struct dpu_encoder_phys*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,struct dpu_encoder_phys*) ;
 int FUNC_7 (struct dpu_hw_ctl*) ;
 int FUNC_8 (struct dpu_hw_ctl*) ;
 int FUNC_9 (int ,struct dpu_encoder_phys*,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void *VAR_1, int VAR_2)
{
 struct dpu_encoder_phys *VAR_3 = VAR_1;
 struct dpu_hw_ctl *VAR_4;
 unsigned long VAR_5;
 u32 VAR_6 = 0;
 int VAR_7 = -1, VAR_8 = -1;

 if (!VAR_3)
  return;

 VAR_4 = VAR_3->hw_ctl;
 if (!VAR_4)
  return;

 FUNC_0("vblank_irq");

 if (VAR_3->parent_ops->handle_vblank_virt)
  VAR_3->parent_ops->handle_vblank_virt(VAR_3->parent,
    VAR_3);

 VAR_8 = FUNC_3(&VAR_3->pending_kickoff_cnt);






 FUNC_4(VAR_3->enc_spinlock, VAR_5);
 if (VAR_4 && VAR_4->ops.get_flush_register)
  VAR_6 = VAR_4->ops.get_flush_register(VAR_4);

 if (!(VAR_6 & VAR_4->ops.get_pending_flush(VAR_4)))
  VAR_7 = FUNC_2(&VAR_3->pending_kickoff_cnt,
    -1, 0);
 FUNC_5(VAR_3->enc_spinlock, VAR_5);


 FUNC_10(&VAR_3->pending_kickoff_wq);

 VAR_3->parent_ops->handle_frame_done(VAR_3->parent, VAR_3,
   VAR_0);

 FUNC_1("vblank_irq");
}
