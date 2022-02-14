
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int underrun; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 struct vc4_dev* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->underrun);
 FUNC_0(VAR_0->dev, "HVS underrun\n");
}
