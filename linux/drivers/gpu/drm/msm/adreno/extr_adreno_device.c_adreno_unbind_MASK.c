
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {TYPE_1__* funcs; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* destroy ) (struct msm_gpu*) ;} ;


 struct msm_gpu* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct msm_gpu*,int *) ;
 int FUNC_3 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1,
  void *VAR_2)
{
 struct msm_gpu *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 VAR_3->funcs->destroy(VAR_3);

 FUNC_2(FUNC_0(VAR_1), ((void*)0));
}
