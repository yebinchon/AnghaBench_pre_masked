
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int unregister_work; int adap; } ;
struct drm_dp_aux {TYPE_1__ cec; int transfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_dp_aux*,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

void FUNC_6(struct drm_dp_aux *VAR_3)
{

 if (!VAR_3->transfer)
  return;

 FUNC_0(&VAR_3->cec.unregister_work);

 FUNC_3(&VAR_3->cec.lock);
 if (!VAR_3->cec.adap)
  goto unlock;

 FUNC_1(VAR_3->cec.adap);






 if (VAR_2 < VAR_1 &&
     !FUNC_2(VAR_3, ((void*)0))) {





  FUNC_5(&VAR_3->cec.unregister_work,
          VAR_2 * VAR_0);
 }
unlock:
 FUNC_4(&VAR_3->cec.lock);
}
