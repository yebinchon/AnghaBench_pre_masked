
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct decon_context {int dev; int drm_dev; int crtc; } ;


 int FUNC_0 (int ) ;
 struct decon_context* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct decon_context *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->crtc);


 FUNC_2(VAR_3->drm_dev, VAR_3->dev);
}
