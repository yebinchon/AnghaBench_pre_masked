
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* wait_reset_status ) (struct dpu_hw_ctl*) ;} ;
struct dpu_hw_ctl {int idx; TYPE_1__ ops; } ;
struct dpu_encoder_phys {struct dpu_hw_ctl* hw_ctl; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_encoder_phys*,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct dpu_encoder_phys*,int ) ;
 int FUNC_3 (struct dpu_hw_ctl*) ;

__attribute__((used)) static void FUNC_4(
  struct dpu_encoder_phys *VAR_1)
{
 struct dpu_hw_ctl *VAR_2;
 int VAR_3;

 if (!VAR_1) {
  FUNC_0("invalid encoder/parameters\n");
  return;
 }

 VAR_2 = VAR_1->hw_ctl;
 if (!VAR_2 || !VAR_2->ops.wait_reset_status)
  return;





 VAR_3 = VAR_2->ops.wait_reset_status(VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_1, "ctl %d reset failure: %d\n",
    VAR_2->idx, VAR_3);
  FUNC_2(VAR_1, VAR_0);
 }
}
