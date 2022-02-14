
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_private {int dummy; } ;
struct drm_device {struct sti_private* dev_private; int dev; } ;


 int FUNC_0 (int ,struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct sti_private*) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_0)
{
 struct sti_private *VAR_1 = VAR_0->dev_private;

 FUNC_2(VAR_0);
 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
 FUNC_0(VAR_0->dev, VAR_0);
 FUNC_4(VAR_1);
 VAR_0->dev_private = ((void*)0);
}
