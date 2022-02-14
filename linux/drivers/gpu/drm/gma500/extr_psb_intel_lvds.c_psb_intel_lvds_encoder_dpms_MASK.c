
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int) ;

__attribute__((used)) static void FUNC_1(struct drm_encoder *VAR_1, int VAR_2)
{
 struct drm_device *VAR_3 = VAR_1->dev;

 if (VAR_2 == VAR_0)
  FUNC_0(VAR_3, 1);
 else
  FUNC_0(VAR_3, 0);


}
