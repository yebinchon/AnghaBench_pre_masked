
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_exec_info {int ct1ea; int ct1ca; } ;
struct vc4_dev {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int,int ,int ) ;
 struct vc4_dev* FUNC_1 (struct drm_device*) ;
 struct vc4_exec_info* FUNC_2 (struct vc4_dev*) ;
 int FUNC_3 (struct drm_device*) ;

void
FUNC_4(struct drm_device *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_1(VAR_0);
 struct vc4_exec_info *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2)
  return;







 FUNC_3(VAR_0);

 FUNC_0(VAR_0, 1, VAR_2->ct1ca, VAR_2->ct1ea);
}
