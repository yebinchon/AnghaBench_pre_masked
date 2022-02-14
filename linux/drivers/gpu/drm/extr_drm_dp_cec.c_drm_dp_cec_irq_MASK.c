
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int lock; int adap; } ;
struct drm_dp_aux {TYPE_1__ cec; int transfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_dp_aux*) ;
 int FUNC_1 (struct drm_dp_aux*,int ,int*) ;
 int FUNC_2 (struct drm_dp_aux*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_dp_aux *VAR_2)
{
 u8 VAR_3;
 int VAR_4;


 if (!VAR_2->transfer)
  return;

 FUNC_3(&VAR_2->cec.lock);
 if (!VAR_2->cec.adap)
  goto unlock;

 VAR_4 = FUNC_1(VAR_2, VAR_1,
    &VAR_3);
 if (VAR_4 < 0 || !(VAR_3 & VAR_0))
  goto unlock;

 FUNC_0(VAR_2);
 FUNC_2(VAR_2, VAR_1, VAR_0);
unlock:
 FUNC_4(&VAR_2->cec.lock);
}
