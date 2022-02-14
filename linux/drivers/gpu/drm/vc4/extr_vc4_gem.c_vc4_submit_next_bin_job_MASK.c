
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_exec_info {scalar_t__ perfmon; scalar_t__ ct0ca; scalar_t__ ct0ea; } ;
struct vc4_dev {scalar_t__ active_perfmon; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int ,scalar_t__,scalar_t__) ;
 struct vc4_dev* FUNC_1 (struct drm_device*) ;
 struct vc4_exec_info* FUNC_2 (struct vc4_dev*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*,struct vc4_exec_info*) ;
 int FUNC_5 (struct vc4_dev*,scalar_t__) ;

void
FUNC_6(struct drm_device *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_1(VAR_0);
 struct vc4_exec_info *VAR_2;

again:
 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return;

 FUNC_3(VAR_0);




 if (VAR_2->perfmon && VAR_1->active_perfmon != VAR_2->perfmon)
  FUNC_5(VAR_1, VAR_2->perfmon);




 if (VAR_2->ct0ca != VAR_2->ct0ea) {
  FUNC_0(VAR_0, 0, VAR_2->ct0ca, VAR_2->ct0ea);
 } else {
  struct vc4_exec_info *VAR_3;

  FUNC_4(VAR_0, VAR_2);
  VAR_3 = FUNC_2(VAR_1);






  if (VAR_3 && VAR_3->perfmon == VAR_2->perfmon)
   goto again;
 }
}
