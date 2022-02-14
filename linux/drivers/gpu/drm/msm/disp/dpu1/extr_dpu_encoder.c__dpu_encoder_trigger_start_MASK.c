
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* trigger_start ) (struct dpu_encoder_phys*) ;} ;
struct dpu_encoder_phys {scalar_t__ enable_state; TYPE_1__ ops; int hw_pp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_encoder_phys*) ;

__attribute__((used)) static void FUNC_2(struct dpu_encoder_phys *VAR_1)
{
 if (!VAR_1) {
  FUNC_0("invalid argument(s)\n");
  return;
 }

 if (!VAR_1->hw_pp) {
  FUNC_0("invalid pingpong hw\n");
  return;
 }

 if (VAR_1->ops.trigger_start && VAR_1->enable_state != VAR_0)
  VAR_1->ops.trigger_start(VAR_1);
}
