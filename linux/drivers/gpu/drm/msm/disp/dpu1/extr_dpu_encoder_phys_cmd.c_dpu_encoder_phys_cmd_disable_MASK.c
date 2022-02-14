
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_encoder_phys_cmd {int dummy; } ;
struct dpu_encoder_phys {scalar_t__ enable_state; TYPE_2__* hw_pp; int parent; } ;
struct TYPE_3__ {int (* enable_tearcheck ) (TYPE_2__*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; scalar_t__ idx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_encoder_phys_cmd*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_2__*,int) ;
 struct dpu_encoder_phys_cmd* FUNC_5 (struct dpu_encoder_phys*) ;

__attribute__((used)) static void FUNC_6(struct dpu_encoder_phys *VAR_2)
{
 struct dpu_encoder_phys_cmd *VAR_3 =
  FUNC_5(VAR_2);

 if (!VAR_2 || !VAR_2->hw_pp) {
  FUNC_0("invalid encoder\n");
  return;
 }
 FUNC_3("id:%u pp:%d state:%d\n", FUNC_2(VAR_2->parent),
        VAR_2->hw_pp->idx - VAR_1,
        VAR_2->enable_state);

 if (VAR_2->enable_state == VAR_0) {
  FUNC_1(VAR_3, "already disabled\n");
  return;
 }

 if (VAR_2->hw_pp->ops.enable_tearcheck)
  VAR_2->hw_pp->ops.enable_tearcheck(VAR_2->hw_pp, 0);
 VAR_2->enable_state = VAR_0;
}
