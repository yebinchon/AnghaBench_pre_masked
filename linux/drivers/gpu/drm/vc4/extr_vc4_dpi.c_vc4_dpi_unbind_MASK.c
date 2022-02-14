
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dpi {int core_clock; int encoder; } ;
struct vc4_dev {int * dpi; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 struct vc4_dev* FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0, struct device *VAR_1,
      void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_1(VAR_1);
 struct vc4_dev *VAR_4 = FUNC_4(VAR_3);
 struct vc4_dpi *VAR_5 = FUNC_1(VAR_0);

 FUNC_3(VAR_0->of_node, 0, 0);

 FUNC_2(VAR_5->encoder);

 FUNC_0(VAR_5->core_clock);

 VAR_4->dpi = ((void*)0);
}
