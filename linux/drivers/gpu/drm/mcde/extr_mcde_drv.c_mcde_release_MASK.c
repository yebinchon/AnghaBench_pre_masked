
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcde {int dummy; } ;
struct drm_device {struct mcde* dev_private; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct mcde*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0)
{
 struct mcde *VAR_1 = VAR_0->dev_private;

 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
 FUNC_2(VAR_1);
}
