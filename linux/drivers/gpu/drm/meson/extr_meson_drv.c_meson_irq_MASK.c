
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_drm {scalar_t__ io_base; } ;
struct drm_device {struct meson_drm* dev_private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct meson_drm*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3;
 struct meson_drm *VAR_5 = VAR_4->dev_private;

 (void)FUNC_2(VAR_5->io_base + FUNC_0(VAR_1));

 FUNC_1(VAR_5);

 return VAR_0;
}
