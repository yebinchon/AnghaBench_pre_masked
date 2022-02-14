
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adap; char const* name; int unregister_work; struct device* parent; } ;
struct drm_dp_aux {TYPE_1__ cec; int transfer; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;

void FUNC_2(struct drm_dp_aux *VAR_1, const char *VAR_2,
       struct device *VAR_3)
{
 FUNC_1(VAR_1->cec.adap);
 if (FUNC_1(!VAR_1->transfer))
  return;
 VAR_1->cec.name = VAR_2;
 VAR_1->cec.parent = VAR_3;
 FUNC_0(&VAR_1->cec.unregister_work,
     VAR_0);
}
