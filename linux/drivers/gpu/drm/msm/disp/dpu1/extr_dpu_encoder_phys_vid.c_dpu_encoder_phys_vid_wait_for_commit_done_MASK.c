
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* get_flush_register ) (struct dpu_hw_ctl*) ;} ;
struct dpu_hw_ctl {TYPE_1__ ops; } ;
struct dpu_encoder_phys {int pending_kickoff_wq; struct dpu_hw_ctl* hw_ctl; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dpu_hw_ctl*) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(
  struct dpu_encoder_phys *VAR_1)
{
 struct dpu_hw_ctl *VAR_2 = VAR_1->hw_ctl;
 int VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_3(VAR_1->pending_kickoff_wq,
  (VAR_2->ops.get_flush_register(VAR_2) == 0),
  FUNC_1(50));
 if (VAR_3 <= 0) {
  FUNC_0("vblank timeout\n");
  return -VAR_0;
 }

 return 0;
}
