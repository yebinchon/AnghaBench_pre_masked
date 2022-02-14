
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* trigger_start ) (struct dpu_hw_ctl*) ;} ;
struct dpu_hw_ctl {int idx; TYPE_1__ ops; } ;
struct dpu_encoder_phys {int parent; struct dpu_hw_ctl* hw_ctl; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dpu_hw_ctl*) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct dpu_encoder_phys *VAR_0)
{
 struct dpu_hw_ctl *VAR_1;

 if (!VAR_0) {
  FUNC_0("invalid encoder\n");
  return;
 }

 VAR_1 = VAR_0->hw_ctl;
 if (VAR_1 && VAR_1->ops.trigger_start) {
  VAR_1->ops.trigger_start(VAR_1);
  FUNC_3(FUNC_1(VAR_0->parent), VAR_1->idx);
 }
}
