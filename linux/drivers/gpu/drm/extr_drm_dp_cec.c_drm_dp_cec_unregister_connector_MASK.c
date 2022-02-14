
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * adap; int unregister_work; } ;
struct drm_dp_aux {TYPE_1__ cec; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct drm_dp_aux *VAR_0)
{
 if (!VAR_0->cec.adap)
  return;
 FUNC_0(&VAR_0->cec.unregister_work);
 FUNC_1(VAR_0->cec.adap);
 VAR_0->cec.adap = ((void*)0);
}
