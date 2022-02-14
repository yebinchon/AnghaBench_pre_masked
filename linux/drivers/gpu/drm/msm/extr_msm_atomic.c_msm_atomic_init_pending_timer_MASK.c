
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct msm_pending_timer {int crtc_idx; int work; TYPE_1__ timer; struct msm_kms* kms; } ;
struct msm_kms {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(struct msm_pending_timer *VAR_4,
  struct msm_kms *VAR_5, int VAR_6)
{
 VAR_4->kms = VAR_5;
 VAR_4->crtc_idx = VAR_6;
 FUNC_1(&VAR_4->timer, VAR_0, VAR_1);
 VAR_4->timer.function = VAR_2;
 FUNC_0(&VAR_4->work, VAR_3);
}
