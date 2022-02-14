
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* reset ) (struct dpu_hw_ctl*) ;} ;
struct dpu_hw_ctl {int idx; TYPE_1__ ops; } ;
struct dpu_encoder_virt {int dummy; } ;
struct dpu_encoder_phys {int enable_state; int parent; struct dpu_hw_ctl* hw_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_encoder_virt*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct dpu_hw_ctl*) ;
 struct dpu_encoder_virt* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct dpu_encoder_phys *VAR_1)
{
 struct dpu_encoder_virt *VAR_2;
 struct dpu_hw_ctl *VAR_3;
 int VAR_4;

 if (!VAR_1) {
  FUNC_0("invalid encoder\n");
  return;
 }
 VAR_2 = FUNC_5(VAR_1->parent);
 VAR_3 = VAR_1->hw_ctl;

 if (!VAR_3 || !VAR_3->ops.reset)
  return;

 FUNC_3("id:%u ctl %d reset\n", FUNC_2(VAR_1->parent),
        VAR_3->idx);

 VAR_4 = VAR_3->ops.reset(VAR_3);
 if (VAR_4)
  FUNC_1(VAR_2, "ctl %d reset failure\n", VAR_3->idx);

 VAR_1->enable_state = VAR_0;
}
