
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpu_encoder_phys_cmd {int dummy; } ;
struct dpu_encoder_phys {scalar_t__ enable_state; TYPE_1__* hw_pp; } ;
struct TYPE_2__ {scalar_t__ idx; } ;


 int FUNC_0 (struct dpu_encoder_phys_cmd*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_phys_cmd* FUNC_3 (struct dpu_encoder_phys*) ;

__attribute__((used)) static void FUNC_4(struct dpu_encoder_phys *VAR_2)
{
 struct dpu_encoder_phys_cmd *VAR_3 =
  FUNC_3(VAR_2);

 if (!VAR_2 || !VAR_2->hw_pp) {
  FUNC_1("invalid phys encoder\n");
  return;
 }

 FUNC_0(VAR_3, "pp %d\n", VAR_2->hw_pp->idx - VAR_1);

 if (VAR_2->enable_state == VAR_0) {
  FUNC_1("already enabled\n");
  return;
 }

 FUNC_2(VAR_2);
 VAR_2->enable_state = VAR_0;
}
