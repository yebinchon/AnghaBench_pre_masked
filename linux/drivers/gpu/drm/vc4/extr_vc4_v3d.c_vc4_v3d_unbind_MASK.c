
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int * v3d; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct drm_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct device*) ;
 struct vc4_dev* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2, struct device *VAR_3,
      void *VAR_4)
{
 struct drm_device *VAR_5 = FUNC_1(VAR_3);
 struct vc4_dev *VAR_6 = FUNC_4(VAR_5);

 FUNC_3(VAR_2);

 FUNC_2(VAR_5);





 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_1, 0);

 VAR_6->v3d = ((void*)0);
}
