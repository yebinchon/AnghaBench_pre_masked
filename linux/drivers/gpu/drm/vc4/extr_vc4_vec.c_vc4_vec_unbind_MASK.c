
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_vec {int encoder; int connector; } ;
struct vc4_dev {int * vec; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 void* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 struct vc4_dev* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0, struct device *VAR_1,
      void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_0(VAR_1);
 struct vc4_dev *VAR_4 = FUNC_3(VAR_3);
 struct vc4_vec *VAR_5 = FUNC_0(VAR_0);

 FUNC_4(VAR_5->connector);
 FUNC_1(VAR_5->encoder);
 FUNC_2(VAR_0);

 VAR_4->vec = ((void*)0);
}
