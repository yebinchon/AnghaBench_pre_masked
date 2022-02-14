
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_encoder_phys_cmd {int pending_vblank_wq; int pending_vblank_cnt; } ;
struct dpu_encoder_phys {int parent; TYPE_1__* parent_ops; int hw_pp; } ;
struct TYPE_2__ {int (* handle_vblank_virt ) (int ,struct dpu_encoder_phys*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ,struct dpu_encoder_phys*) ;
 struct dpu_encoder_phys_cmd* FUNC_4 (struct dpu_encoder_phys*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_0, int VAR_1)
{
 struct dpu_encoder_phys *VAR_2 = VAR_0;
 struct dpu_encoder_phys_cmd *VAR_3;

 if (!VAR_2 || !VAR_2->hw_pp)
  return;

 FUNC_0("rd_ptr_irq");
 VAR_3 = FUNC_4(VAR_2);

 if (VAR_2->parent_ops->handle_vblank_virt)
  VAR_2->parent_ops->handle_vblank_virt(VAR_2->parent,
   VAR_2);

 FUNC_2(&VAR_3->pending_vblank_cnt, -1, 0);
 FUNC_5(&VAR_3->pending_vblank_wq);
 FUNC_1("rd_ptr_irq");
}
