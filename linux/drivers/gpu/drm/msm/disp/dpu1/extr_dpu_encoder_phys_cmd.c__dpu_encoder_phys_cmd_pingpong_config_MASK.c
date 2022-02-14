
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dpu_encoder_phys_cmd {int dummy; } ;
struct dpu_encoder_phys {int cached_mode; TYPE_1__* hw_pp; TYPE_3__* hw_ctl; } ;
struct TYPE_5__ {int setup_intf_cfg; } ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ idx; } ;


 int FUNC_0 (struct dpu_encoder_phys_cmd*,char*,scalar_t__) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct dpu_encoder_phys*) ;
 int FUNC_3 (struct dpu_encoder_phys*) ;
 int FUNC_4 (int *) ;
 struct dpu_encoder_phys_cmd* FUNC_5 (struct dpu_encoder_phys*) ;

__attribute__((used)) static void FUNC_6(
  struct dpu_encoder_phys *VAR_1)
{
 struct dpu_encoder_phys_cmd *VAR_2 =
  FUNC_5(VAR_1);

 if (!VAR_1 || !VAR_1->hw_ctl || !VAR_1->hw_pp
   || !VAR_1->hw_ctl->ops.setup_intf_cfg) {
  FUNC_1("invalid arg(s), enc %d\n", VAR_1 != 0);
  return;
 }

 FUNC_0(VAR_2, "pp %d, enabling mode:\n",
   VAR_1->hw_pp->idx - VAR_0);
 FUNC_4(&VAR_1->cached_mode);

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
}
