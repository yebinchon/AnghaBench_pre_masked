
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_exec_info {scalar_t__ perfmon; } ;
struct vc4_dev {int dummy; } ;
struct drm_device {int dummy; } ;


 struct vc4_dev* FUNC_0 (struct drm_device*) ;
 struct vc4_exec_info* FUNC_1 (struct vc4_dev*) ;
 int FUNC_2 (struct drm_device*,struct vc4_exec_info*) ;
 int FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_4(struct drm_device *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_0(VAR_0);
 struct vc4_exec_info *VAR_2, *VAR_3 = FUNC_1(VAR_1);

 if (!VAR_3)
  return;

 FUNC_2(VAR_0, VAR_3);
 VAR_2 = FUNC_1(VAR_1);





 if (VAR_2 && VAR_2->perfmon == VAR_3->perfmon)
  FUNC_3(VAR_0);
}
