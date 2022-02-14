
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;


 int FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct radeon_device*,struct drm_connector*) ;

__attribute__((used)) static void FUNC_2(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct radeon_device *VAR_2 = VAR_1->dev_private;

 FUNC_1(VAR_2, VAR_0);

 FUNC_0(VAR_0);
}
