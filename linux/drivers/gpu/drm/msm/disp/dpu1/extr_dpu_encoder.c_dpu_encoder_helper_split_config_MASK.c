
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct split_pipe_cfg {int en; int intf; int split_flush_en; int mode; int member_0; } ;
struct msm_display_info {scalar_t__ intf_type; } ;
struct TYPE_4__ {int (* setup_split_pipe ) (struct dpu_hw_mdp*,struct split_pipe_cfg*) ;} ;
struct dpu_hw_mdp {TYPE_2__ ops; } ;
struct dpu_encoder_virt {struct msm_display_info disp_info; } ;
struct TYPE_3__ {scalar_t__ (* needs_single_flush ) (struct dpu_encoder_phys*) ;} ;
struct dpu_encoder_phys {scalar_t__ split_role; TYPE_1__ ops; int intf_mode; struct dpu_hw_mdp* hw_mdptop; int parent; } ;
typedef enum dpu_intf { ____Placeholder_dpu_intf } dpu_intf ;


 int FUNC_0 (struct dpu_encoder_virt*,char*,int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct dpu_hw_mdp*,struct split_pipe_cfg*) ;
 scalar_t__ FUNC_3 (struct dpu_encoder_phys*) ;
 int FUNC_4 (struct dpu_hw_mdp*,struct split_pipe_cfg*) ;
 struct dpu_encoder_virt* FUNC_5 (int ) ;

void FUNC_6(
  struct dpu_encoder_phys *VAR_3,
  enum dpu_intf VAR_4)
{
 struct dpu_encoder_virt *VAR_5;
 struct split_pipe_cfg VAR_6 = { 0 };
 struct dpu_hw_mdp *VAR_7;
 struct msm_display_info *VAR_8;

 if (!VAR_3 || !VAR_3->hw_mdptop || !VAR_3->parent) {
  FUNC_1("invalid arg(s), encoder %d\n", VAR_3 != 0);
  return;
 }

 VAR_5 = FUNC_5(VAR_3->parent);
 VAR_7 = VAR_3->hw_mdptop;
 VAR_8 = &VAR_5->disp_info;

 if (VAR_8->intf_type != VAR_0)
  return;







 if (VAR_3->split_role == VAR_2) {
  if (VAR_7->ops.setup_split_pipe)
   VAR_7->ops.setup_split_pipe(VAR_7, &VAR_6);
  return;
 }

 VAR_6.en = 1;
 VAR_6.mode = VAR_3->intf_mode;
 VAR_6.intf = VAR_4;

 if (VAR_6.en && VAR_3->ops.needs_single_flush &&
   VAR_3->ops.needs_single_flush(VAR_3))
  VAR_6.split_flush_en = 1;

 if (VAR_3->split_role == VAR_1) {
  FUNC_0(VAR_5, "enable %d\n", VAR_6.en);

  if (VAR_7->ops.setup_split_pipe)
   VAR_7->ops.setup_split_pipe(VAR_7, &VAR_6);
 }
}
