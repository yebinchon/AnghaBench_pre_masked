
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_encoder_phys {int parent; TYPE_2__* parent_ops; TYPE_1__* hw_pp; scalar_t__ intf_idx; } ;
typedef enum dpu_intr_idx { ____Placeholder_dpu_intr_idx } dpu_intr_idx ;
struct TYPE_4__ {int (* handle_frame_done ) (int ,struct dpu_encoder_phys*,int ) ;} ;
struct TYPE_3__ {scalar_t__ idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,struct dpu_encoder_phys*,int ) ;

void FUNC_3(struct dpu_encoder_phys *VAR_3,
  enum dpu_intr_idx VAR_4)
{
 FUNC_1("irq timeout id=%u, intf=%d, pp=%d, intr=%d\n",
    FUNC_0(VAR_3->parent), VAR_3->intf_idx - VAR_1,
    VAR_3->hw_pp->idx - VAR_2, VAR_4);

 if (VAR_3->parent_ops->handle_frame_done)
  VAR_3->parent_ops->handle_frame_done(
    VAR_3->parent, VAR_3,
    VAR_0);
}
