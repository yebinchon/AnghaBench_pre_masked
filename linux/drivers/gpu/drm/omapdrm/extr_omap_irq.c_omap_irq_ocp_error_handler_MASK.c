
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_1,
 u32 VAR_2)
{
 if (!(VAR_2 & VAR_0))
  return;

 FUNC_0(VAR_1->dev, "OCP error\n");
}
