
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc4_dev {int v3d; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 struct vc4_dev* FUNC_1 (struct drm_device*) ;

int
FUNC_2(struct drm_device *VAR_3)
{
 struct vc4_dev *VAR_4 = FUNC_1(VAR_3);

 if (!VAR_4->v3d)
  return 0;




 FUNC_0(VAR_0, VAR_1 | VAR_2);

 return 0;
}
