
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct msm_edp {int * ctrl; } ;


 int FUNC_0 (int *) ;
 struct msm_edp* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,int *) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0)
{
 struct msm_edp *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_1)
  return;

 if (VAR_1->ctrl) {
  FUNC_0(VAR_1->ctrl);
  VAR_1->ctrl = ((void*)0);
 }

 FUNC_2(VAR_0, ((void*)0));
}
