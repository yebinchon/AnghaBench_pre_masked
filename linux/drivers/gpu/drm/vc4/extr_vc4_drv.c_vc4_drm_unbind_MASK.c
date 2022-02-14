
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int ctm_manager; int load_tracker; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 struct drm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 struct vc4_dev* FUNC_6 (struct drm_device*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_0(VAR_0);
 struct vc4_dev *VAR_2 = FUNC_6(VAR_1);

 FUNC_4(VAR_1);

 FUNC_1(VAR_1);

 FUNC_5(VAR_1);

 FUNC_2(&VAR_2->load_tracker);
 FUNC_2(&VAR_2->ctm_manager);

 FUNC_3(VAR_1);
}
