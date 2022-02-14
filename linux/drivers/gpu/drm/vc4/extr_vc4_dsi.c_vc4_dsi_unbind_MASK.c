
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dsi {int port; int encoder; scalar_t__ bridge; } ;
struct vc4_dev {int * dsi1; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;


 void* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 struct vc4_dev* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1,
      void *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_0(VAR_1);
 struct vc4_dev *VAR_4 = FUNC_2(VAR_3);
 struct vc4_dsi *VAR_5 = FUNC_0(VAR_0);

 if (VAR_5->bridge)
  FUNC_1(VAR_0);

 FUNC_3(VAR_5->encoder);

 if (VAR_5->port == 1)
  VAR_4->dsi1 = ((void*)0);
}
