
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct msm_drm_private {int dummy; } ;
struct dpu_encoder_phys {scalar_t__ hw_ctl; scalar_t__ enable_state; TYPE_3__* hw_intf; TYPE_4__* parent; int pending_kickoff_cnt; int enc_spinlock; } ;
struct TYPE_8__ {TYPE_1__* dev; } ;
struct TYPE_6__ {int (* enable_timing ) (TYPE_3__*,int ) ;} ;
struct TYPE_7__ {scalar_t__ idx; TYPE_2__ ops; } ;
struct TYPE_5__ {struct msm_drm_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*,int ,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct dpu_encoder_phys*) ;
 scalar_t__ FUNC_6 (struct dpu_encoder_phys*) ;
 int FUNC_7 (struct dpu_encoder_phys*) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_11(struct dpu_encoder_phys *VAR_2)
{
 struct msm_drm_private *VAR_3;
 unsigned long VAR_4;
 int VAR_5;

 if (!VAR_2 || !VAR_2->parent || !VAR_2->parent->dev ||
   !VAR_2->parent->dev->dev_private) {
  FUNC_0("invalid encoder/device\n");
  return;
 }
 VAR_3 = VAR_2->parent->dev->dev_private;

 if (!VAR_2->hw_intf || !VAR_2->hw_ctl) {
  FUNC_0("invalid hw_intf %d hw_ctl %d\n",
    VAR_2->hw_intf != 0, VAR_2->hw_ctl != 0);
  return;
 }

 if (FUNC_3(!VAR_2->hw_intf->ops.enable_timing))
  return;

 if (VAR_2->enable_state == VAR_0) {
  FUNC_0("already disabled\n");
  return;
 }

 FUNC_8(VAR_2->enc_spinlock, VAR_4);
 VAR_2->hw_intf->ops.enable_timing(VAR_2->hw_intf, 0);
 if (FUNC_6(VAR_2))
  FUNC_5(VAR_2);
 FUNC_9(VAR_2->enc_spinlock, VAR_4);
 if (FUNC_6(VAR_2)) {
  VAR_5 = FUNC_7(VAR_2);
  if (VAR_5) {
   FUNC_4(&VAR_2->pending_kickoff_cnt, 0);
   FUNC_2("wait disable failed: id:%u intf:%d ret:%d\n",
      FUNC_1(VAR_2->parent),
      VAR_2->hw_intf->idx - VAR_1, VAR_5);
  }
 }

 VAR_2->enable_state = VAR_0;
}
