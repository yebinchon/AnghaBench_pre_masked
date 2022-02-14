
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_encoder_phys {int parent; TYPE_1__* parent_ops; } ;
struct TYPE_2__ {int (* handle_underrun_virt ) (int ,struct dpu_encoder_phys*) ;} ;


 int FUNC_0 (int ,struct dpu_encoder_phys*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, int VAR_1)
{
 struct dpu_encoder_phys *VAR_2 = VAR_0;

 if (!VAR_2)
  return;

 if (VAR_2->parent_ops->handle_underrun_virt)
  VAR_2->parent_ops->handle_underrun_virt(VAR_2->parent,
   VAR_2);
}
