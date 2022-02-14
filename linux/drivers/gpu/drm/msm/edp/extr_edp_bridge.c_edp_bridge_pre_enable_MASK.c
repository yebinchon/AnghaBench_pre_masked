
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_edp {int ctrl; } ;
struct edp_bridge {struct msm_edp* edp; } ;
struct drm_bridge {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 struct edp_bridge* FUNC_2 (struct drm_bridge*) ;

__attribute__((used)) static void FUNC_3(struct drm_bridge *VAR_0)
{
 struct edp_bridge *VAR_1 = FUNC_2(VAR_0);
 struct msm_edp *VAR_2 = VAR_1->edp;

 FUNC_0("");
 FUNC_1(VAR_2->ctrl, 1);
}
