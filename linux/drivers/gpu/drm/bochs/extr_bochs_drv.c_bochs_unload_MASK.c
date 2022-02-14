
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct bochs_device* dev_private; } ;
struct bochs_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct bochs_device*) ;
 int FUNC_2 (struct bochs_device*) ;
 int FUNC_3 (struct bochs_device*) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_0)
{
 struct bochs_device *VAR_1 = VAR_0->dev_private;

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_0);
 FUNC_3(VAR_1);
 VAR_0->dev_private = ((void*)0);
}
